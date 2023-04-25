# Get the array of move identifiers in order from moves.h
# Check that existing identifiers in move_names.h are in the same order
# Remove existing identifiers from move_names.h
# Use move names in order from attack_name_table.string and identifiers from moves.h to populate move_names.h
# Ignore MOVE_NONE throughout

import os

moves_path = os.path.join(os.path.dirname(__file__), '..', 'include', 'constants', 'moves.h')
new_move_name_table_path = os.path.join(os.path.dirname(__file__), '..', '..', 'Complete-Fire-Red-Upgrade', 'strings', 'attack_name_table.string')
target_move_names_path = os.path.join(os.path.dirname(__file__), '..', 'src', 'data', 'text', 'move_names.h')

def read_file(path: str) -> list[str]:
    result = []
    with open(path, 'r') as f:
        lines = f.readlines()
    
    for line in lines:
        result.append(line)
    return result

def get_moves_identifiers() -> list[str]:
    result: list[str] = []
    lines = read_file(moves_path)
    start_line_index = 6
    end_line_index = 940
    move_number_to_match_with = 1
    for i in range(start_line_index, end_line_index):
        line = lines[i].strip()
        if len(line) == 0 or line.startswith('//'):
            continue
        parts = [p for p in line.split(' ') if len(p) > 0]
        try:
            move_number = int(parts[2][2:], 16)
        except:
            continue
        if move_number != move_number_to_match_with:
            raise Exception('Move number mismatch')
        result.append(parts[1])
        move_number_to_match_with += 1
    return result
    
def existing_move_names_are_in_order(move_identifiers: list[str]) -> bool:
    lines = read_file(target_move_names_path)
    start_line_index = 2
    end_line_index = 356
    for i in range(start_line_index, end_line_index):
        line = lines[i]
        open_bracket_idx = line.index('[')
        close_bracket_idx = line.index(']')
        move_identifier = line[open_bracket_idx+1:close_bracket_idx]
        if (move_identifier != move_identifiers[i - start_line_index]):
            return False
    return True

def get_new_move_names() -> list[str]:
    lines = read_file(new_move_name_table_path)
    return [lines[i].strip() for i in range(8, 2774, 3)]

def rewrite_move_names(move_identifiers: list[str], move_names: list[str]):
    if len(move_identifiers) != len(move_names):
        raise Exception('Number of move identifiers different from number of move names')
    lines = read_file(target_move_names_path)
    prefix = lines[:2]
    suffix = lines[356:]
    to_insert = [f'    [{move_identifiers[i]}] = _("{move_names[i]}"),\n' for i in range(len(move_identifiers) - 1)]
    last_idx = len(move_identifiers) - 1
    last_move_name_line = f'    [{move_identifiers[last_idx]}] = _("{move_names[last_idx]}")\n'
    to_write = ''.join(prefix + to_insert + [last_move_name_line] + suffix)
    with open(target_move_names_path, 'w') as f:
        f.write(to_write)

move_identifiers = get_moves_identifiers()
if not existing_move_names_are_in_order(move_identifiers):
    raise Exception('Existing move names are not in expected order')
new_move_names = get_new_move_names()
rewrite_move_names(move_identifiers, new_move_names)
