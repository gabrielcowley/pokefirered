# Deal with different types of images separately
# Copy images over, convert them to lowercase and convert bmps to pngs
# Add INCBIN_U32 imports in relevant file - also add to header file
# And all other required stuff
# - graphics->Attack_Particles - graphics->battle_anims->sprites (bmps and pngs)

import ast
import operator as op
import ntpath
from os import listdir
from os.path import isfile, join

from PIL import Image

def get_image_paths(folder_path: str) -> list[str]:
    return [f for f in listdir(folder_path) if isfile(join(folder_path, f)) and (f.endswith('.bmp') or f.endswith('.png'))]

def copy_images(input_folder_path: str, output_folder_path: str, input_filenames_to_check: list[str]):
    full_filenames_checked: list[str] = []
    input_paths = get_image_paths(input_folder_path)
    for input_path in input_paths:
        _, input_filename = ntpath.split(input_path)
        input_filename_without_extension = input_filename[:-4]
        if input_filename_without_extension not in input_filenames_to_check:
            raise Exception('File not in expected list of filenames')
        full_filenames_checked.append(input_filename_without_extension)
        lowercase_input_filename_without_extension = input_filename_without_extension.lower()
        output_filename = lowercase_input_filename_without_extension + '.png'
        Image.open(input_path).save(join(output_folder_path, output_filename))
    if len(full_filenames_checked) != len(input_filenames_to_check):
        raise Exception('Not all input filenames have been used to copy images')

def read_file(path: str) -> list[str]:
    with open(path, 'r') as f:
        lines = f.readlines()
    return lines

def eval_math_expr(node: ast.expr) -> int:
    operators = {ast.Mult: op.mul, ast.Div: op.floordiv}
    if isinstance(node, ast.Num):
        return int(node.n)
    elif isinstance(node, ast.BinOp):
        return operators[type(node.op)](eval_math_expr(node.left), eval_math_expr(node.right))
    else:
        raise TypeError(node)
    
def eval_math_expr_string(expr_str: str) -> int:
    return eval_math_expr(ast.parse(expr_str, mode='eval').body)

# cfru
# assembly/data/anim_particle_table.s
def get_cfru_battle_anim_pic_table(input_path: str) -> list[tuple[str or None, int, str]]:
    result: list[tuple[str or None, int, str]] = []
    table_lines = read_file(input_path)[19:392]
    for table_line in table_lines:
        command_removed = table_line[:len('animparticle ')]
        table_line_parts = [p.strip() for p in command_removed.split(',')]
        if len(table_line_parts) < 3:
            continue
        anim_tag = table_line_parts[2].split('@')[0].strip()
        identifier = None if table_line_parts[0].startswith('0x') else table_line_parts[0]
        if identifier is not None and not identifier.endswith('_IMG'):
            raise Exception('Unexpected img identifier suffix')
        image_size = eval_math_expr_string(table_line_parts[1])
        result.append(identifier, image_size, anim_tag)
    return result

# cfru
# assembly/data/anim_particle_table.s
def get_cfru_battle_anim_palette_table(input_path: str) -> list[tuple[str or None, str]]:
    result: list[tuple[str or None, str]] = []
    table_lines = read_file(input_path)[394:]
    for table_line in table_lines:
        command_removed = table_line[:len('animparticlepal ')]
        table_line_parts = [p.strip() for p in command_removed.split(',')]
        if len(table_line_parts) < 2:
            continue
        anim_tag = table_line_parts[1].split('@')[0].strip()
        identifier = None if table_line_parts[0].startswith('0x') else table_line_parts[0]
        if identifier is not None and not identifier.endswith('_PAL'):
            raise Exception('Unexpected pal identifier suffix')
        result.append(identifier, anim_tag)
    return result

# cfru
# assembly/data/anim_particle_graphic_defines.s
def get_cfru_file_names_and_img_pal_identifiers(input_path: str) -> dict[str, tuple[str or None, str or None]]:
    result: dict[str, tuple[str or None, str or None]] = {}
    lines = [l[len('.equ '):(l.find('@') if l.find('@') >= 0 else len(l))].strip() for l in read_file(input_path)[4:] if l.startswith('.equ ')]
    for line in lines:
        [identifier, filename_with_suffix] = [l.strip() for l in line.split(',')]
        if (filename_with_suffix.endswith('Tiles')):
            if not identifier.endswith('_IMG'):
                raise Exception('identifier-file mismatch')
            filename = filename_with_suffix[:len(filename_with_suffix) - len('Tiles')]
            if filename in result:
                if result[filename][0] is not None:
                    raise Exception('attempting to assign identifier twice')
                result[filename][0] = identifier
            else:
                result[filename] = (identifier, None)
        elif (filename_with_suffix.endswith('Pal')):
            if not identifier.endswith('_PAL'):
                raise Exception('identifier-file mismatch')
            filename = filename_with_suffix[:len(filename_with_suffix) - len('Pal')]
            if filename in result:
                if result[filename][1] is not None:
                    raise Exception('attempting to assign identifier twice')
                result[filename][1] = identifier
            else:
                result[filename] = (None, identifier)
        # There are a couple of entries that point to unused identifiers - there's a hex string instead of a filename
    return result

# This is used to look up original image pointers and sanity check that image sizes are the same
# pokefirered
# src/data/battle_anim.h
def get_original_image_pointers_and_size(input_path: str) -> dict[str, tuple[str, int]]:
    result: dict[str, tuple[str, int]] = {}
    lines = read_file(input_path)[1011:1300]
    for line in lines:
        between_brackets = line.split('{')[1].split('}')[0]
        line_parts = [l.strip() for l in between_brackets.split(',')]
        result[line_parts[2]] = (line_parts[0], eval_math_expr_string(line_parts[1]))
    return result

# pokefirered
# src/data/battle_anim.h
def get_original_palette_pointers(input_path: str) -> dict[str, str]:
    result: dict[str, tuple[str, int]] = {}
    lines = read_file(input_path)[1304:1593]
    for line in lines:
        between_brackets = line.split('{')[1].split('}')[0]
        line_parts = [l.strip() for l in between_brackets.split(',')]
        result[line_parts[1]] = line_parts[0]
    return result

def get_cfru_image_filenames_without_extension(battle_anim_pic_table: list[tuple[str or None, int, str]], battle_anim_palette_table: list[tuple[str or None, str]]) -> list[str]:
    result_set: set[str] = set()
    for (identifier, _, _) in battle_anim_pic_table:
        if identifier is None:
            continue
        filename = identifier[:len(identifier) - len('Tiles')]
        result_set.add(filename)
    for (identifier, _) in battle_anim_palette_table:
        if identifier is None:
            continue
        filename = identifier[:len(identifier) - len('Pal')]
        result_set.add(filename)
    return list(result_set)


# TODO Get a list of original anim tags
# This can be used by diffing cfru anim tags against original anim tags to find the original ones no longer in use
# At the relevant editing points, the filename assignments and original files can be deleted

# If you're stuck, try starting to write the overarching function which gathers the data, edits the original files and deletes stuff
# Fill in the gaps where necessary


# remember that we want to eliminate all unused assets and code
