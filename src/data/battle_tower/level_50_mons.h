const struct BattleTowerPokemonTemplate gBattleTowerLevel50Mons[] =
{
	{
		.species = SPECIES_PIKACHU,
		.heldItem = BATTLE_TOWER_ITEM_ORAN_BERRY,
		.teamFlags = 0x42,
		.moves = {
			MOVE_QUICKATTACK,
			MOVE_THUNDERWAVE,
			MOVE_THUNDERSHOCK,
			MOVE_GROWL
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_BEAUTIFLY,
		.heldItem = BATTLE_TOWER_ITEM_MIRACLE_SEED,
		.teamFlags = 0x41,
		.moves = {
			MOVE_ABSORB,
			MOVE_STUNSPORE,
			MOVE_GUST,
			MOVE_SAFEGUARD
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_BRAVE,
	},
	{
		.species = SPECIES_SWELLOW,
		.heldItem = BATTLE_TOWER_ITEM_SHARP_BEAK,
		.teamFlags = 0x07,
		.moves = {
			MOVE_PECK,
			MOVE_WINGATTACK,
			MOVE_AERIALACE,
			MOVE_AGILITY
		},
		.evSpread = F_EV_SPREAD_ATTACK,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_WALREIN,
		.heldItem = BATTLE_TOWER_ITEM_SCOPE_LENS,
		.teamFlags = 0x0B,
		.moves = {
			MOVE_HAIL,
			MOVE_ENCORE,
			MOVE_ICEBALL,
			MOVE_TOXIC
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_ADAMANT,
	},
	{
		.species = SPECIES_SEAKING,
		.heldItem = BATTLE_TOWER_ITEM_MYSTIC_WATER,
		.teamFlags = 0x07,
		.moves = {
			MOVE_PECK,
			MOVE_FLAIL,
			MOVE_FURYATTACK,
			MOVE_SURF
		},
		.evSpread = F_EV_SPREAD_SPEED,
		.nature = NATURE_HASTY,
	},
	{
		.species = SPECIES_TORCHIC,
		.heldItem = BATTLE_TOWER_ITEM_KINGS_ROCK,
		.teamFlags = 0x42,
		.moves = {
			MOVE_FIRESPIN,
			MOVE_PROTECT,
			MOVE_SANDATTACK,
			MOVE_SLASH
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
		.nature = NATURE_RELAXED,
	},
	{
		.species = SPECIES_MASQUERAIN,
		.heldItem = BATTLE_TOWER_ITEM_WHITE_HERB,
		.teamFlags = 0x41,
		.moves = {
			MOVE_STUNSPORE,
			MOVE_WATERSPORT,
			MOVE_QUICKATTACK,
			MOVE_GUST
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_IMPISH,
	},
	{
		.species = SPECIES_ILLUMISE,
		.heldItem = BATTLE_TOWER_ITEM_NONE,
		.teamFlags = 0x41,
		.moves = {
			MOVE_FLATTER,
			MOVE_COVET,
			MOVE_WISH,
			MOVE_FACADE
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_DELCATTY,
		.heldItem = BATTLE_TOWER_ITEM_SILK_SCARF,
		.teamFlags = 0x42,
		.moves = {
			MOVE_ATTRACT,
			MOVE_TAILWHIP,
			MOVE_FEINTATTACK,
			MOVE_DIG
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_LONELY,
	},
	{
		.species = SPECIES_KECLEON,
		.heldItem = BATTLE_TOWER_ITEM_PERSIM_BERRY,
		.teamFlags = 0x0B,
		.moves = {
			MOVE_TAILWHIP,
			MOVE_SLASH,
			MOVE_LICK,
			MOVE_SCREECH
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_BRAVE,
	},
	{
		.species = SPECIES_MIGHTYENA,
		.heldItem = BATTLE_TOWER_ITEM_PECHA_BERRY,
		.teamFlags = 0x05,
		.moves = {
			MOVE_BITE,
			MOVE_TAKEDOWN,
			MOVE_ROAR,
			MOVE_HOWL
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
		.nature = NATURE_DOCILE,
	},
	{
		.species = SPECIES_SLAKING,
		.heldItem = BATTLE_TOWER_ITEM_BLACK_GLASSES,
		.teamFlags = 0x05,
		.moves = {
			MOVE_FEINTATTACK,
			MOVE_COUNTER,
			MOVE_SCRATCH,
			MOVE_TAUNT
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_LAX,
	},
	{
		.species = SPECIES_MACHOKE,
		.heldItem = BATTLE_TOWER_ITEM_CHESTO_BERRY,
		.teamFlags = 0x05,
		.moves = {
			MOVE_LEER,
			MOVE_DIG,
			MOVE_LOWKICK,
			MOVE_FOCUSPUNCH
		},
		.evSpread = F_EV_SPREAD_SPEED,
		.nature = NATURE_TIMID,
	},
	{
		.species = SPECIES_RHYDON,
		.heldItem = BATTLE_TOWER_ITEM_PERSIM_BERRY,
		.teamFlags = 0x05,
		.moves = {
			MOVE_STRENGTH,
			MOVE_ROCKTOMB,
			MOVE_STOMP,
			MOVE_ROCKSMASH
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_QUIRKY,
	},
	{
		.species = SPECIES_CACTURNE,
		.heldItem = BATTLE_TOWER_ITEM_POISON_BARB,
		.teamFlags = 0x0B,
		.moves = {
			MOVE_POISONSTING,
			MOVE_GROWTH,
			MOVE_ABSORB,
			MOVE_SOLARBEAM
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_ZIGZAGOON,
		.heldItem = BATTLE_TOWER_ITEM_KINGS_ROCK,
		.teamFlags = 0x0A,
		.moves = {
			MOVE_FLAIL,
			MOVE_SANDATTACK,
			MOVE_REST,
			MOVE_SURF
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_SASSY,
	},
	{
		.species = SPECIES_DODRIO,
		.heldItem = BATTLE_TOWER_ITEM_SHARP_BEAK,
		.teamFlags = 0x03,
		.moves = {
			MOVE_PURSUIT,
			MOVE_TRIATTACK,
			MOVE_GROWL,
			MOVE_AGILITY
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_SERIOUS,
	},
	{
		.species = SPECIES_WHISCASH,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0x0B,
		.moves = {
			MOVE_WATERGUN,
			MOVE_AMNESIA,
			MOVE_MAGNITUDE,
			MOVE_MUDSLAP
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_LAX,
	},
	{
		.species = SPECIES_NINJASK,
		.heldItem = BATTLE_TOWER_ITEM_SILVER_POWDER,
		.teamFlags = 0x41,
		.moves = {
			MOVE_SANDATTACK,
			MOVE_FURYCUTTER,
			MOVE_AGILITY,
			MOVE_HARDEN
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_DUSCLOPS,
		.heldItem = BATTLE_TOWER_ITEM_PECHA_BERRY,
		.teamFlags = 0x01,
		.moves = {
			MOVE_PROTECT,
			MOVE_NIGHTSHADE,
			MOVE_ASTONISH,
			MOVE_WILLOWISP
		},
		.evSpread = F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_CAMERUPT,
		.heldItem = BATTLE_TOWER_ITEM_CHARCOAL,
		.teamFlags = 0x07,
		.moves = {
			MOVE_DIG,
			MOVE_EMBER,
			MOVE_GROWL,
			MOVE_ROCKSMASH
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
		.nature = NATURE_BOLD,
	},
	{
		.species = SPECIES_SPINDA,
		.heldItem = BATTLE_TOWER_ITEM_CHERI_BERRY,
		.teamFlags = 0x4A,
		.moves = {
			MOVE_TEETERDANCE,
			MOVE_FLAIL,
			MOVE_PSYCHUP,
			MOVE_DOUBLEEDGE
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_CALM,
	},
	{
		.species = SPECIES_SEVIPER,
		.heldItem = BATTLE_TOWER_ITEM_POISON_BARB,
		.teamFlags = 0x09,
		.moves = {
			MOVE_SCREECH,
			MOVE_GLARE,
			MOVE_DIG,
			MOVE_POISONFANG
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_FLYGON,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0x49,
		.moves = {
			MOVE_SANDATTACK,
			MOVE_SANDTOMB,
			MOVE_FACADE,
			MOVE_TOXIC
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_AZUMARILL,
		.heldItem = BATTLE_TOWER_ITEM_WHITE_HERB,
		.teamFlags = 0x42,
		.moves = {
			MOVE_BUBBLEBEAM,
			MOVE_TAILWHIP,
			MOVE_RAINDANCE,
			MOVE_ROLLOUT
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_ZANGOOSE,
		.heldItem = BATTLE_TOWER_ITEM_MENTAL_HERB,
		.teamFlags = 0x07,
		.moves = {
			MOVE_STRENGTH,
			MOVE_TAUNT,
			MOVE_CRUSHCLAW,
			MOVE_DETECT
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_MEDICHAM,
		.heldItem = BATTLE_TOWER_ITEM_SCOPE_LENS,
		.teamFlags = 0x07,
		.moves = {
			MOVE_REVERSAL,
			MOVE_MEDITATE,
			MOVE_CONFUSION,
			MOVE_FACADE
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_HASTY,
	},
	{
		.species = SPECIES_ROSELIA,
		.heldItem = BATTLE_TOWER_ITEM_MIRACLE_SEED,
		.teamFlags = 0x0A,
		.moves = {
			MOVE_GROWTH,
			MOVE_MEGADRAIN,
			MOVE_TOXIC,
			MOVE_CUT
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
		.nature = NATURE_NAUGHTY,
	},
	{
		.species = SPECIES_SWALOT,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x0B,
		.moves = {
			MOVE_STOCKPILE,
			MOVE_SPITUP,
			MOVE_SLUDGE,
			MOVE_POISONGAS
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_MAGNETON,
		.heldItem = BATTLE_TOWER_ITEM_MAGNET,
		.teamFlags = 0x0B,
		.moves = {
			MOVE_SUPERSONIC,
			MOVE_THUNDERWAVE,
			MOVE_SCREECH,
			MOVE_TRIATTACK
		},
		.evSpread = F_EV_SPREAD_SPEED,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_GARDEVOIR,
		.heldItem = BATTLE_TOWER_ITEM_TWISTED_SPOON,
		.teamFlags = 0x09,
		.moves = {
			MOVE_CONFUSION,
			MOVE_TOXIC,
			MOVE_TORMENT,
			MOVE_PROTECT
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_BOLD,
	},
	{
		.species = SPECIES_RELICANTH,
		.heldItem = BATTLE_TOWER_ITEM_MYSTIC_WATER,
		.teamFlags = 0x01,
		.moves = {
			MOVE_SURF,
			MOVE_ANCIENTPOWER,
			MOVE_ROCKTOMB,
			MOVE_HARDEN
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_TIMID,
	},
	{
		.species = SPECIES_NINETALES,
		.heldItem = BATTLE_TOWER_ITEM_RAWST_BERRY,
		.teamFlags = 0x03,
		.moves = {
			MOVE_CONFUSERAY,
			MOVE_FIRESPIN,
			MOVE_QUICKATTACK,
			MOVE_FLAMETHROWER
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HASTY,
	},
	{
		.species = SPECIES_SHARPEDO,
		.heldItem = BATTLE_TOWER_ITEM_BLACK_GLASSES,
		.teamFlags = 0x05,
		.moves = {
			MOVE_BITE,
			MOVE_SKULLBASH,
			MOVE_RAINDANCE,
			MOVE_SURF
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_RELAXED,
	},
	{
		.species = SPECIES_GIRAFARIG,
		.heldItem = BATTLE_TOWER_ITEM_KINGS_ROCK,
		.teamFlags = 0x03,
		.moves = {
			MOVE_STRENGTH,
			MOVE_PSYBEAM,
			MOVE_AGILITY,
			MOVE_EARTHQUAKE
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_IMPISH,
	},
	{
		.species = SPECIES_PELIPPER,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x0B,
		.moves = {
			MOVE_MIST,
			MOVE_STOCKPILE,
			MOVE_SWALLOW,
			MOVE_SPITUP
		},
		.evSpread = F_EV_SPREAD_DEFENSE,
		.nature = NATURE_QUIRKY,
	},
	{
		.species = SPECIES_SABLEYE,
		.heldItem = BATTLE_TOWER_ITEM_CHERI_BERRY,
		.teamFlags = 0x09,
		.moves = {
			MOVE_SHADOWBALL,
			MOVE_NIGHTSHADE,
			MOVE_SNATCH,
			MOVE_FAKEOUT
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_LUNATONE,
		.heldItem = BATTLE_TOWER_ITEM_HARD_STONE,
		.teamFlags = 0x0B,
		.moves = {
			MOVE_COSMICPOWER,
			MOVE_SANDSTORM,
			MOVE_PSYCHIC,
			MOVE_ROCKTHROW
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_LUDICOLO,
		.heldItem = BATTLE_TOWER_ITEM_NONE,
		.teamFlags = 0x0B,
		.moves = {
			MOVE_THIEF,
			MOVE_FAKEOUT,
			MOVE_SURF,
			MOVE_RAINDANCE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_GRUMPIG,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x0B,
		.moves = {
			MOVE_ODORSLEUTH,
			MOVE_CONFUSERAY,
			MOVE_MAGICCOAT,
			MOVE_PSYCHIC
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_BRELOOM,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0x0B,
		.moves = {
			MOVE_CUT,
			MOVE_LEECHSEED,
			MOVE_MEGADRAIN,
			MOVE_STUNSPORE
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_SASSY,
	},
	{
		.species = SPECIES_WAILORD,
		.heldItem = BATTLE_TOWER_ITEM_MYSTIC_WATER,
		.teamFlags = 0x03,
		.moves = {
			MOVE_WATERSPOUT,
			MOVE_ROLLOUT,
			MOVE_MIST,
			MOVE_RAINDANCE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_WEEZING,
		.heldItem = BATTLE_TOWER_ITEM_POISON_BARB,
		.teamFlags = 0x05,
		.moves = {
			MOVE_SMOG,
			MOVE_SELFDESTRUCT,
			MOVE_TOXIC,
			MOVE_SLUDGEBOMB
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_BASHFUL,
	},
	{
		.species = SPECIES_KADABRA,
		.heldItem = BATTLE_TOWER_ITEM_LEPPA_BERRY,
		.teamFlags = 0x0B,
		.moves = {
			MOVE_FUTURESIGHT,
			MOVE_FOCUSPUNCH,
			MOVE_SKILLSWAP,
			MOVE_SNATCH
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_CAREFUL,
	},
	{
		.species = SPECIES_MANECTRIC,
		.heldItem = BATTLE_TOWER_ITEM_MAGNET,
		.teamFlags = 0x07,
		.moves = {
			MOVE_THUNDERWAVE,
			MOVE_BITE,
			MOVE_SPARK,
			MOVE_QUICKATTACK
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK,
		.nature = NATURE_RASH,
	},
	{
		.species = SPECIES_RAICHU,
		.heldItem = BATTLE_TOWER_ITEM_ASPEAR_BERRY,
		.teamFlags = 0x03,
		.moves = {
			MOVE_QUICKATTACK,
			MOVE_AGILITY,
			MOVE_LIGHTSCREEN,
			MOVE_THUNDERBOLT
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_XATU,
		.heldItem = BATTLE_TOWER_ITEM_TWISTED_SPOON,
		.teamFlags = 0x03,
		.moves = {
			MOVE_NIGHTSHADE,
			MOVE_PECK,
			MOVE_CONFUSERAY,
			MOVE_FUTURESIGHT
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_LOUDRED,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x05,
		.moves = {
			MOVE_UPROAR,
			MOVE_STOMP,
			MOVE_SCREECH,
			MOVE_EARTHQUAKE
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_MODEST,
	},
	{
		.species = SPECIES_SOLROCK,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x03,
		.moves = {
			MOVE_ROCKTHROW,
			MOVE_SUNNYDAY,
			MOVE_SOLARBEAM,
			MOVE_SANDSTORM
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_MILD,
	},
	{
		.species = SPECIES_CLAYDOL,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0x03,
		.moves = {
			MOVE_SANDSTORM,
			MOVE_REFLECT,
			MOVE_ROCKTOMB,
			MOVE_STRENGTH
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_SERIOUS,
	},
	{
		.species = SPECIES_CRAWDAUNT,
		.heldItem = BATTLE_TOWER_ITEM_SCOPE_LENS,
		.teamFlags = 0x03,
		.moves = {
			MOVE_WATERPULSE,
			MOVE_KNOCKOFF,
			MOVE_HARDEN,
			MOVE_CUT
		},
		.evSpread = F_EV_SPREAD_HP,
		.nature = NATURE_JOLLY,
	},
	{
		.species = SPECIES_GOLBAT,
		.heldItem = BATTLE_TOWER_ITEM_WHITE_HERB,
		.teamFlags = 0x09,
		.moves = {
			MOVE_CONFUSERAY,
			MOVE_WINGATTACK,
			MOVE_MEANLOOK,
			MOVE_BITE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED,
		.nature = NATURE_BRAVE,
	},
	{
		.species = SPECIES_BELLOSSOM,
		.heldItem = BATTLE_TOWER_ITEM_MIRACLE_SEED,
		.teamFlags = 0x0A,
		.moves = {
			MOVE_SOLARBEAM,
			MOVE_PETALDANCE,
			MOVE_SWEETSCENT,
			MOVE_BULLETSEED
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_NAIVE,
	},
	{
		.species = SPECIES_DONPHAN,
		.heldItem = BATTLE_TOWER_ITEM_KINGS_ROCK,
		.teamFlags = 0x05,
		.moves = {
			MOVE_ROCKSMASH,
			MOVE_RAPIDSPIN,
			MOVE_FLAIL,
			MOVE_HORNATTACK
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_IMPISH,
	},
	{
		.species = SPECIES_NOSEPASS,
		.heldItem = BATTLE_TOWER_ITEM_PERSIM_BERRY,
		.teamFlags = 0x0B,
		.moves = {
			MOVE_SANDSTORM,
			MOVE_ROCKSLIDE,
			MOVE_BLOCK,
			MOVE_THUNDERWAVE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_JOLLY,
	},
	{
		.species = SPECIES_PINSIR,
		.heldItem = BATTLE_TOWER_ITEM_CHESTO_BERRY,
		.teamFlags = 0x05,
		.moves = {
			MOVE_SWORDSDANCE,
			MOVE_HARDEN,
			MOVE_CUT,
			MOVE_SEISMICTOSS
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_DOCILE,
	},
	{
		.species = SPECIES_GOLDUCK,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0x0B,
		.moves = {
			MOVE_DISABLE,
			MOVE_PSYCHUP,
			MOVE_WATERPULSE,
			MOVE_BRICKBREAK
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_SHIFTRY,
		.heldItem = BATTLE_TOWER_ITEM_MENTAL_HERB,
		.teamFlags = 0x07,
		.moves = {
			MOVE_TORMENT,
			MOVE_EXTRASENSORY,
			MOVE_SOLARBEAM,
			MOVE_AERIALACE
		},
		.evSpread = F_EV_SPREAD_DEFENSE,
		.nature = NATURE_NAIVE,
	},
	{
		.species = SPECIES_DUSTOX,
		.heldItem = BATTLE_TOWER_ITEM_SILVER_POWDER,
		.teamFlags = 0x01,
		.moves = {
			MOVE_CONFUSION,
			MOVE_SILVERWIND,
			MOVE_PSYBEAM,
			MOVE_WHIRLWIND
		},
		.evSpread = F_EV_SPREAD_SPEED,
		.nature = NATURE_SERIOUS,
	},
	{
		.species = SPECIES_SHUPPET,
		.heldItem = BATTLE_TOWER_ITEM_SCOPE_LENS,
		.teamFlags = 0x03,
		.moves = {
			MOVE_WILLOWISP,
			MOVE_NIGHTSHADE,
			MOVE_FEINTATTACK,
			MOVE_CURSE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_SEAKING,
		.heldItem = BATTLE_TOWER_ITEM_MYSTIC_WATER,
		.teamFlags = 0x07,
		.moves = {
			MOVE_RAINDANCE,
			MOVE_SURF,
			MOVE_HORNATTACK,
			MOVE_HORNDRILL
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE,
		.nature = NATURE_LONELY,
	},
	{
		.species = SPECIES_SKARMORY,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x07,
		.moves = {
			MOVE_STEELWING,
			MOVE_SANDATTACK,
			MOVE_SWIFT,
			MOVE_AGILITY
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_RELAXED,
	},
	{
		.species = SPECIES_TORKOAL,
		.heldItem = BATTLE_TOWER_ITEM_FOCUS_BAND,
		.teamFlags = 0x43,
		.moves = {
			MOVE_FLAMETHROWER,
			MOVE_IRONDEFENSE,
			MOVE_BODYSLAM,
			MOVE_PROTECT
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_NAUGHTY,
	},
	{
		.species = SPECIES_GOLEM,
		.heldItem = BATTLE_TOWER_ITEM_SOFT_SAND,
		.teamFlags = 0x05,
		.moves = {
			MOVE_MAGNITUDE,
			MOVE_EXPLOSION,
			MOVE_STRENGTH,
			MOVE_SANDSTORM
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_DOCILE,
	},
	{
		.species = SPECIES_GARDEVOIR,
		.heldItem = BATTLE_TOWER_ITEM_TWISTED_SPOON,
		.teamFlags = 0x41,
		.moves = {
			MOVE_REFLECT,
			MOVE_PSYCHIC,
			MOVE_IMPRISON,
			MOVE_TOXIC
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_HASTY,
	},
	{
		.species = SPECIES_SANDSLASH,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0x07,
		.moves = {
			MOVE_SANDSTORM,
			MOVE_SLASH,
			MOVE_EARTHQUAKE,
			MOVE_SWIFT
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_ADAMANT,
	},
	{
		.species = SPECIES_WOBBUFFET,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x0B,
		.moves = {
			MOVE_COUNTER,
			MOVE_MIRRORCOAT,
			MOVE_SAFEGUARD,
			MOVE_DESTINYBOND
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_CALM,
	},
	{
		.species = SPECIES_TENTACRUEL,
		.heldItem = BATTLE_TOWER_ITEM_CHERI_BERRY,
		.teamFlags = 0x05,
		.moves = {
			MOVE_CONSTRICT,
			MOVE_SURF,
			MOVE_HYPERBEAM,
			MOVE_SCREECH
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_IMPISH,
	},
	{
		.species = SPECIES_TROPIUS,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x05,
		.moves = {
			MOVE_SUNNYDAY,
			MOVE_SOLARBEAM,
			MOVE_SYNTHESIS,
			MOVE_RAZORLEAF
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_DOCILE,
	},
	{
		.species = SPECIES_MAWILE,
		.heldItem = BATTLE_TOWER_ITEM_METAL_COAT,
		.teamFlags = 0x43,
		.moves = {
			MOVE_IRONDEFENSE,
			MOVE_SLUDGEBOMB,
			MOVE_CRUNCH,
			MOVE_STRENGTH
		},
		.evSpread = F_EV_SPREAD_ATTACK,
		.nature = NATURE_CALM,
	},
	{
		.species = SPECIES_MUK,
		.heldItem = BATTLE_TOWER_ITEM_RAWST_BERRY,
		.teamFlags = 0x09,
		.moves = {
			MOVE_SLUDGE,
			MOVE_ACIDARMOR,
			MOVE_GIGADRAIN,
			MOVE_DISABLE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_MAGCARGO,
		.heldItem = BATTLE_TOWER_ITEM_CHARCOAL,
		.teamFlags = 0x0D,
		.moves = {
			MOVE_FLAMETHROWER,
			MOVE_ROCKTHROW,
			MOVE_HARDEN,
			MOVE_AMNESIA
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
		.nature = NATURE_NAUGHTY,
	},
	{
		.species = SPECIES_LINOONE,
		.heldItem = BATTLE_TOWER_ITEM_PECHA_BERRY,
		.teamFlags = 0x07,
		.moves = {
			MOVE_HEADBUTT,
			MOVE_TAILWHIP,
			MOVE_SURF,
			MOVE_DIG
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_QUIRKY,
	},
	{
		.species = SPECIES_ELECTRODE,
		.heldItem = BATTLE_TOWER_ITEM_ASPEAR_BERRY,
		.teamFlags = 0x05,
		.moves = {
			MOVE_LIGHTSCREEN,
			MOVE_THUNDERBOLT,
			MOVE_SWIFT,
			MOVE_ROLLOUT
		},
		.evSpread = F_EV_SPREAD_SPEED,
		.nature = NATURE_SERIOUS,
	},
	{
		.species = SPECIES_DUSCLOPS,
		.heldItem = BATTLE_TOWER_ITEM_SPELL_TAG,
		.teamFlags = 0x09,
		.moves = {
			MOVE_MEANLOOK,
			MOVE_NIGHTSHADE,
			MOVE_SKILLSWAP,
			MOVE_SHADOWBALL
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_NAIVE,
	},
	{
		.species = SPECIES_VILEPLUME,
		.heldItem = BATTLE_TOWER_ITEM_MIRACLE_SEED,
		.teamFlags = 0x0A,
		.moves = {
			MOVE_TOXIC,
			MOVE_MOONLIGHT,
			MOVE_GIGADRAIN,
			MOVE_STUNSPORE
		},
		.evSpread = F_EV_SPREAD_HP,
		.nature = NATURE_DOCILE,
	},
	{
		.species = SPECIES_CROBAT,
		.heldItem = BATTLE_TOWER_ITEM_LEPPA_BERRY,
		.teamFlags = 0x05,
		.moves = {
			MOVE_BITE,
			MOVE_HAZE,
			MOVE_WINGATTACK,
			MOVE_STEELWING
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_TIMID,
	},
	{
		.species = SPECIES_CORSOLA,
		.heldItem = BATTLE_TOWER_ITEM_SCOPE_LENS,
		.teamFlags = 0x0A,
		.moves = {
			MOVE_RECOVER,
			MOVE_MIRRORCOAT,
			MOVE_HAIL,
			MOVE_SURF
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_STARMIE,
		.heldItem = BATTLE_TOWER_ITEM_MYSTIC_WATER,
		.teamFlags = 0x0B,
		.moves = {
			MOVE_RAPIDSPIN,
			MOVE_WATERPULSE,
			MOVE_REFLECT,
			MOVE_SKILLSWAP
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_EXPLOUD,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x41,
		.moves = {
			MOVE_HYPERBEAM,
			MOVE_HOWL,
			MOVE_UPROAR,
			MOVE_EARTHQUAKE
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_ALAKAZAM,
		.heldItem = BATTLE_TOWER_ITEM_TWISTED_SPOON,
		.teamFlags = 0x0B,
		.moves = {
			MOVE_PSYBEAM,
			MOVE_SNATCH,
			MOVE_REFLECT,
			MOVE_HYPERBEAM
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_RELAXED,
	},
	{
		.species = SPECIES_HERACROSS,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0x05,
		.moves = {
			MOVE_HORNATTACK,
			MOVE_COUNTER,
			MOVE_REVERSAL,
			MOVE_LEER
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_BOLD,
	},
	{
		.species = SPECIES_CASTFORM,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x0B,
		.moves = {
			MOVE_WEATHERBALL,
			MOVE_SUNNYDAY,
			MOVE_RAINDANCE,
			MOVE_HAIL
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_LAX,
	},
	{
		.species = SPECIES_VIGOROTH,
		.heldItem = BATTLE_TOWER_ITEM_FOCUS_BAND,
		.teamFlags = 0x05,
		.moves = {
			MOVE_FOCUSPUNCH,
			MOVE_REVERSAL,
			MOVE_COUNTER,
			MOVE_TAUNT
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_DUSKULL,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0x09,
		.moves = {
			MOVE_TOXIC,
			MOVE_CONFUSERAY,
			MOVE_SHADOWBALL,
			MOVE_WILLOWISP
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_LANTURN,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0x07,
		.moves = {
			MOVE_FLAIL,
			MOVE_SURF,
			MOVE_SPARK,
			MOVE_TAKEDOWN
		},
		.evSpread = F_EV_SPREAD_SPEED,
		.nature = NATURE_SASSY,
	},
	{
		.species = SPECIES_HARIYAMA,
		.heldItem = BATTLE_TOWER_ITEM_KINGS_ROCK,
		.teamFlags = 0x05,
		.moves = {
			MOVE_STRENGTH,
			MOVE_FAKEOUT,
			MOVE_FACADE,
			MOVE_SANDATTACK
		},
		.evSpread = F_EV_SPREAD_SPEED,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_KINGDRA,
		.heldItem = BATTLE_TOWER_ITEM_MYSTIC_WATER,
		.teamFlags = 0x43,
		.moves = {
			MOVE_AGILITY,
			MOVE_DIVE,
			MOVE_ICEBEAM,
			MOVE_PROTECT
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_GYARADOS,
		.heldItem = BATTLE_TOWER_ITEM_DRAGON_FANG,
		.teamFlags = 0x41,
		.moves = {
			MOVE_RAINDANCE,
			MOVE_SURF,
			MOVE_WATERPULSE,
			MOVE_HYPERBEAM
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_IMPISH,
	},
	{
		.species = SPECIES_AGGRON,
		.heldItem = BATTLE_TOWER_ITEM_METAL_COAT,
		.teamFlags = 0x45,
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BRICKBREAK,
			MOVE_METALCLAW,
			MOVE_ROAR
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_RELAXED,
	},
	{
		.species = SPECIES_ABSOL,
		.heldItem = BATTLE_TOWER_ITEM_KINGS_ROCK,
		.teamFlags = 0xC7,
		.moves = {
			MOVE_SWORDSDANCE,
			MOVE_IRONTAIL,
			MOVE_SLASH,
			MOVE_FACADE
		},
		.evSpread = F_EV_SPREAD_ATTACK,
		.nature = NATURE_LAX,
	},
	{
		.species = SPECIES_SWELLOW,
		.heldItem = BATTLE_TOWER_ITEM_SHARP_BEAK,
		.teamFlags = 0x0F,
		.moves = {
			MOVE_DOUBLETEAM,
			MOVE_FLY,
			MOVE_TOXIC,
			MOVE_STEELWING
		},
		.evSpread = 0,
		.nature = NATURE_HASTY,
	},
	{
		.species = SPECIES_MACHAMP,
		.heldItem = BATTLE_TOWER_ITEM_BLACK_BELT,
		.teamFlags = 0x05,
		.moves = {
			MOVE_STRENGTH,
			MOVE_CROSSCHOP,
			MOVE_EARTHQUAKE,
			MOVE_FLAMETHROWER
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_HASTY,
	},
	{
		.species = SPECIES_SWAMPERT,
		.heldItem = BATTLE_TOWER_ITEM_NEVER_MELT_ICE,
		.teamFlags = 0x41,
		.moves = {
			MOVE_PROTECT,
			MOVE_ICEBEAM,
			MOVE_HYPERBEAM,
			MOVE_SURF
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_DOCILE,
	},
	{
		.species = SPECIES_SCEPTILE,
		.heldItem = BATTLE_TOWER_ITEM_MIRACLE_SEED,
		.teamFlags = 0x41,
		.moves = {
			MOVE_LEAFBLADE,
			MOVE_DRAGONCLAW,
			MOVE_AGILITY,
			MOVE_PROTECT
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_DOCILE,
	},
	{
		.species = SPECIES_BLAZIKEN,
		.heldItem = BATTLE_TOWER_ITEM_CHARCOAL,
		.teamFlags = 0x41,
		.moves = {
			MOVE_BLAZEKICK,
			MOVE_MIRRORMOVE,
			MOVE_EARTHQUAKE,
			MOVE_PROTECT
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_DOCILE,
	},
	{
		.species = SPECIES_ALTARIA,
		.heldItem = BATTLE_TOWER_ITEM_DRAGON_FANG,
		.teamFlags = 0x43,
		.moves = {
			MOVE_DRAGONCLAW,
			MOVE_DRAGONDANCE,
			MOVE_TOXIC,
			MOVE_DOUBLETEAM
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_DOCILE,
	},
	{
		.species = SPECIES_LUDICOLO,
		.heldItem = BATTLE_TOWER_ITEM_BLACK_BELT,
		.teamFlags = 0x43,
		.moves = {
			MOVE_BRICKBREAK,
			MOVE_WATERPULSE,
			MOVE_RAINDANCE,
			MOVE_FOCUSPUNCH
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HASTY,
	},
	{
		.species = SPECIES_SABLEYE,
		.heldItem = BATTLE_TOWER_ITEM_SPELL_TAG,
		.teamFlags = 0x49,
		.moves = {
			MOVE_SHADOWBALL,
			MOVE_SNATCH,
			MOVE_DIG,
			MOVE_CONFUSERAY
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_ZANGOOSE,
		.heldItem = BATTLE_TOWER_ITEM_BLACK_GLASSES,
		.teamFlags = 0x0F,
		.moves = {
			MOVE_FACADE,
			MOVE_THUNDERBOLT,
			MOVE_CRUSHCLAW,
			MOVE_DETECT
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_CALM,
	},
	{
		.species = SPECIES_LINOONE,
		.heldItem = BATTLE_TOWER_ITEM_CHESTO_BERRY,
		.teamFlags = 0x0F,
		.moves = {
			MOVE_IRONTAIL,
			MOVE_HEADBUTT,
			MOVE_ATTRACT,
			MOVE_ICEBEAM
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_WHISCASH,
		.heldItem = BATTLE_TOWER_ITEM_SOFT_SAND,
		.teamFlags = 0x07,
		.moves = {
			MOVE_MUDSLAP,
			MOVE_EARTHQUAKE,
			MOVE_SURF,
			MOVE_AMNESIA
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_BOLD,
	},
	{
		.species = SPECIES_SOLROCK,
		.heldItem = BATTLE_TOWER_ITEM_HARD_STONE,
		.teamFlags = 0x43,
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_LIGHTSCREEN,
			MOVE_ROCKSLIDE,
			MOVE_CONFUSION
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_BASHFUL,
	},
	{
		.species = SPECIES_STARMIE,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0x03,
		.moves = {
			MOVE_RECOVER,
			MOVE_RAINDANCE,
			MOVE_SURF,
			MOVE_CONFUSERAY
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_NAIVE,
	},
	{
		.species = SPECIES_CACTURNE,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x0F,
		.moves = {
			MOVE_INGRAIN,
			MOVE_LEECHSEED,
			MOVE_PROTECT,
			MOVE_FRUSTRATION
		},
		.evSpread = 0,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_SHIFTRY,
		.heldItem = BATTLE_TOWER_ITEM_FOCUS_BAND,
		.teamFlags = 0x05,
		.moves = {
			MOVE_FRUSTRATION,
			MOVE_HYPERBEAM,
			MOVE_GIGADRAIN,
			MOVE_TORMENT
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_ADAMANT,
	},
	{
		.species = SPECIES_MANECTRIC,
		.heldItem = BATTLE_TOWER_ITEM_MAGNET,
		.teamFlags = 0x0F,
		.moves = {
			MOVE_THUNDER,
			MOVE_THUNDERWAVE,
			MOVE_IRONTAIL,
			MOVE_ROAR
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_ADAMANT,
	},
	{
		.species = SPECIES_KECLEON,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0xC3,
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_FOCUSPUNCH,
			MOVE_IRONTAIL,
			MOVE_FLAMETHROWER
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_PINSIR,
		.heldItem = BATTLE_TOWER_ITEM_SOFT_SAND,
		.teamFlags = 0x8D,
		.moves = {
			MOVE_GUILLOTINE,
			MOVE_SUBMISSION,
			MOVE_EARTHQUAKE,
			MOVE_ROCKTOMB
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_METANG,
		.heldItem = BATTLE_TOWER_ITEM_METAL_COAT,
		.teamFlags = 0x05,
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_SHADOWBALL,
			MOVE_PSYCHIC,
			MOVE_METEORMASH
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_IMPISH,
	},
	{
		.species = SPECIES_CLAYDOL,
		.heldItem = BATTLE_TOWER_ITEM_PECHA_BERRY,
		.teamFlags = 0x43,
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_SELFDESTRUCT,
			MOVE_SANDSTORM,
			MOVE_PROTECT
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_LAX,
	},
	{
		.species = SPECIES_MASQUERAIN,
		.heldItem = BATTLE_TOWER_ITEM_PERSIM_BERRY,
		.teamFlags = 0x0A,
		.moves = {
			MOVE_TOXIC,
			MOVE_SILVERWIND,
			MOVE_ATTRACT,
			MOVE_ICEBEAM
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_RELICANTH,
		.heldItem = BATTLE_TOWER_ITEM_LIECHI_BERRY,
		.teamFlags = 0xC5,
		.moves = {
			MOVE_ROCKTOMB,
			MOVE_DOUBLEEDGE,
			MOVE_SURF,
			MOVE_EARTHQUAKE
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_WALREIN,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x0D,
		.moves = {
			MOVE_SURF,
			MOVE_ENCORE,
			MOVE_BLIZZARD,
			MOVE_HYPERBEAM
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_WAILORD,
		.heldItem = BATTLE_TOWER_ITEM_APICOT_BERRY,
		.teamFlags = 0x0B,
		.moves = {
			MOVE_WATERSPOUT,
			MOVE_REST,
			MOVE_AMNESIA,
			MOVE_HAIL
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_HASTY,
	},
	{
		.species = SPECIES_GIRAFARIG,
		.heldItem = BATTLE_TOWER_ITEM_GANLON_BERRY,
		.teamFlags = 0x4F,
		.moves = {
			MOVE_DOUBLETEAM,
			MOVE_CRUNCH,
			MOVE_PSYCHIC,
			MOVE_EARTHQUAKE
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_MEDICHAM,
		.heldItem = BATTLE_TOWER_ITEM_APICOT_BERRY,
		.teamFlags = 0x4B,
		.moves = {
			MOVE_CALMMIND,
			MOVE_REVERSAL,
			MOVE_ROCKTOMB,
			MOVE_PSYCHIC
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_RELAXED,
	},
	{
		.species = SPECIES_TROPIUS,
		.heldItem = BATTLE_TOWER_ITEM_MENTAL_HERB,
		.teamFlags = 0xC7,
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_SYNTHESIS,
			MOVE_RAZORLEAF,
			MOVE_HYPERBEAM
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_BOLD,
	},
	{
		.species = SPECIES_NINJASK,
		.heldItem = BATTLE_TOWER_ITEM_SCOPE_LENS,
		.teamFlags = 0x05,
		.moves = {
			MOVE_DOUBLETEAM,
			MOVE_SLASH,
			MOVE_SWORDSDANCE,
			MOVE_LEECHLIFE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_LAX,
	},
	{
		.species = SPECIES_CAMERUPT,
		.heldItem = BATTLE_TOWER_ITEM_CHARCOAL,
		.teamFlags = 0x0D,
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_OVERHEAT,
			MOVE_SUNNYDAY,
			MOVE_ROCKSLIDE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_CAREFUL,
	},
	{
		.species = SPECIES_SHARPEDO,
		.heldItem = BATTLE_TOWER_ITEM_KINGS_ROCK,
		.teamFlags = 0x05,
		.moves = {
			MOVE_CRUNCH,
			MOVE_SURF,
			MOVE_EARTHQUAKE,
			MOVE_PROTECT
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_WIGGLYTUFF,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x0E,
		.moves = {
			MOVE_PROTECT,
			MOVE_TOXIC,
			MOVE_DOUBLETEAM,
			MOVE_DIG
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_LAX,
	},
	{
		.species = SPECIES_SEVIPER,
		.heldItem = BATTLE_TOWER_ITEM_POISON_BARB,
		.teamFlags = 0x05,
		.moves = {
			MOVE_SLUDGEBOMB,
			MOVE_HAZE,
			MOVE_CRUNCH,
			MOVE_FLAMETHROWER
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
		.nature = NATURE_NAIVE,
	},
	{
		.species = SPECIES_CRADILY,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0xC1,
		.moves = {
			MOVE_ROCKTOMB,
			MOVE_CONFUSERAY,
			MOVE_INGRAIN,
			MOVE_EARTHQUAKE
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_ARMALDO,
		.heldItem = BATTLE_TOWER_ITEM_RAWST_BERRY,
		.teamFlags = 0xC1,
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_SANDSTORM,
			MOVE_PROTECT,
			MOVE_SLASH
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_MAGNETON,
		.heldItem = BATTLE_TOWER_ITEM_PERSIM_BERRY,
		.teamFlags = 0x0D,
		.moves = {
			MOVE_ZAPCANNON,
			MOVE_SUPERSONIC,
			MOVE_TOXIC,
			MOVE_PROTECT
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_ADAMANT,
	},
	{
		.species = SPECIES_LANTURN,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0x06,
		.moves = {
			MOVE_THUNDER,
			MOVE_SURF,
			MOVE_ICEBEAM,
			MOVE_RAINDANCE
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_ADAMANT,
	},
	{
		.species = SPECIES_SWALOT,
		.heldItem = BATTLE_TOWER_ITEM_CHERI_BERRY,
		.teamFlags = 0x8B,
		.moves = {
			MOVE_SLUDGEBOMB,
			MOVE_SNATCH,
			MOVE_ENCORE,
			MOVE_BODYSLAM
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_SKARMORY,
		.heldItem = BATTLE_TOWER_ITEM_METAL_COAT,
		.teamFlags = 0x81,
		.moves = {
			MOVE_STEELWING,
			MOVE_AGILITY,
			MOVE_TORMENT,
			MOVE_FACADE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_LAX,
	},
	{
		.species = SPECIES_DONPHAN,
		.heldItem = BATTLE_TOWER_ITEM_WHITE_HERB,
		.teamFlags = 0x0D,
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_FLAIL,
			MOVE_ROAR,
			MOVE_IRONTAIL
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_HERACROSS,
		.heldItem = BATTLE_TOWER_ITEM_FOCUS_BAND,
		.teamFlags = 0x41,
		.moves = {
			MOVE_FACADE,
			MOVE_REVERSAL,
			MOVE_MEGAHORN,
			MOVE_EARTHQUAKE
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_BANETTE,
		.heldItem = BATTLE_TOWER_ITEM_PETAYA_BERRY,
		.teamFlags = 0x83,
		.moves = {
			MOVE_SHADOWBALL,
			MOVE_HYPERBEAM,
			MOVE_THUNDERBOLT,
			MOVE_SKILLSWAP
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_CAREFUL,
	},
	{
		.species = SPECIES_SANDSLASH,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0x0F,
		.moves = {
			MOVE_SANDSTORM,
			MOVE_TOXIC,
			MOVE_SLASH,
			MOVE_EARTHQUAKE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_LAX,
	},
	{
		.species = SPECIES_CRAWDAUNT,
		.heldItem = BATTLE_TOWER_ITEM_SCOPE_LENS,
		.teamFlags = 0x05,
		.moves = {
			MOVE_GUILLOTINE,
			MOVE_CRABHAMMER,
			MOVE_BLIZZARD,
			MOVE_SLUDGEBOMB
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_DOCILE,
	},
	{
		.species = SPECIES_GRUMPIG,
		.heldItem = BATTLE_TOWER_ITEM_TWISTED_SPOON,
		.teamFlags = 0x8B,
		.moves = {
			MOVE_MAGICCOAT,
			MOVE_PSYCHIC,
			MOVE_REFLECT,
			MOVE_CONFUSERAY
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_LONELY,
	},
	{
		.species = SPECIES_RHYDON,
		.heldItem = BATTLE_TOWER_ITEM_CHOICE_BAND,
		.teamFlags = 0x45,
		.moves = {
			MOVE_IRONTAIL,
			MOVE_EARTHQUAKE,
			MOVE_SURF,
			MOVE_FIREBLAST
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
		.nature = NATURE_RASH,
	},
	{
		.species = SPECIES_ALAKAZAM,
		.heldItem = BATTLE_TOWER_ITEM_PETAYA_BERRY,
		.teamFlags = 0x8B,
		.moves = {
			MOVE_PSYCHIC,
			MOVE_REFLECT,
			MOVE_RECOVER,
			MOVE_SKILLSWAP
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_HASTY,
	},
	{
		.species = SPECIES_DUSCLOPS,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x41,
		.moves = {
			MOVE_SHADOWBALL,
			MOVE_WILLOWISP,
			MOVE_BLIZZARD,
			MOVE_PSYCHIC
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
		.nature = NATURE_CAREFUL,
	},
	{
		.species = SPECIES_TORKOAL,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x09,
		.moves = {
			MOVE_FLAMETHROWER,
			MOVE_AMNESIA,
			MOVE_IRONTAIL,
			MOVE_REST
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
		.nature = NATURE_NAIVE,
	},
	{
		.species = SPECIES_ELECTRODE,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x09,
		.moves = {
			MOVE_SCREECH,
			MOVE_EXPLOSION,
			MOVE_MIRRORCOAT,
			MOVE_PROTECT
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_RASH,
	},
	{
		.species = SPECIES_BRELOOM,
		.heldItem = BATTLE_TOWER_ITEM_LIECHI_BERRY,
		.teamFlags = 0x0B,
		.moves = {
			MOVE_IRONTAIL,
			MOVE_FOCUSPUNCH,
			MOVE_DOUBLETEAM,
			MOVE_LEECHSEED
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_LAX,
	},
	{
		.species = SPECIES_MUK,
		.heldItem = BATTLE_TOWER_ITEM_POISON_BARB,
		.teamFlags = 0x05,
		.moves = {
			MOVE_SLUDGEBOMB,
			MOVE_THUNDERBOLT,
			MOVE_FLAMETHROWER,
			MOVE_FOCUSPUNCH
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_NAIVE,
	},
	{
		.species = SPECIES_WEEZING,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0x05,
		.moves = {
			MOVE_EXPLOSION,
			MOVE_SLUDGEBOMB,
			MOVE_SHADOWBALL,
			MOVE_FLAMETHROWER
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_NAIVE,
	},
	{
		.species = SPECIES_RAICHU,
		.heldItem = BATTLE_TOWER_ITEM_SCOPE_LENS,
		.teamFlags = 0x4E,
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_DOUBLETEAM,
			MOVE_FOCUSPUNCH,
			MOVE_ATTRACT
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_JOLLY,
	},
	{
		.species = SPECIES_TENTACRUEL,
		.heldItem = BATTLE_TOWER_ITEM_MYSTIC_WATER,
		.teamFlags = 0x09,
		.moves = {
			MOVE_DOUBLETEAM,
			MOVE_TOXIC,
			MOVE_SURF,
			MOVE_SLUDGEBOMB
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_BOLD,
	},
	{
		.species = SPECIES_EXPLOUD,
		.heldItem = BATTLE_TOWER_ITEM_CHOICE_BAND,
		.teamFlags = 0x05,
		.moves = {
			MOVE_BLIZZARD,
			MOVE_FLAMETHROWER,
			MOVE_EARTHQUAKE,
			MOVE_RETURN
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_BASHFUL,
	},
	{
		.species = SPECIES_XATU,
		.heldItem = BATTLE_TOWER_ITEM_WHITE_HERB,
		.teamFlags = 0x43,
		.moves = {
			MOVE_PSYCHIC,
			MOVE_REST,
			MOVE_CONFUSERAY,
			MOVE_TOXIC
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_BRAVE,
	},
	{
		.species = SPECIES_GOLEM,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x05,
		.moves = {
			MOVE_EXPLOSION,
			MOVE_EARTHQUAKE,
			MOVE_ROCKTOMB,
			MOVE_FLAMETHROWER
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_IMPISH,
	},
	{
		.species = SPECIES_GOLDUCK,
		.heldItem = BATTLE_TOWER_ITEM_PECHA_BERRY,
		.teamFlags = 0x83,
		.moves = {
			MOVE_SURF,
			MOVE_ATTRACT,
			MOVE_CALMMIND,
			MOVE_BLIZZARD
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_HASTY,
	},
	{
		.species = SPECIES_NINETALES,
		.heldItem = BATTLE_TOWER_ITEM_CHARCOAL,
		.teamFlags = 0x4A,
		.moves = {
			MOVE_FLAMETHROWER,
			MOVE_ATTRACT,
			MOVE_TOXIC,
			MOVE_CONFUSERAY
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_KINGDRA,
		.heldItem = BATTLE_TOWER_ITEM_CHESTO_BERRY,
		.teamFlags = 0x13,
		.moves = {
			MOVE_DOUBLETEAM,
			MOVE_REST,
			MOVE_SURF,
			MOVE_DRAGONBREATH
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_ADAMANT,
	},
	{
		.species = SPECIES_SLAKING,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x03,
		.moves = {
			MOVE_CURSE,
			MOVE_AMNESIA,
			MOVE_YAWN,
			MOVE_FOCUSPUNCH
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_LAX,
	},
	{
		.species = SPECIES_GYARADOS,
		.heldItem = BATTLE_TOWER_ITEM_CHERI_BERRY,
		.teamFlags = 0x03,
		.moves = {
			MOVE_THUNDER,
			MOVE_EARTHQUAKE,
			MOVE_HYDROPUMP,
			MOVE_RAINDANCE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
		.nature = NATURE_NAUGHTY,
	},
	{
		.species = SPECIES_HARIYAMA,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x21,
		.moves = {
			MOVE_BELLYDRUM,
			MOVE_ENDURE,
			MOVE_EARTHQUAKE,
			MOVE_REVERSAL
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED,
		.nature = NATURE_SASSY,
	},
	{
		.species = SPECIES_ABSOL,
		.heldItem = BATTLE_TOWER_ITEM_KINGS_ROCK,
		.teamFlags = 0xC3,
		.moves = {
			MOVE_FEINTATTACK,
			MOVE_DOUBLEEDGE,
			MOVE_SHADOWBALL,
			MOVE_FLAMETHROWER
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_RELAXED,
	},
	{
		.species = SPECIES_ALTARIA,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x83,
		.moves = {
			MOVE_DRAGONDANCE,
			MOVE_MIRRORMOVE,
			MOVE_DRAGONCLAW,
			MOVE_EARTHQUAKE
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_RASH,
	},
	{
		.species = SPECIES_MACHAMP,
		.heldItem = BATTLE_TOWER_ITEM_BLACK_BELT,
		.teamFlags = 0x11,
		.moves = {
			MOVE_CROSSCHOP,
			MOVE_FOCUSPUNCH,
			MOVE_ROCKTOMB,
			MOVE_ENCORE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED,
		.nature = NATURE_SASSY,
	},
	{
		.species = SPECIES_FLYGON,
		.heldItem = BATTLE_TOWER_ITEM_DRAGON_FANG,
		.teamFlags = 0x43,
		.moves = {
			MOVE_CRUNCH,
			MOVE_DRAGONCLAW,
			MOVE_EARTHQUAKE,
			MOVE_FLAMETHROWER
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_NAIVE,
	},
	{
		.species = SPECIES_BLAZIKEN,
		.heldItem = BATTLE_TOWER_ITEM_PETAYA_BERRY,
		.teamFlags = 0x33,
		.moves = {
			MOVE_COUNTER,
			MOVE_ROCKSLIDE,
			MOVE_FOCUSPUNCH,
			MOVE_FLAMETHROWER
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_GLALIE,
		.heldItem = BATTLE_TOWER_ITEM_NEVER_MELT_ICE,
		.teamFlags = 0x81,
		.moves = {
			MOVE_BLIZZARD,
			MOVE_CRUNCH,
			MOVE_ICYWIND,
			MOVE_DOUBLETEAM
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_JOLLY,
	},
	{
		.species = SPECIES_HUNTAIL,
		.heldItem = BATTLE_TOWER_ITEM_MYSTIC_WATER,
		.teamFlags = 0xA1,
		.moves = {
			MOVE_RAINDANCE,
			MOVE_HYDROPUMP,
			MOVE_CRUNCH,
			MOVE_BLIZZARD
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_MILOTIC,
		.heldItem = BATTLE_TOWER_ITEM_GANLON_BERRY,
		.teamFlags = 0xD3,
		.moves = {
			MOVE_SURF,
			MOVE_ATTRACT,
			MOVE_RECOVER,
			MOVE_TOXIC
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_HASTY,
	},
	{
		.species = SPECIES_GOREBYSS,
		.heldItem = BATTLE_TOWER_ITEM_PECHA_BERRY,
		.teamFlags = 0x83,
		.moves = {
			MOVE_PSYCHIC,
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_SHADOWBALL
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_ADAMANT,
	},
	{
		.species = SPECIES_SCEPTILE,
		.heldItem = BATTLE_TOWER_ITEM_SCOPE_LENS,
		.teamFlags = 0x53,
		.moves = {
			MOVE_LEAFBLADE,
			MOVE_ENDEAVOR,
			MOVE_EARTHQUAKE,
			MOVE_ROCKTOMB
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED,
		.nature = NATURE_BASHFUL,
	},
	{
		.species = SPECIES_SWAMPERT,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x53,
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_SURF,
			MOVE_MUDSHOT,
			MOVE_BLIZZARD
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_NAIVE,
	},
	{
		.species = SPECIES_AGGRON,
		.heldItem = BATTLE_TOWER_ITEM_MENTAL_HERB,
		.teamFlags = 0x41,
		.moves = {
			MOVE_DOUBLEEDGE,
			MOVE_FLAMETHROWER,
			MOVE_IRONTAIL,
			MOVE_BLIZZARD
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_BOLD,
	},
	{
		.species = SPECIES_CRADILY,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0xE1,
		.moves = {
			MOVE_STOCKPILE,
			MOVE_SPITUP,
			MOVE_SWALLOW,
			MOVE_DOUBLETEAM
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_LAX,
	},
	{
		.species = SPECIES_ARMALDO,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0xC1,
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_HYPERBEAM,
			MOVE_SLASH,
			MOVE_SWORDSDANCE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_LAX,
	},
	{
		.species = SPECIES_BRELOOM,
		.heldItem = BATTLE_TOWER_ITEM_SHELL_BELL,
		.teamFlags = 0x82,
		.moves = {
			MOVE_FOCUSPUNCH,
			MOVE_COUNTER,
			MOVE_MACHPUNCH,
			MOVE_SNATCH
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_LAX,
	},
	{
		.species = SPECIES_LUDICOLO,
		.heldItem = BATTLE_TOWER_ITEM_PETAYA_BERRY,
		.teamFlags = 0x83,
		.moves = {
			MOVE_RAINDANCE,
			MOVE_SURF,
			MOVE_PROTECT,
			MOVE_TOXIC
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_HASTY,
	},
	{
		.species = SPECIES_SHIFTRY,
		.heldItem = BATTLE_TOWER_ITEM_SCOPE_LENS,
		.teamFlags = 0x03,
		.moves = {
			MOVE_TORMENT,
			MOVE_FEINTATTACK,
			MOVE_SHADOWBALL,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_NAIVE,
	},
	{
		.species = SPECIES_TROPIUS,
		.heldItem = BATTLE_TOWER_ITEM_APICOT_BERRY,
		.teamFlags = 0xC3,
		.moves = {
			MOVE_SUNNYDAY,
			MOVE_SYNTHESIS,
			MOVE_SOLARBEAM,
			MOVE_LEECHSEED
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_GRUMPIG,
		.heldItem = BATTLE_TOWER_ITEM_MACHO_BRACE,
		.teamFlags = 0x23,
		.moves = {
			MOVE_TRICK,
			MOVE_SKILLSWAP,
			MOVE_PSYCHIC,
			MOVE_REST
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_TORKOAL,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x81,
		.moves = {
			MOVE_IRONDEFENSE,
			MOVE_TOXIC,
			MOVE_REST,
			MOVE_FLAMETHROWER
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_NAIVE,
	},
	{
		.species = SPECIES_MANECTRIC,
		.heldItem = BATTLE_TOWER_ITEM_NONE,
		.teamFlags = 0x03,
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_CRUNCH,
			MOVE_ROAR,
			MOVE_THIEF
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_HASTY,
	},
	{
		.species = SPECIES_PINSIR,
		.heldItem = BATTLE_TOWER_ITEM_LEPPA_BERRY,
		.teamFlags = 0x61,
		.moves = {
			MOVE_GUILLOTINE,
			MOVE_EARTHQUAKE,
			MOVE_DOUBLETEAM,
			MOVE_ROCKTOMB
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_LAX,
	},
	{
		.species = SPECIES_STARMIE,
		.heldItem = BATTLE_TOWER_ITEM_CHESTO_BERRY,
		.teamFlags = 0x93,
		.moves = {
			MOVE_LIGHTSCREEN,
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_REST
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_ADAMANT,
	},
	{
		.species = SPECIES_HERACROSS,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x51,
		.moves = {
			MOVE_MEGAHORN,
			MOVE_REVERSAL,
			MOVE_EARTHQUAKE,
			MOVE_COUNTER
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_WALREIN,
		.heldItem = BATTLE_TOWER_ITEM_NEVER_MELT_ICE,
		.teamFlags = 0x83,
		.moves = {
			MOVE_BLIZZARD,
			MOVE_EARTHQUAKE,
			MOVE_SURF,
			MOVE_ROCKSLIDE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_CAREFUL,
	},
	{
		.species = SPECIES_ALAKAZAM,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x13,
		.moves = {
			MOVE_PSYCHIC,
			MOVE_RECOVER,
			MOVE_ENCORE,
			MOVE_SNATCH
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_HASTY,
	},
	{
		.species = SPECIES_MILOTIC,
		.heldItem = BATTLE_TOWER_ITEM_APICOT_BERRY,
		.teamFlags = 0x93,
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_RECOVER,
			MOVE_DOUBLETEAM
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_REGICE,
		.heldItem = BATTLE_TOWER_ITEM_CHESTO_BERRY,
		.teamFlags = 0x11,
		.moves = {
			MOVE_REST,
			MOVE_CURSE,
			MOVE_BLIZZARD,
			MOVE_EARTHQUAKE
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_MILD,
	},
	{
		.species = SPECIES_REGISTEEL,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x11,
		.moves = {
			MOVE_REST,
			MOVE_IRONDEFENSE,
			MOVE_THUNDERBOLT,
			MOVE_EARTHQUAKE
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
		.nature = NATURE_MILD,
	},
	{
		.species = SPECIES_REGIROCK,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0x91,
		.moves = {
			MOVE_ROCKTOMB,
			MOVE_EARTHQUAKE,
			MOVE_THUNDERBOLT,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_SASSY,
	},
	{
		.species = SPECIES_DUSCLOPS,
		.heldItem = BATTLE_TOWER_ITEM_SPELL_TAG,
		.teamFlags = 0x20,
		.moves = {
			MOVE_SHADOWBALL,
			MOVE_EARTHQUAKE,
			MOVE_BLIZZARD,
			MOVE_DESTINYBOND
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_NAUGHTY,
	},
	{
		.species = SPECIES_SEAKING,
		.heldItem = BATTLE_TOWER_ITEM_LEPPA_BERRY,
		.teamFlags = 0xB2,
		.moves = {
			MOVE_HORNDRILL,
			MOVE_AGILITY,
			MOVE_SLEEPTALK,
			MOVE_REST
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_BRAVE,
	},
	{
		.species = SPECIES_CAMERUPT,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0x00,
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ERUPTION,
			MOVE_ROCKSLIDE,
			MOVE_FLAMETHROWER
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_NAIVE,
	},
	{
		.species = SPECIES_LANTURN,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x82,
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_THUNDERWAVE,
			MOVE_BLIZZARD
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_BRAVE,
	},
	{
		.species = SPECIES_WEEZING,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x20,
		.moves = {
			MOVE_SLUDGEBOMB,
			MOVE_THUNDERBOLT,
			MOVE_FIREBLAST,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_SERIOUS,
	},
	{
		.species = SPECIES_WHISCASH,
		.heldItem = BATTLE_TOWER_ITEM_PETAYA_BERRY,
		.teamFlags = 0x41,
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_SURF,
			MOVE_ROCKTOMB,
			MOVE_ATTRACT
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_RELAXED,
	},
	{
		.species = SPECIES_AGGRON,
		.heldItem = BATTLE_TOWER_ITEM_LIECHI_BERRY,
		.teamFlags = 0x11,
		.moves = {
			MOVE_DOUBLEEDGE,
			MOVE_EARTHQUAKE,
			MOVE_SURF,
			MOVE_DRAGONCLAW
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_CACTURNE,
		.heldItem = BATTLE_TOWER_ITEM_SCOPE_LENS,
		.teamFlags = 0x63,
		.moves = {
			MOVE_DYNAMICPUNCH,
			MOVE_COUNTER,
			MOVE_FEINTATTACK,
			MOVE_GIGADRAIN
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
		.nature = NATURE_RELAXED,
	},
	{
		.species = SPECIES_SHARPEDO,
		.heldItem = BATTLE_TOWER_ITEM_KINGS_ROCK,
		.teamFlags = 0x01,
		.moves = {
			MOVE_CRUNCH,
			MOVE_DOUBLEEDGE,
			MOVE_SURF,
			MOVE_SWAGGER
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_SASSY,
	},
	{
		.species = SPECIES_ABSOL,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x82,
		.moves = {
			MOVE_DOUBLEEDGE,
			MOVE_FACADE,
			MOVE_SWORDSDANCE,
			MOVE_QUICKATTACK
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_WAILORD,
		.heldItem = BATTLE_TOWER_ITEM_LEPPA_BERRY,
		.teamFlags = 0x23,
		.moves = {
			MOVE_HYDROPUMP,
			MOVE_EARTHQUAKE,
			MOVE_ATTRACT,
			MOVE_FISSURE
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_TIMID,
	},
	{
		.species = SPECIES_TENTACRUEL,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x21,
		.moves = {
			MOVE_HYDROPUMP,
			MOVE_SLUDGEBOMB,
			MOVE_GIGADRAIN,
			MOVE_MIRRORCOAT
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_RASH,
	},
	{
		.species = SPECIES_LUDICOLO,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0xA2,
		.moves = {
			MOVE_RAINDANCE,
			MOVE_SURF,
			MOVE_TOXIC,
			MOVE_DOUBLETEAM
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_WOBBUFFET,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x23,
		.moves = {
			MOVE_ENCORE,
			MOVE_COUNTER,
			MOVE_MIRRORCOAT,
			MOVE_DESTINYBOND
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_SERIOUS,
	},
	{
		.species = SPECIES_RHYDON,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0x21,
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_MEGAHORN,
			MOVE_HORNDRILL,
			MOVE_ROCKSLIDE
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_GLALIE,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x21,
		.moves = {
			MOVE_CRUNCH,
			MOVE_BLIZZARD,
			MOVE_HAIL,
			MOVE_EARTHQUAKE
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_SERIOUS,
	},
	{
		.species = SPECIES_SCEPTILE,
		.heldItem = BATTLE_TOWER_ITEM_SCOPE_LENS,
		.teamFlags = 0x13,
		.moves = {
			MOVE_LEAFBLADE,
			MOVE_EARTHQUAKE,
			MOVE_DRAGONCLAW,
			MOVE_CRUNCH
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED,
		.nature = NATURE_BRAVE,
	},
	{
		.species = SPECIES_BLAZIKEN,
		.heldItem = BATTLE_TOWER_ITEM_LIECHI_BERRY,
		.teamFlags = 0x17,
		.moves = {
			MOVE_BLAZEKICK,
			MOVE_ROCKTOMB,
			MOVE_ENDURE,
			MOVE_REVERSAL
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_RASH,
	},
	{
		.species = SPECIES_SWAMPERT,
		.heldItem = BATTLE_TOWER_ITEM_SHELL_BELL,
		.teamFlags = 0x17,
		.moves = {
			MOVE_SURF,
			MOVE_EARTHQUAKE,
			MOVE_MUDSHOT,
			MOVE_BLIZZARD
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_SERIOUS,
	},
	{
		.species = SPECIES_GARDEVOIR,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x19,
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDERBOLT,
			MOVE_DESTINYBOND,
			MOVE_WILLOWISP
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_BRAVE,
	},
	{
		.species = SPECIES_BRELOOM,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0xF6,
		.moves = {
			MOVE_SPORE,
			MOVE_FOCUSPUNCH,
			MOVE_BRICKBREAK,
			MOVE_SLUDGEBOMB
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_SASSY,
	},
	{
		.species = SPECIES_ALAKAZAM,
		.heldItem = BATTLE_TOWER_ITEM_GANLON_BERRY,
		.teamFlags = 0x1B,
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDERPUNCH,
			MOVE_REFLECT,
			MOVE_RECOVER
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_HASTY,
	},
	{
		.species = SPECIES_SHIFTRY,
		.heldItem = BATTLE_TOWER_ITEM_CHESTO_BERRY,
		.teamFlags = 0x89,
		.moves = {
			MOVE_FEINTATTACK,
			MOVE_SHADOWBALL,
			MOVE_DOUBLETEAM,
			MOVE_REST
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_SERIOUS,
	},
	{
		.species = SPECIES_HARIYAMA,
		.heldItem = BATTLE_TOWER_ITEM_SCOPE_LENS,
		.teamFlags = 0x85,
		.moves = {
			MOVE_CROSSCHOP,
			MOVE_EARTHQUAKE,
			MOVE_FACADE,
			MOVE_FAKEOUT
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_CROBAT,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0x49,
		.moves = {
			MOVE_ATTRACT,
			MOVE_CONFUSERAY,
			MOVE_BITE,
			MOVE_DOUBLETEAM
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_SASSY,
	},
	{
		.species = SPECIES_MACHAMP,
		.heldItem = BATTLE_TOWER_ITEM_SCOPE_LENS,
		.teamFlags = 0x15,
		.moves = {
			MOVE_CROSSCHOP,
			MOVE_FLAMETHROWER,
			MOVE_EARTHQUAKE,
			MOVE_ROCKSLIDE
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_MANECTRIC,
		.heldItem = BATTLE_TOWER_ITEM_PETAYA_BERRY,
		.teamFlags = 0x0B,
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDERWAVE,
			MOVE_ROAR,
			MOVE_CRUNCH
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_BRAVE,
	},
	{
		.species = SPECIES_ELECTRODE,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x27,
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_PROTECT,
			MOVE_MIRRORCOAT,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_BASHFUL,
	},
	{
		.species = SPECIES_MUK,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0x05,
		.moves = {
			MOVE_SLUDGEBOMB,
			MOVE_FLAMETHROWER,
			MOVE_THUNDERBOLT,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_FLYGON,
		.heldItem = BATTLE_TOWER_ITEM_PETAYA_BERRY,
		.teamFlags = 0x4D,
		.moves = {
			MOVE_DRAGONCLAW,
			MOVE_EARTHQUAKE,
			MOVE_FLAMETHROWER,
			MOVE_CRUNCH
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_SERIOUS,
	},
	{
		.species = SPECIES_STARMIE,
		.heldItem = BATTLE_TOWER_ITEM_APICOT_BERRY,
		.teamFlags = 0x1B,
		.moves = {
			MOVE_SURF,
			MOVE_THUNDERBOLT,
			MOVE_RECOVER,
			MOVE_CONFUSERAY
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_BRAVE,
	},
	{
		.species = SPECIES_DODRIO,
		.heldItem = BATTLE_TOWER_ITEM_LIECHI_BERRY,
		.teamFlags = 0x2B,
		.moves = {
			MOVE_DRILLPECK,
			MOVE_TRIATTACK,
			MOVE_AGILITY,
			MOVE_FACADE
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_RAICHU,
		.heldItem = BATTLE_TOWER_ITEM_FOCUS_BAND,
		.teamFlags = 0x0A,
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDERWAVE,
			MOVE_REVERSAL,
			MOVE_ATTRACT
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_SERIOUS,
	},
	{
		.species = SPECIES_GOLDUCK,
		.heldItem = BATTLE_TOWER_ITEM_LIECHI_BERRY,
		.teamFlags = 0x0A,
		.moves = {
			MOVE_SURF,
			MOVE_CROSSCHOP,
			MOVE_ICEBEAM,
			MOVE_HYPERBEAM
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_SERIOUS,
	},
	{
		.species = SPECIES_HERACROSS,
		.heldItem = BATTLE_TOWER_ITEM_LIECHI_BERRY,
		.teamFlags = 0x54,
		.moves = {
			MOVE_MEGAHORN,
			MOVE_ROCKTOMB,
			MOVE_ENDURE,
			MOVE_REVERSAL
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_SASSY,
	},
	{
		.species = SPECIES_WALREIN,
		.heldItem = BATTLE_TOWER_ITEM_CHESTO_BERRY,
		.teamFlags = 0x06,
		.moves = {
			MOVE_SURF,
			MOVE_ICEBEAM,
			MOVE_EARTHQUAKE,
			MOVE_REST
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_NAIVE,
	},
	{
		.species = SPECIES_KINGDRA,
		.heldItem = BATTLE_TOWER_ITEM_CHESTO_BERRY,
		.teamFlags = 0x1D,
		.moves = {
			MOVE_SURF,
			MOVE_TOXIC,
			MOVE_PROTECT,
			MOVE_REST
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_ADAMANT,
	},
	{
		.species = SPECIES_SALAMENCE,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x9C,
		.moves = {
			MOVE_DRAGONCLAW,
			MOVE_EARTHQUAKE,
			MOVE_CRUNCH,
			MOVE_REST
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_ADAMANT,
	},
	{
		.species = SPECIES_METAGROSS,
		.heldItem = BATTLE_TOWER_ITEM_SHELL_BELL,
		.teamFlags = 0x15,
		.moves = {
			MOVE_METEORMASH,
			MOVE_PSYCHIC,
			MOVE_EARTHQUAKE,
			MOVE_LIGHTSCREEN
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_REGIROCK,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0xB5,
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ANCIENTPOWER,
			MOVE_FOCUSPUNCH,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_REGICE,
		.heldItem = BATTLE_TOWER_ITEM_CHESTO_BERRY,
		.teamFlags = 0x96,
		.moves = {
			MOVE_ICEBEAM,
			MOVE_THUNDERBOLT,
			MOVE_DOUBLETEAM,
			MOVE_REST
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_HASTY,
	},
	{
		.species = SPECIES_REGISTEEL,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0x94,
		.moves = {
			MOVE_METALCLAW,
			MOVE_EARTHQUAKE,
			MOVE_THUNDERBOLT,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_LATIAS,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x96,
		.moves = {
			MOVE_MISTBALL,
			MOVE_THUNDERBOLT,
			MOVE_REST,
			MOVE_DRAGONCLAW
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_MILD,
	},
	{
		.species = SPECIES_LATIOS,
		.heldItem = BATTLE_TOWER_ITEM_APICOT_BERRY,
		.teamFlags = 0x95,
		.moves = {
			MOVE_LUSTERPURGE,
			MOVE_REFLECT,
			MOVE_RECOVER,
			MOVE_DRAGONCLAW
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_BRAVE,
	},
	{
		.species = SPECIES_MILOTIC,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x96,
		.moves = {
			MOVE_SURF,
			MOVE_TOXIC,
			MOVE_RECOVER,
			MOVE_MIRRORCOAT
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_BRAVE,
	},
	{
		.species = SPECIES_SLAKING,
		.heldItem = BATTLE_TOWER_ITEM_CHOICE_BAND,
		.teamFlags = 0x05,
		.moves = {
			MOVE_HYPERBEAM,
			MOVE_EARTHQUAKE,
			MOVE_NONE,
			MOVE_NONE
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_SERIOUS,
	},
	{
		.species = SPECIES_SCEPTILE,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x1F,
		.moves = {
			MOVE_GIGADRAIN,
			MOVE_DOUBLETEAM,
			MOVE_LEECHSEED,
			MOVE_ATTRACT
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_BLAZIKEN,
		.heldItem = BATTLE_TOWER_ITEM_CHESTO_BERRY,
		.teamFlags = 0x17,
		.moves = {
			MOVE_BLAZEKICK,
			MOVE_EARTHQUAKE,
			MOVE_ROCKSLIDE,
			MOVE_REST
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_BRAVE,
	},
	{
		.species = SPECIES_SWAMPERT,
		.heldItem = BATTLE_TOWER_ITEM_SHELL_BELL,
		.teamFlags = 0x17,
		.moves = {
			MOVE_MUDDYWATER,
			MOVE_MUDSHOT,
			MOVE_MIRRORCOAT,
			MOVE_ICEBEAM
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_GARDEVOIR,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x7B,
		.moves = {
			MOVE_PSYCHIC,
			MOVE_SHADOWBALL,
			MOVE_DESTINYBOND,
			MOVE_SNATCH
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_RELAXED,
	},
	{
		.species = SPECIES_BRELOOM,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x56,
		.moves = {
			MOVE_SPORE,
			MOVE_COUNTER,
			MOVE_IRONTAIL,
			MOVE_GIGADRAIN
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_SASSY,
	},
	{
		.species = SPECIES_ALAKAZAM,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0x0A,
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDERPUNCH,
			MOVE_FIREPUNCH,
			MOVE_RECOVER
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_HASTY,
	},
	{
		.species = SPECIES_HARIYAMA,
		.heldItem = BATTLE_TOWER_ITEM_FOCUS_BAND,
		.teamFlags = 0x05,
		.moves = {
			MOVE_CROSSCHOP,
			MOVE_ROCKTOMB,
			MOVE_ENDURE,
			MOVE_REVERSAL
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_SASSY,
	},
	{
		.species = SPECIES_GYARADOS,
		.heldItem = BATTLE_TOWER_ITEM_SHELL_BELL,
		.teamFlags = 0x0C,
		.moves = {
			MOVE_HYPERBEAM,
			MOVE_THUNDERBOLT,
			MOVE_EARTHQUAKE,
			MOVE_ICEBEAM
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_BOLD,
	},
	{
		.species = SPECIES_CROBAT,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0x49,
		.moves = {
			MOVE_TOXIC,
			MOVE_CONFUSERAY,
			MOVE_ATTRACT,
			MOVE_PROTECT
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_MACHAMP,
		.heldItem = BATTLE_TOWER_ITEM_SCOPE_LENS,
		.teamFlags = 0x15,
		.moves = {
			MOVE_CROSSCHOP,
			MOVE_COUNTER,
			MOVE_EARTHQUAKE,
			MOVE_FACADE
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_SERIOUS,
	},
	{
		.species = SPECIES_MANECTRIC,
		.heldItem = BATTLE_TOWER_ITEM_CHESTO_BERRY,
		.teamFlags = 0x63,
		.moves = {
			MOVE_THUNDER,
			MOVE_THUNDERWAVE,
			MOVE_REST,
			MOVE_CRUNCH
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_BRAVE,
	},
	{
		.species = SPECIES_ELECTRODE,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x07,
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SCREECH,
			MOVE_MIRRORCOAT,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_MODEST,
	},
	{
		.species = SPECIES_MUK,
		.heldItem = BATTLE_TOWER_ITEM_LIECHI_BERRY,
		.teamFlags = 0x45,
		.moves = {
			MOVE_SLUDGEBOMB,
			MOVE_GIGADRAIN,
			MOVE_ROCKTOMB,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_RASH,
	},
	{
		.species = SPECIES_FLYGON,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x4D,
		.moves = {
			MOVE_DRAGONCLAW,
			MOVE_EARTHQUAKE,
			MOVE_IRONTAIL,
			MOVE_ROCKTOMB
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_IMPISH,
	},
	{
		.species = SPECIES_STARMIE,
		.heldItem = BATTLE_TOWER_ITEM_CHESTO_BERRY,
		.teamFlags = 0x1B,
		.moves = {
			MOVE_LIGHTSCREEN,
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_REST
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_NINETALES,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x0A,
		.moves = {
			MOVE_CONFUSERAY,
			MOVE_OVERHEAT,
			MOVE_FLAMETHROWER,
			MOVE_IRONTAIL
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_GOLEM,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x25,
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROAR,
			MOVE_FIREBLAST,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED,
		.nature = NATURE_SERIOUS,
	},
	{
		.species = SPECIES_GOLDUCK,
		.heldItem = BATTLE_TOWER_ITEM_PETAYA_BERRY,
		.teamFlags = 0x27,
		.moves = {
			MOVE_HYDROPUMP,
			MOVE_CROSSCHOP,
			MOVE_BLIZZARD,
			MOVE_PSYCHUP
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_HERACROSS,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x55,
		.moves = {
			MOVE_MEGAHORN,
			MOVE_EARTHQUAKE,
			MOVE_COUNTER,
			MOVE_REVERSAL
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_WALREIN,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x36,
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_ROCKSLIDE,
			MOVE_SHEERCOLD
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_SERIOUS,
	},
	{
		.species = SPECIES_KINGDRA,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x5C,
		.moves = {
			MOVE_HYDROPUMP,
			MOVE_PROTECT,
			MOVE_DRAGONBREATH,
			MOVE_DOUBLETEAM
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_ADAMANT,
	},
	{
		.species = SPECIES_SALAMENCE,
		.heldItem = BATTLE_TOWER_ITEM_KINGS_ROCK,
		.teamFlags = 0x9D,
		.moves = {
			MOVE_DRAGONCLAW,
			MOVE_EARTHQUAKE,
			MOVE_FLAMETHROWER,
			MOVE_ROCKTOMB
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_SERIOUS,
	},
	{
		.species = SPECIES_METAGROSS,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0x15,
		.moves = {
			MOVE_METEORMASH,
			MOVE_PSYCHIC,
			MOVE_EARTHQUAKE,
			MOVE_HYPERBEAM
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_REGIROCK,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0x95,
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCKTOMB,
			MOVE_FACADE,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_REGICE,
		.heldItem = BATTLE_TOWER_ITEM_SHELL_BELL,
		.teamFlags = 0x96,
		.moves = {
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_HAIL,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_CAREFUL,
	},
	{
		.species = SPECIES_REGISTEEL,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0x94,
		.moves = {
			MOVE_METALCLAW,
			MOVE_EARTHQUAKE,
			MOVE_ANCIENTPOWER,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_LATIAS,
		.heldItem = BATTLE_TOWER_ITEM_APICOT_BERRY,
		.teamFlags = 0x96,
		.moves = {
			MOVE_MISTBALL,
			MOVE_REFLECT,
			MOVE_RECOVER,
			MOVE_DRAGONCLAW
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_BRAVE,
	},
	{
		.species = SPECIES_LATIOS,
		.heldItem = BATTLE_TOWER_ITEM_SHELL_BELL,
		.teamFlags = 0x95,
		.moves = {
			MOVE_LUSTERPURGE,
			MOVE_ICEBEAM,
			MOVE_RECOVER,
			MOVE_DRAGONCLAW
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_MILOTIC,
		.heldItem = BATTLE_TOWER_ITEM_APICOT_BERRY,
		.teamFlags = 0xD6,
		.moves = {
			MOVE_SURF,
			MOVE_ICEBEAM,
			MOVE_RECOVER,
			MOVE_DOUBLETEAM
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_ADAMANT,
	},
	{
		.species = SPECIES_KECLEON,
		.heldItem = BATTLE_TOWER_ITEM_CHOICE_BAND,
		.teamFlags = 0x69,
		.moves = {
			MOVE_TRICK,
			MOVE_REST,
			MOVE_IRONTAIL,
			MOVE_DISABLE
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_QUIRKY,
	},
	{
		.species = SPECIES_SCEPTILE,
		.heldItem = BATTLE_TOWER_ITEM_CHESTO_BERRY,
		.teamFlags = 0x5F,
		.moves = {
			MOVE_LEAFBLADE,
			MOVE_EARTHQUAKE,
			MOVE_REST,
			MOVE_CRUNCH
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_BRAVE,
	},
	{
		.species = SPECIES_BLAZIKEN,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x7F,
		.moves = {
			MOVE_FOCUSPUNCH,
			MOVE_COUNTER,
			MOVE_SWAGGER,
			MOVE_ROCKTOMB
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_SASSY,
	},
	{
		.species = SPECIES_SWAMPERT,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x57,
		.moves = {
			MOVE_IRONTAIL,
			MOVE_CURSE,
			MOVE_DOUBLETEAM,
			MOVE_REST
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_LAX,
	},
	{
		.species = SPECIES_GARDEVOIR,
		.heldItem = BATTLE_TOWER_ITEM_CHESTO_BERRY,
		.teamFlags = 0x3B,
		.moves = {
			MOVE_SHADOWBALL,
			MOVE_PSYCHIC,
			MOVE_REST,
			MOVE_IMPRISON
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_BRAVE,
	},
	{
		.species = SPECIES_BRELOOM,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x56,
		.moves = {
			MOVE_SPORE,
			MOVE_FOCUSPUNCH,
			MOVE_SLUDGEBOMB,
			MOVE_IRONTAIL
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_SASSY,
	},
	{
		.species = SPECIES_ALAKAZAM,
		.heldItem = BATTLE_TOWER_ITEM_CHOICE_BAND,
		.teamFlags = 0x1A,
		.moves = {
			MOVE_PSYCHIC,
			MOVE_TRICK,
			MOVE_RECOVER,
			MOVE_SNATCH
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_HASTY,
	},
	{
		.species = SPECIES_HARIYAMA,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x65,
		.moves = {
			MOVE_REVENGE,
			MOVE_COUNTER,
			MOVE_FOCUSPUNCH,
			MOVE_REVERSAL
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_SASSY,
	},
	{
		.species = SPECIES_LUDICOLO,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x54,
		.moves = {
			MOVE_RAINDANCE,
			MOVE_PROTECT,
			MOVE_TOXIC,
			MOVE_SURF
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_CROBAT,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0x4B,
		.moves = {
			MOVE_SLUDGEBOMB,
			MOVE_BITE,
			MOVE_AIRCUTTER,
			MOVE_SHADOWBALL
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_BRAVE,
	},
	{
		.species = SPECIES_MACHAMP,
		.heldItem = BATTLE_TOWER_ITEM_SCOPE_LENS,
		.teamFlags = 0x75,
		.moves = {
			MOVE_CROSSCHOP,
			MOVE_ROCKSLIDE,
			MOVE_DYNAMICPUNCH,
			MOVE_ROCKTOMB
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_MANECTRIC,
		.heldItem = BATTLE_TOWER_ITEM_PETAYA_BERRY,
		.teamFlags = 0x0A,
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDERWAVE,
			MOVE_ATTRACT,
			MOVE_CRUNCH
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_ELECTRODE,
		.heldItem = BATTLE_TOWER_ITEM_LIECHI_BERRY,
		.teamFlags = 0x64,
		.moves = {
			MOVE_THUNDER,
			MOVE_DOUBLETEAM,
			MOVE_MIRRORCOAT,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_BASHFUL,
	},
	{
		.species = SPECIES_MUK,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x49,
		.moves = {
			MOVE_SLUDGEBOMB,
			MOVE_FLAMETHROWER,
			MOVE_THUNDERBOLT,
			MOVE_SHADOWPUNCH
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_FLYGON,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0xCD,
		.moves = {
			MOVE_PROTECT,
			MOVE_DIG,
			MOVE_TOXIC,
			MOVE_SANDSTORM
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_LAX,
	},
	{
		.species = SPECIES_STARMIE,
		.heldItem = BATTLE_TOWER_ITEM_KINGS_ROCK,
		.teamFlags = 0x5B,
		.moves = {
			MOVE_SURF,
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
			MOVE_PSYCHIC
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_BRAVE,
	},
	{
		.species = SPECIES_LUDICOLO,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x1A,
		.moves = {
			MOVE_RAINDANCE,
			MOVE_LEECHSEED,
			MOVE_DIVE,
			MOVE_PROTECT
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED,
		.nature = NATURE_BRAVE,
	},
	{
		.species = SPECIES_RAICHU,
		.heldItem = BATTLE_TOWER_ITEM_LIECHI_BERRY,
		.teamFlags = 0x4A,
		.moves = {
			MOVE_THUNDER,
			MOVE_REVERSAL,
			MOVE_FACADE,
			MOVE_IRONTAIL
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_TIMID,
	},
	{
		.species = SPECIES_GOLDUCK,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x0A,
		.moves = {
			MOVE_SURF,
			MOVE_PSYCHIC,
			MOVE_ICEBEAM,
			MOVE_IRONTAIL
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_DOCILE,
	},
	{
		.species = SPECIES_HERACROSS,
		.heldItem = BATTLE_TOWER_ITEM_LIECHI_BERRY,
		.teamFlags = 0x15,
		.moves = {
			MOVE_MEGAHORN,
			MOVE_EARTHQUAKE,
			MOVE_FACADE,
			MOVE_ROCKTOMB
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_WALREIN,
		.heldItem = BATTLE_TOWER_ITEM_LEPPA_BERRY,
		.teamFlags = 0x26,
		.moves = {
			MOVE_SURF,
			MOVE_ICEBEAM,
			MOVE_FISSURE,
			MOVE_SHEERCOLD
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_KINGDRA,
		.heldItem = BATTLE_TOWER_ITEM_SHELL_BELL,
		.teamFlags = 0x4D,
		.moves = {
			MOVE_HYDROPUMP,
			MOVE_BLIZZARD,
			MOVE_HYPERBEAM,
			MOVE_DISABLE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_SALAMENCE,
		.heldItem = BATTLE_TOWER_ITEM_PETAYA_BERRY,
		.teamFlags = 0x9C,
		.moves = {
			MOVE_DRAGONCLAW,
			MOVE_EARTHQUAKE,
			MOVE_FIREBLAST,
			MOVE_HYDROPUMP
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_NAUGHTY,
	},
	{
		.species = SPECIES_METAGROSS,
		.heldItem = BATTLE_TOWER_ITEM_LIECHI_BERRY,
		.teamFlags = 0xB5,
		.moves = {
			MOVE_METEORMASH,
			MOVE_PSYCHIC,
			MOVE_PURSUIT,
			MOVE_ROCKTOMB
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED,
		.nature = NATURE_BRAVE,
	},
	{
		.species = SPECIES_REGIROCK,
		.heldItem = BATTLE_TOWER_ITEM_APICOT_BERRY,
		.teamFlags = 0x95,
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_TOXIC,
			MOVE_SUPERPOWER,
			MOVE_REST
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_SERIOUS,
	},
	{
		.species = SPECIES_REGICE,
		.heldItem = BATTLE_TOWER_ITEM_LAX_INCENSE,
		.teamFlags = 0x96,
		.moves = {
			MOVE_ICEBEAM,
			MOVE_THUNDERBOLT,
			MOVE_ANCIENTPOWER,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_RASH,
	},
	{
		.species = SPECIES_REGISTEEL,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0xB4,
		.moves = {
			MOVE_CURSE,
			MOVE_AMNESIA,
			MOVE_RETURN,
			MOVE_REST
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_LAX,
	},
	{
		.species = SPECIES_LATIAS,
		.heldItem = BATTLE_TOWER_ITEM_SHELL_BELL,
		.teamFlags = 0x92,
		.moves = {
			MOVE_MISTBALL,
			MOVE_THUNDERBOLT,
			MOVE_EARTHQUAKE,
			MOVE_ICEBEAM
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_LATIOS,
		.heldItem = BATTLE_TOWER_ITEM_SHELL_BELL,
		.teamFlags = 0x91,
		.moves = {
			MOVE_LUSTERPURGE,
			MOVE_THUNDERBOLT,
			MOVE_EARTHQUAKE,
			MOVE_SURF
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_MILOTIC,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0xB2,
		.moves = {
			MOVE_SURF,
			MOVE_ICEBEAM,
			MOVE_RECOVER,
			MOVE_ATTRACT
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_BRAVE,
	},
	{
		.species = SPECIES_SLAKING,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x65,
		.moves = {
			MOVE_YAWN,
			MOVE_SLASH,
			MOVE_COUNTER,
			MOVE_HYPERBEAM
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_DOCILE,
	},
	{
		.species = SPECIES_SCEPTILE,
		.heldItem = BATTLE_TOWER_ITEM_SHELL_BELL,
		.teamFlags = 0xDF,
		.moves = {
			MOVE_LEAFBLADE,
			MOVE_DETECT,
			MOVE_DRAGONCLAW,
			MOVE_CRUNCH
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_BLAZIKEN,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0xD7,
		.moves = {
			MOVE_BLAZEKICK,
			MOVE_SKYUPPERCUT,
			MOVE_EARTHQUAKE,
			MOVE_ROCKSLIDE
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
		.nature = NATURE_DOCILE,
	},
	{
		.species = SPECIES_SWAMPERT,
		.heldItem = BATTLE_TOWER_ITEM_PETAYA_BERRY,
		.teamFlags = 0x5F,
		.moves = {
			MOVE_SURF,
			MOVE_EARTHQUAKE,
			MOVE_ICEBEAM,
			MOVE_ROCKTOMB
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_SASSY,
	},
	{
		.species = SPECIES_SHEDINJA,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0xDB,
		.moves = {
			MOVE_CONFUSERAY,
			MOVE_SHADOWBALL,
			MOVE_TOXIC,
			MOVE_HYPERBEAM
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_METAGROSS,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0x94,
		.moves = {
			MOVE_METEORMASH,
			MOVE_PSYCHIC,
			MOVE_SHADOWBALL,
			MOVE_EARTHQUAKE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_GRUMPIG,
		.heldItem = BATTLE_TOWER_ITEM_MACHO_BRACE,
		.teamFlags = 0x4B,
		.moves = {
			MOVE_PSYCHIC,
			MOVE_CONFUSERAY,
			MOVE_TRICK,
			MOVE_REFLECT
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_LATIAS,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x92,
		.moves = {
			MOVE_MISTBALL,
			MOVE_RECOVER,
			MOVE_ATTRACT,
			MOVE_DRAGONCLAW
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_ADAMANT,
	},
	{
		.species = SPECIES_LATIOS,
		.heldItem = BATTLE_TOWER_ITEM_KINGS_ROCK,
		.teamFlags = 0x91,
		.moves = {
			MOVE_LUSTERPURGE,
			MOVE_THUNDERBOLT,
			MOVE_ICEBEAM,
			MOVE_DRAGONCLAW
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_STARMIE,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x1A,
		.moves = {
			MOVE_SURF,
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_ICEBEAM
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_MACHAMP,
		.heldItem = BATTLE_TOWER_ITEM_SCOPE_LENS,
		.teamFlags = 0x14,
		.moves = {
			MOVE_CROSSCHOP,
			MOVE_COUNTER,
			MOVE_ROCKTOMB,
			MOVE_FLAMETHROWER
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
};
