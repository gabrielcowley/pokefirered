const struct BattleTowerPokemonTemplate gBattleTowerLevel100Mons[] =
{
	{
		.species = SPECIES_LINOONE,
		.heldItem = BATTLE_TOWER_ITEM_RAWST_BERRY,
		.teamFlags = 0x42,
		.moves = {
			MOVE_SLASH,
			MOVE_GROWL,
			MOVE_TAILWHIP,
			MOVE_SANDATTACK
		},
		.evSpread = F_EV_SPREAD_SPEED,
		.nature = NATURE_SERIOUS,
	},
	{
		.species = SPECIES_MIGHTYENA,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x41,
		.moves = {
			MOVE_BITE,
			MOVE_HOWL,
			MOVE_ODORSLEUTH,
			MOVE_SCARYFACE
		},
		.evSpread = F_EV_SPREAD_ATTACK,
		.nature = NATURE_NAIVE,
	},
	{
		.species = SPECIES_BEAUTIFLY,
		.heldItem = BATTLE_TOWER_ITEM_PERSIM_BERRY,
		.teamFlags = 0x41,
		.moves = {
			MOVE_GIGADRAIN,
			MOVE_GUST,
			MOVE_STUNSPORE,
			MOVE_PROTECT
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_CAREFUL,
	},
	{
		.species = SPECIES_DUSTOX,
		.heldItem = BATTLE_TOWER_ITEM_PECHA_BERRY,
		.teamFlags = 0x41,
		.moves = {
			MOVE_PSYBEAM,
			MOVE_GUST,
			MOVE_DOUBLETEAM,
			MOVE_SILVERWIND
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_RELAXED,
	},
	{
		.species = SPECIES_LOMBRE,
		.heldItem = BATTLE_TOWER_ITEM_CHESTO_BERRY,
		.teamFlags = 0x03,
		.moves = {
			MOVE_ASTONISH,
			MOVE_GROWL,
			MOVE_MEGADRAIN,
			MOVE_SURF
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_LONELY,
	},
	{
		.species = SPECIES_NUZLEAF,
		.heldItem = BATTLE_TOWER_ITEM_WHITE_HERB,
		.teamFlags = 0x01,
		.moves = {
			MOVE_BULLETSEED,
			MOVE_RAZORWIND,
			MOVE_FEINTATTACK,
			MOVE_GROWTH
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
		.nature = NATURE_DOCILE,
	},
	{
		.species = SPECIES_SWELLOW,
		.heldItem = BATTLE_TOWER_ITEM_SHARP_BEAK,
		.teamFlags = 0x42,
		.moves = {
			MOVE_AERIALACE,
			MOVE_GROWL,
			MOVE_ENDEAVOR,
			MOVE_FOCUSENERGY
		},
		.evSpread = F_EV_SPREAD_ATTACK,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_PELIPPER,
		.heldItem = BATTLE_TOWER_ITEM_MYSTIC_WATER,
		.teamFlags = 0x02,
		.moves = {
			MOVE_SURF,
			MOVE_WATERSPORT,
			MOVE_PROTECT,
			MOVE_SUPERSONIC
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK,
		.nature = NATURE_MILD,
	},
	{
		.species = SPECIES_BRELOOM,
		.heldItem = BATTLE_TOWER_ITEM_KINGS_ROCK,
		.teamFlags = 0x42,
		.moves = {
			MOVE_MACHPUNCH,
			MOVE_MEGADRAIN,
			MOVE_HEADBUTT,
			MOVE_STUNSPORE
		},
		.evSpread = F_EV_SPREAD_ATTACK,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_NINJASK,
		.heldItem = BATTLE_TOWER_ITEM_RAWST_BERRY,
		.teamFlags = 0x41,
		.moves = {
			MOVE_SCRATCH,
			MOVE_SCREECH,
			MOVE_LEECHLIFE,
			MOVE_FLASH
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_SERIOUS,
	},
	{
		.species = SPECIES_CROBAT,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x01,
		.moves = {
			MOVE_BITE,
			MOVE_FLY,
			MOVE_SUPERSONIC,
			MOVE_HAZE
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_IMPISH,
	},
	{
		.species = SPECIES_MAWILE,
		.heldItem = BATTLE_TOWER_ITEM_METAL_COAT,
		.teamFlags = 0x03,
		.moves = {
			MOVE_VICEGRIP,
			MOVE_SWEETSCENT,
			MOVE_ASTONISH,
			MOVE_STRENGTH
		},
		.evSpread = F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_NOSEPASS,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x01,
		.moves = {
			MOVE_ROCKTHROW,
			MOVE_SANDSTORM,
			MOVE_HARDEN,
			MOVE_PROTECT
		},
		.evSpread = F_EV_SPREAD_ATTACK,
		.nature = NATURE_IMPISH,
	},
	{
		.species = SPECIES_DELCATTY,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x42,
		.moves = {
			MOVE_DOUBLESLAP,
			MOVE_TAILWHIP,
			MOVE_ATTRACT,
			MOVE_CHARM
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_BOLD,
	},
	{
		.species = SPECIES_CAMERUPT,
		.heldItem = BATTLE_TOWER_ITEM_CHARCOAL,
		.teamFlags = 0x01,
		.moves = {
			MOVE_EMBER,
			MOVE_TAKEDOWN,
			MOVE_GROWL,
			MOVE_SANDSTORM
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE,
		.nature = NATURE_RASH,
	},
	{
		.species = SPECIES_MUK,
		.heldItem = BATTLE_TOWER_ITEM_ORAN_BERRY,
		.teamFlags = 0x01,
		.moves = {
			MOVE_POISONGAS,
			MOVE_MINIMIZE,
			MOVE_SLUDGE,
			MOVE_SCREECH
		},
		.evSpread = F_EV_SPREAD_HP,
		.nature = NATURE_CALM,
	},
	{
		.species = SPECIES_SANDSLASH,
		.heldItem = BATTLE_TOWER_ITEM_SOFT_SAND,
		.teamFlags = 0x03,
		.moves = {
			MOVE_SLASH,
			MOVE_SANDATTACK,
			MOVE_DEFENSECURL,
			MOVE_SWIFT
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_DOCILE,
	},
	{
		.species = SPECIES_SPINDA,
		.heldItem = BATTLE_TOWER_ITEM_SILK_SCARF,
		.teamFlags = 0x42,
		.moves = {
			MOVE_UPROAR,
			MOVE_WATERPULSE,
			MOVE_THRASH,
			MOVE_SAFEGUARD
		},
		.evSpread = F_EV_SPREAD_SPEED,
		.nature = NATURE_TIMID,
	},
	{
		.species = SPECIES_WHISCASH,
		.heldItem = BATTLE_TOWER_ITEM_CHESTO_BERRY,
		.teamFlags = 0x01,
		.moves = {
			MOVE_TICKLE,
			MOVE_MUDSPORT,
			MOVE_WATERGUN,
			MOVE_WATERSPORT
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_HASTY,
	},
	{
		.species = SPECIES_CACTURNE,
		.heldItem = BATTLE_TOWER_ITEM_POISON_BARB,
		.teamFlags = 0x01,
		.moves = {
			MOVE_POISONSTING,
			MOVE_PINMISSILE,
			MOVE_ABSORB,
			MOVE_COTTONSPORE
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
		.nature = NATURE_NAIVE,
	},
	{
		.species = SPECIES_JIGGLYPUFF,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0x42,
		.moves = {
			MOVE_SING,
			MOVE_ROLLOUT,
			MOVE_POUND,
			MOVE_LIGHTSCREEN
		},
		.evSpread = F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_MARILL,
		.heldItem = BATTLE_TOWER_ITEM_MYSTIC_WATER,
		.teamFlags = 0x42,
		.moves = {
			MOVE_BUBBLEBEAM,
			MOVE_DEFENSECURL,
			MOVE_RAINDANCE,
			MOVE_IRONTAIL
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_MAGNETON,
		.heldItem = BATTLE_TOWER_ITEM_RAWST_BERRY,
		.teamFlags = 0x01,
		.moves = {
			MOVE_THUNDERSHOCK,
			MOVE_SUPERSONIC,
			MOVE_FLASH,
			MOVE_SCREECH
		},
		.evSpread = F_EV_SPREAD_SPEED,
		.nature = NATURE_CAREFUL,
	},
	{
		.species = SPECIES_CARVANHA,
		.heldItem = BATTLE_TOWER_ITEM_KINGS_ROCK,
		.teamFlags = 0x01,
		.moves = {
			MOVE_BITE,
			MOVE_RAGE,
			MOVE_SCARYFACE,
			MOVE_LEER
		},
		.evSpread = F_EV_SPREAD_ATTACK,
		.nature = NATURE_QUIRKY,
	},
	{
		.species = SPECIES_KECLEON,
		.heldItem = BATTLE_TOWER_ITEM_PERSIM_BERRY,
		.teamFlags = 0x03,
		.moves = {
			MOVE_THIEF,
			MOVE_LICK,
			MOVE_BIND,
			MOVE_FURYSWIPES
		},
		.evSpread = F_EV_SPREAD_DEFENSE,
		.nature = NATURE_JOLLY,
	},
	{
		.species = SPECIES_NINETALES,
		.heldItem = BATTLE_TOWER_ITEM_CHARCOAL,
		.teamFlags = 0x02,
		.moves = {
			MOVE_EMBER,
			MOVE_CONFUSERAY,
			MOVE_FIRESPIN,
			MOVE_SAFEGUARD
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK,
		.nature = NATURE_LONELY,
	},
	{
		.species = SPECIES_RAICHU,
		.heldItem = BATTLE_TOWER_ITEM_PERSIM_BERRY,
		.teamFlags = 0x42,
		.moves = {
			MOVE_SHOCKWAVE,
			MOVE_GROWL,
			MOVE_DOUBLETEAM,
			MOVE_LIGHTSCREEN
		},
		.evSpread = F_EV_SPREAD_DEFENSE,
		.nature = NATURE_NAIVE,
	},
	{
		.species = SPECIES_SEALEO,
		.heldItem = BATTLE_TOWER_ITEM_NEVER_MELT_ICE,
		.teamFlags = 0x01,
		.moves = {
			MOVE_ICEBALL,
			MOVE_WATERGUN,
			MOVE_ENCORE,
			MOVE_HAIL
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
		.nature = NATURE_LAX,
	},
	{
		.species = SPECIES_GRAVELER,
		.heldItem = BATTLE_TOWER_ITEM_HARD_STONE,
		.teamFlags = 0x01,
		.moves = {
			MOVE_ROCKTHROW,
			MOVE_MUDSPORT,
			MOVE_SANDSTORM,
			MOVE_ROCKTOMB
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_SHUPPET,
		.heldItem = BATTLE_TOWER_ITEM_SPELL_TAG,
		.teamFlags = 0x03,
		.moves = {
			MOVE_NIGHTSHADE,
			MOVE_WILLOWISP,
			MOVE_SCREECH,
			MOVE_KNOCKOFF
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_LUVDISC,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x0A,
		.moves = {
			MOVE_ATTRACT,
			MOVE_FLAIL,
			MOVE_SWEETKISS,
			MOVE_WATERPULSE
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK,
		.nature = NATURE_ADAMANT,
	},
	{
		.species = SPECIES_LANTURN,
		.heldItem = BATTLE_TOWER_ITEM_CHERI_BERRY,
		.teamFlags = 0x0A,
		.moves = {
			MOVE_THUNDERWAVE,
			MOVE_SUPERSONIC,
			MOVE_WATERGUN,
			MOVE_SPARK
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_BOLD,
	},
	{
		.species = SPECIES_CORSOLA,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x0A,
		.moves = {
			MOVE_MIRRORCOAT,
			MOVE_BUBBLE,
			MOVE_HARDEN,
			MOVE_LIGHTSCREEN
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_TIMID,
	},
	{
		.species = SPECIES_WAILMER,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x05,
		.moves = {
			MOVE_SURF,
			MOVE_ROAR,
			MOVE_GROWL,
			MOVE_MIST
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_SASSY,
	},
	{
		.species = SPECIES_RHYDON,
		.heldItem = BATTLE_TOWER_ITEM_FOCUS_BAND,
		.teamFlags = 0x05,
		.moves = {
			MOVE_TAKEDOWN,
			MOVE_SCARYFACE,
			MOVE_TAILWHIP,
			MOVE_ROAR
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_DODRIO,
		.heldItem = BATTLE_TOWER_ITEM_SHARP_BEAK,
		.teamFlags = 0x05,
		.moves = {
			MOVE_FURYATTACK,
			MOVE_PURSUIT,
			MOVE_AERIALACE,
			MOVE_AGILITY
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_GOLDUCK,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0x05,
		.moves = {
			MOVE_FURYSWIPES,
			MOVE_TAILWHIP,
			MOVE_DISABLE,
			MOVE_PSYCHUP
		},
		.evSpread = F_EV_SPREAD_ATTACK,
		.nature = NATURE_RELAXED,
	},
	{
		.species = SPECIES_BELLOSSOM,
		.heldItem = BATTLE_TOWER_ITEM_MIRACLE_SEED,
		.teamFlags = 0x0A,
		.moves = {
			MOVE_GIGADRAIN,
			MOVE_POISONPOWDER,
			MOVE_STUNSPORE,
			MOVE_ACID
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK,
		.nature = NATURE_BOLD,
	},
	{
		.species = SPECIES_TROPIUS,
		.heldItem = BATTLE_TOWER_ITEM_KINGS_ROCK,
		.teamFlags = 0x05,
		.moves = {
			MOVE_STOMP,
			MOVE_RAZORLEAF,
			MOVE_GUST,
			MOVE_SYNTHESIS
		},
		.evSpread = F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_SABLEYE,
		.heldItem = BATTLE_TOWER_ITEM_SPELL_TAG,
		.teamFlags = 0x0A,
		.moves = {
			MOVE_NIGHTSHADE,
			MOVE_FAKEOUT,
			MOVE_PSYCHUP,
			MOVE_DETECT
		},
		.evSpread = F_EV_SPREAD_SPEED,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_ELECTRODE,
		.heldItem = BATTLE_TOWER_ITEM_FOCUS_BAND,
		.teamFlags = 0x03,
		.moves = {
			MOVE_SONICBOOM,
			MOVE_SCREECH,
			MOVE_SPARK,
			MOVE_SELFDESTRUCT
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_QUIRKY,
	},
	{
		.species = SPECIES_TENTACRUEL,
		.heldItem = BATTLE_TOWER_ITEM_POISON_BARB,
		.teamFlags = 0x01,
		.moves = {
			MOVE_ACID,
			MOVE_WATERPULSE,
			MOVE_BARRIER,
			MOVE_WRAP
		},
		.evSpread = F_EV_SPREAD_SPEED,
		.nature = NATURE_HASTY,
	},
	{
		.species = SPECIES_CLAYDOL,
		.heldItem = BATTLE_TOWER_ITEM_SOFT_SAND,
		.teamFlags = 0x05,
		.moves = {
			MOVE_ANCIENTPOWER,
			MOVE_MUDSLAP,
			MOVE_RAPIDSPIN,
			MOVE_CONFUSION
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_GRUMPIG,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x0A,
		.moves = {
			MOVE_PSYBEAM,
			MOVE_PSYCHUP,
			MOVE_BOUNCE,
			MOVE_MAGICCOAT
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_NAUGHTY,
	},
	{
		.species = SPECIES_CRAWDAUNT,
		.heldItem = BATTLE_TOWER_ITEM_MENTAL_HERB,
		.teamFlags = 0x05,
		.moves = {
			MOVE_CRABHAMMER,
			MOVE_BUBBLEBEAM,
			MOVE_BRICKBREAK,
			MOVE_PROTECT
		},
		.evSpread = F_EV_SPREAD_ATTACK,
		.nature = NATURE_CALM,
	},
	{
		.species = SPECIES_SEVIPER,
		.heldItem = BATTLE_TOWER_ITEM_POISON_BARB,
		.teamFlags = 0x01,
		.moves = {
			MOVE_POISONTAIL,
			MOVE_GLARE,
			MOVE_WRAP,
			MOVE_THIEF
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_CAREFUL,
	},
	{
		.species = SPECIES_ZANGOOSE,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x05,
		.moves = {
			MOVE_FURYCUTTER,
			MOVE_LEER,
			MOVE_QUICKATTACK,
			MOVE_DETECT
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_ALTARIA,
		.heldItem = BATTLE_TOWER_ITEM_DRAGON_FANG,
		.teamFlags = 0x03,
		.moves = {
			MOVE_DRAGONBREATH,
			MOVE_SING,
			MOVE_SAFEGUARD,
			MOVE_TAKEDOWN
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_ROSELIA,
		.heldItem = BATTLE_TOWER_ITEM_CHESTO_BERRY,
		.teamFlags = 0x0A,
		.moves = {
			MOVE_LEECHSEED,
			MOVE_MEGADRAIN,
			MOVE_GROWTH,
			MOVE_STUNSPORE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
		.nature = NATURE_NAUGHTY,
	},
	{
		.species = SPECIES_VOLBEAT,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0x09,
		.moves = {
			MOVE_SIGNALBEAM,
			MOVE_CONFUSERAY,
			MOVE_DOUBLETEAM,
			MOVE_LIGHTSCREEN
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_ILLUMISE,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x09,
		.moves = {
			MOVE_CHARM,
			MOVE_ENCORE,
			MOVE_SOLARBEAM,
			MOVE_ATTRACT
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_MANECTRIC,
		.heldItem = BATTLE_TOWER_ITEM_MAGNET,
		.teamFlags = 0x03,
		.moves = {
			MOVE_BITE,
			MOVE_HOWL,
			MOVE_THUNDERWAVE,
			MOVE_SPARK
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_SERIOUS,
	},
	{
		.species = SPECIES_MAWILE,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x0A,
		.moves = {
			MOVE_CRUNCH,
			MOVE_IRONDEFENSE,
			MOVE_TORMENT,
			MOVE_SANDSTORM
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_RASH,
	},
	{
		.species = SPECIES_HARIYAMA,
		.heldItem = BATTLE_TOWER_ITEM_KINGS_ROCK,
		.teamFlags = 0x05,
		.moves = {
			MOVE_ARMTHRUST,
			MOVE_FAKEOUT,
			MOVE_WHIRLWIND,
			MOVE_REVERSAL
		},
		.evSpread = F_EV_SPREAD_ATTACK,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_SKARMORY,
		.heldItem = BATTLE_TOWER_ITEM_METAL_COAT,
		.teamFlags = 0x01,
		.moves = {
			MOVE_STEELWING,
			MOVE_AGILITY,
			MOVE_TAUNT,
			MOVE_FLY
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_NAIVE,
	},
	{
		.species = SPECIES_TORKOAL,
		.heldItem = BATTLE_TOWER_ITEM_PECHA_BERRY,
		.teamFlags = 0x03,
		.moves = {
			MOVE_FIRESPIN,
			MOVE_SMOKESCREEN,
			MOVE_BODYSLAM,
			MOVE_AMNESIA
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_MILD,
	},
	{
		.species = SPECIES_GYARADOS,
		.heldItem = BATTLE_TOWER_ITEM_PERSIM_BERRY,
		.teamFlags = 0x05,
		.moves = {
			MOVE_THRASH,
			MOVE_DRAGONRAGE,
			MOVE_TWISTER,
			MOVE_HYDROPUMP
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_QUIRKY,
	},
	{
		.species = SPECIES_MIGHTYENA,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x05,
		.moves = {
			MOVE_CRUNCH,
			MOVE_HOWL,
			MOVE_IRONTAIL,
			MOVE_TORMENT
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK,
		.nature = NATURE_QUIRKY,
	},
	{
		.species = SPECIES_LINOONE,
		.heldItem = BATTLE_TOWER_ITEM_CHERI_BERRY,
		.teamFlags = 0x06,
		.moves = {
			MOVE_SLASH,
			MOVE_ATTRACT,
			MOVE_SHOCKWAVE,
			MOVE_TOXIC
		},
		.evSpread = F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_MASQUERAIN,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x0A,
		.moves = {
			MOVE_TOXIC,
			MOVE_STUNSPORE,
			MOVE_SUNNYDAY,
			MOVE_SOLARBEAM
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_LAX,
	},
	{
		.species = SPECIES_SCEPTILE,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x06,
		.moves = {
			MOVE_BULLETSEED,
			MOVE_SLAM,
			MOVE_SCREECH,
			MOVE_DETECT
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_RELAXED,
	},
	{
		.species = SPECIES_BLAZIKEN,
		.heldItem = BATTLE_TOWER_ITEM_KINGS_ROCK,
		.teamFlags = 0x06,
		.moves = {
			MOVE_DOUBLEKICK,
			MOVE_FLAMETHROWER,
			MOVE_DOUBLETEAM,
			MOVE_ROAR
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_SWAMPERT,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x49,
		.moves = {
			MOVE_SURF,
			MOVE_MUDSHOT,
			MOVE_MUDSPORT,
			MOVE_RAINDANCE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_SALAMENCE,
		.heldItem = BATTLE_TOWER_ITEM_DRAGON_FANG,
		.teamFlags = 0x49,
		.moves = {
			MOVE_DRAGONBREATH,
			MOVE_FLY,
			MOVE_TOXIC,
			MOVE_FACADE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_CALM,
	},
	{
		.species = SPECIES_KINGDRA,
		.heldItem = BATTLE_TOWER_ITEM_PERSIM_BERRY,
		.teamFlags = 0x49,
		.moves = {
			MOVE_SURF,
			MOVE_ICEBEAM,
			MOVE_SMOKESCREEN,
			MOVE_RAINDANCE
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_SERIOUS,
	},
	{
		.species = SPECIES_CORSOLA,
		.heldItem = BATTLE_TOWER_ITEM_PERSIM_BERRY,
		.teamFlags = 0x03,
		.moves = {
			MOVE_ANCIENTPOWER,
			MOVE_MIRRORCOAT,
			MOVE_SAFEGUARD,
			MOVE_REFLECT
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_BOLD,
	},
	{
		.species = SPECIES_RHYDON,
		.heldItem = BATTLE_TOWER_ITEM_FOCUS_BAND,
		.teamFlags = 0x41,
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_IRONTAIL,
			MOVE_ROAR,
			MOVE_THUNDERBOLT
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HASTY,
	},
	{
		.species = SPECIES_HERACROSS,
		.heldItem = BATTLE_TOWER_ITEM_KINGS_ROCK,
		.teamFlags = 0x06,
		.moves = {
			MOVE_MEGAHORN,
			MOVE_COUNTER,
			MOVE_PROTECT,
			MOVE_LEER
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_GIRAFARIG,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x09,
		.moves = {
			MOVE_PSYCHIC,
			MOVE_CRUNCH,
			MOVE_BATONPASS,
			MOVE_AGILITY
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_ADAMANT,
	},
	{
		.species = SPECIES_XATU,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x09,
		.moves = {
			MOVE_PSYCHIC,
			MOVE_FLY,
			MOVE_CONFUSERAY,
			MOVE_TOXIC
		},
		.evSpread = F_EV_SPREAD_SPEED,
		.nature = NATURE_BASHFUL,
	},
	{
		.species = SPECIES_DODRIO,
		.heldItem = BATTLE_TOWER_ITEM_SHARP_BEAK,
		.teamFlags = 0x03,
		.moves = {
			MOVE_DRILLPECK,
			MOVE_TRIATTACK,
			MOVE_PURSUIT,
			MOVE_TORMENT
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_SERIOUS,
	},
	{
		.species = SPECIES_VILEPLUME,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x89,
		.moves = {
			MOVE_POISONPOWDER,
			MOVE_STUNSPORE,
			MOVE_SLEEPPOWDER,
			MOVE_PETALDANCE
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_MODEST,
	},
	{
		.species = SPECIES_MEDICHAM,
		.heldItem = BATTLE_TOWER_ITEM_TWISTED_SPOON,
		.teamFlags = 0x06,
		.moves = {
			MOVE_FOCUSPUNCH,
			MOVE_LIGHTSCREEN,
			MOVE_BULKUP,
			MOVE_PSYCHIC
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_JOLLY,
	},
	{
		.species = SPECIES_ABSOL,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x06,
		.moves = {
			MOVE_SLASH,
			MOVE_SWORDSDANCE,
			MOVE_DOUBLETEAM,
			MOVE_ATTRACT
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_DUSCLOPS,
		.heldItem = BATTLE_TOWER_ITEM_SPELL_TAG,
		.teamFlags = 0x4B,
		.moves = {
			MOVE_CONFUSERAY,
			MOVE_WILLOWISP,
			MOVE_NIGHTSHADE,
			MOVE_DISABLE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_LAX,
	},
	{
		.species = SPECIES_SHUPPET,
		.heldItem = BATTLE_TOWER_ITEM_SPELL_TAG,
		.teamFlags = 0x43,
		.moves = {
			MOVE_GRUDGE,
			MOVE_SHADOWBALL,
			MOVE_CURSE,
			MOVE_KNOCKOFF
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK,
		.nature = NATURE_IMPISH,
	},
	{
		.species = SPECIES_CASTFORM,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x82,
		.moves = {
			MOVE_WEATHERBALL,
			MOVE_HAIL,
			MOVE_SUNNYDAY,
			MOVE_RAINDANCE
		},
		.evSpread = F_EV_SPREAD_SPEED,
		.nature = NATURE_MODEST,
	},
	{
		.species = SPECIES_MILOTIC,
		.heldItem = BATTLE_TOWER_ITEM_DRAGON_FANG,
		.teamFlags = 0x02,
		.moves = {
			MOVE_SURF,
			MOVE_REFRESH,
			MOVE_RECOVER,
			MOVE_RAINDANCE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
		.nature = NATURE_ADAMANT,
	},
	{
		.species = SPECIES_SHARPEDO,
		.heldItem = BATTLE_TOWER_ITEM_PERSIM_BERRY,
		.teamFlags = 0x01,
		.moves = {
			MOVE_CRUNCH,
			MOVE_FOCUSENERGY,
			MOVE_SCARYFACE,
			MOVE_SCREECH
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_LAX,
	},
	{
		.species = SPECIES_FLYGON,
		.heldItem = BATTLE_TOWER_ITEM_CHERI_BERRY,
		.teamFlags = 0x06,
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_SANDATTACK,
			MOVE_DRAGONBREATH,
			MOVE_SANDTOMB
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_NAUGHTY,
	},
	{
		.species = SPECIES_TRAPINCH,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x09,
		.moves = {
			MOVE_TOXIC,
			MOVE_SANDTOMB,
			MOVE_CRUNCH,
			MOVE_DOUBLETEAM
		},
		.evSpread = F_EV_SPREAD_ATTACK,
		.nature = NATURE_DOCILE,
	},
	{
		.species = SPECIES_LUNATONE,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0x43,
		.moves = {
			MOVE_PSYCHIC,
			MOVE_ROCKTHROW,
			MOVE_HYPNOSIS,
			MOVE_LIGHTSCREEN
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_SOLROCK,
		.heldItem = BATTLE_TOWER_ITEM_PECHA_BERRY,
		.teamFlags = 0x43,
		.moves = {
			MOVE_SOLARBEAM,
			MOVE_SUNNYDAY,
			MOVE_COSMICPOWER,
			MOVE_CALMMIND
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_BALTOY,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x43,
		.moves = {
			MOVE_PSYCHIC,
			MOVE_EARTHQUAKE,
			MOVE_REFLECT,
			MOVE_SELFDESTRUCT
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_BASHFUL,
	},
	{
		.species = SPECIES_CRAWDAUNT,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0x06,
		.moves = {
			MOVE_CRABHAMMER,
			MOVE_SURF,
			MOVE_PROTECT,
			MOVE_BRICKBREAK
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_RASH,
	},
	{
		.species = SPECIES_WHISCASH,
		.heldItem = BATTLE_TOWER_ITEM_ASPEAR_BERRY,
		.teamFlags = 0x06,
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_TICKLE,
			MOVE_AMNESIA,
			MOVE_SURF
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_SEVIPER,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x09,
		.moves = {
			MOVE_POISONTAIL,
			MOVE_CRUNCH,
			MOVE_GIGADRAIN,
			MOVE_HAZE
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
		.nature = NATURE_RELAXED,
	},
	{
		.species = SPECIES_MAGCARGO,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0x89,
		.moves = {
			MOVE_FLAMETHROWER,
			MOVE_LIGHTSCREEN,
			MOVE_AMNESIA,
			MOVE_ROCKSLIDE
		},
		.evSpread = F_EV_SPREAD_ATTACK,
		.nature = NATURE_SASSY,
	},
	{
		.species = SPECIES_MACHAMP,
		.heldItem = BATTLE_TOWER_ITEM_BLACK_BELT,
		.teamFlags = 0x09,
		.moves = {
			MOVE_KARATECHOP,
			MOVE_SEISMICTOSS,
			MOVE_BRICKBREAK,
			MOVE_LOWKICK
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_SWALOT,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x86,
		.moves = {
			MOVE_YAWN,
			MOVE_WATERPULSE,
			MOVE_SHADOWBALL,
			MOVE_SLUDGEBOMB
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_NAUGHTY,
	},
	{
		.species = SPECIES_SCEPTILE,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x0C,
		.moves = {
			MOVE_LEAFBLADE,
			MOVE_GIGADRAIN,
			MOVE_FURYCUTTER,
			MOVE_DETECT
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_NAIVE,
	},
	{
		.species = SPECIES_BLAZIKEN,
		.heldItem = BATTLE_TOWER_ITEM_SCOPE_LENS,
		.teamFlags = 0x0C,
		.moves = {
			MOVE_BLAZEKICK,
			MOVE_FLAMETHROWER,
			MOVE_PROTECT,
			MOVE_QUICKATTACK
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_DOCILE,
	},
	{
		.species = SPECIES_SWAMPERT,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0x4C,
		.moves = {
			MOVE_SURF,
			MOVE_MUDSHOT,
			MOVE_MUDSLAP,
			MOVE_DOUBLETEAM
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_MIGHTYENA,
		.heldItem = BATTLE_TOWER_ITEM_BLACK_GLASSES,
		.teamFlags = 0x04,
		.moves = {
			MOVE_CRUNCH,
			MOVE_HOWL,
			MOVE_SWAGGER,
			MOVE_SHADOWBALL
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_CALM,
	},
	{
		.species = SPECIES_LINOONE,
		.heldItem = BATTLE_TOWER_ITEM_CHESTO_BERRY,
		.teamFlags = 0x04,
		.moves = {
			MOVE_SLASH,
			MOVE_REST,
			MOVE_BELLYDRUM,
			MOVE_THUNDERBOLT
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_MILD,
	},
	{
		.species = SPECIES_BEAUTIFLY,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x08,
		.moves = {
			MOVE_GIGADRAIN,
			MOVE_ATTRACT,
			MOVE_MORNINGSUN,
			MOVE_STUNSPORE
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HASTY,
	},
	{
		.species = SPECIES_DUSTOX,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x08,
		.moves = {
			MOVE_PSYCHIC,
			MOVE_SILVERWIND,
			MOVE_MOONLIGHT,
			MOVE_TOXIC
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_CAREFUL,
	},
	{
		.species = SPECIES_LUDICOLO,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x0C,
		.moves = {
			MOVE_FAKEOUT,
			MOVE_HYDROPUMP,
			MOVE_ICEBEAM,
			MOVE_UPROAR
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_SHIFTRY,
		.heldItem = BATTLE_TOWER_ITEM_PERSIM_BERRY,
		.teamFlags = 0x0C,
		.moves = {
			MOVE_FRUSTRATION,
			MOVE_GIGADRAIN,
			MOVE_TORMENT,
			MOVE_SWAGGER
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_RELAXED,
	},
	{
		.species = SPECIES_SWELLOW,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x88,
		.moves = {
			MOVE_FLY,
			MOVE_ENDEAVOR,
			MOVE_AERIALACE,
			MOVE_TOXIC
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_GARDEVOIR,
		.heldItem = BATTLE_TOWER_ITEM_BLACK_GLASSES,
		.teamFlags = 0x4A,
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_DREAMEATER,
			MOVE_PSYCHIC,
			MOVE_DOUBLETEAM
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_CAREFUL,
	},
	{
		.species = SPECIES_BRELOOM,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0x0C,
		.moves = {
			MOVE_DYNAMICPUNCH,
			MOVE_MINDREADER,
			MOVE_SNATCH,
			MOVE_MEGADRAIN
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_ADAMANT,
	},
	{
		.species = SPECIES_VIGOROTH,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0x04,
		.moves = {
			MOVE_SLASH,
			MOVE_UPROAR,
			MOVE_ENCORE,
			MOVE_FACADE
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_CALM,
	},
	{
		.species = SPECIES_NINJASK,
		.heldItem = BATTLE_TOWER_ITEM_SILVER_POWDER,
		.teamFlags = 0x04,
		.moves = {
			MOVE_FURYCUTTER,
			MOVE_GIGADRAIN,
			MOVE_SWORDSDANCE,
			MOVE_DOUBLETEAM
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_SASSY,
	},
	{
		.species = SPECIES_SHEDINJA,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0xCA,
		.moves = {
			MOVE_CONFUSERAY,
			MOVE_SOLARBEAM,
			MOVE_SUNNYDAY,
			MOVE_GRUDGE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_JOLLY,
	},
	{
		.species = SPECIES_LOUDRED,
		.heldItem = BATTLE_TOWER_ITEM_PECHA_BERRY,
		.teamFlags = 0x04,
		.moves = {
			MOVE_HYPERVOICE,
			MOVE_HOWL,
			MOVE_SHADOWBALL,
			MOVE_TORMENT
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_HARIYAMA,
		.heldItem = BATTLE_TOWER_ITEM_KINGS_ROCK,
		.teamFlags = 0x04,
		.moves = {
			MOVE_ARMTHRUST,
			MOVE_BULKUP,
			MOVE_BRICKBREAK,
			MOVE_HIDDENPOWER
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_BASHFUL,
	},
	{
		.species = SPECIES_ALAKAZAM,
		.heldItem = BATTLE_TOWER_ITEM_TWISTED_SPOON,
		.teamFlags = 0x88,
		.moves = {
			MOVE_PSYCHIC,
			MOVE_SHADOWBALL,
			MOVE_FUTURESIGHT,
			MOVE_DISABLE
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_CROBAT,
		.heldItem = BATTLE_TOWER_ITEM_CHERI_BERRY,
		.teamFlags = 0x88,
		.moves = {
			MOVE_CONFUSERAY,
			MOVE_TOXIC,
			MOVE_MEANLOOK,
			MOVE_SNATCH
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_MAWILE,
		.heldItem = BATTLE_TOWER_ITEM_METAL_COAT,
		.teamFlags = 0x04,
		.moves = {
			MOVE_CRUNCH,
			MOVE_IRONDEFENSE,
			MOVE_FAKETEARS,
			MOVE_POISONFANG
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
		.nature = NATURE_NAIVE,
	},
	{
		.species = SPECIES_AGGRON,
		.heldItem = BATTLE_TOWER_ITEM_METAL_COAT,
		.teamFlags = 0x45,
		.moves = {
			MOVE_METALCLAW,
			MOVE_FLAMETHROWER,
			MOVE_METALSOUND,
			MOVE_ICEBEAM
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_GOLEM,
		.heldItem = BATTLE_TOWER_ITEM_SOFT_SAND,
		.teamFlags = 0xC5,
		.moves = {
			MOVE_ROLLOUT,
			MOVE_DEFENSECURL,
			MOVE_DOUBLETEAM,
			MOVE_SELFDESTRUCT
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_MANECTRIC,
		.heldItem = BATTLE_TOWER_ITEM_MAGNET,
		.teamFlags = 0x04,
		.moves = {
			MOVE_THUNDER,
			MOVE_RAINDANCE,
			MOVE_THUNDERWAVE,
			MOVE_CHARGE
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_CAREFUL,
	},
	{
		.species = SPECIES_VOLBEAT,
		.heldItem = BATTLE_TOWER_ITEM_SILVER_POWDER,
		.teamFlags = 0x08,
		.moves = {
			MOVE_CONFUSERAY,
			MOVE_SIGNALBEAM,
			MOVE_MOONLIGHT,
			MOVE_TAILGLOW
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_DOCILE,
	},
	{
		.species = SPECIES_ILLUMISE,
		.heldItem = BATTLE_TOWER_ITEM_SILVER_POWDER,
		.teamFlags = 0x08,
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_FLATTER,
			MOVE_WISH,
			MOVE_ENCORE
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_MASQUERAIN,
		.heldItem = BATTLE_TOWER_ITEM_PERSIM_BERRY,
		.teamFlags = 0x88,
		.moves = {
			MOVE_GIGADRAIN,
			MOVE_SILVERWIND,
			MOVE_STUNSPORE,
			MOVE_TOXIC
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
		.nature = NATURE_NAIVE,
	},
	{
		.species = SPECIES_ROSELIA,
		.heldItem = BATTLE_TOWER_ITEM_MIRACLE_SEED,
		.teamFlags = 0x08,
		.moves = {
			MOVE_PETALDANCE,
			MOVE_GROWTH,
			MOVE_SYNTHESIS,
			MOVE_GRASSWHISTLE
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_IMPISH,
	},
	{
		.species = SPECIES_DELCATTY,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x08,
		.moves = {
			MOVE_SING,
			MOVE_ATTRACT,
			MOVE_DOUBLESLAP,
			MOVE_HEALBELL
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_TIMID,
	},
	{
		.species = SPECIES_SEAKING,
		.heldItem = BATTLE_TOWER_ITEM_MYSTIC_WATER,
		.teamFlags = 0x88,
		.moves = {
			MOVE_RAINDANCE,
			MOVE_SURF,
			MOVE_ATTRACT,
			MOVE_ICEBEAM
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
		.nature = NATURE_BRAVE,
	},
	{
		.species = SPECIES_GYARADOS,
		.heldItem = BATTLE_TOWER_ITEM_DRAGON_FANG,
		.teamFlags = 0x8C,
		.moves = {
			MOVE_HYDROPUMP,
			MOVE_EARTHQUAKE,
			MOVE_DRAGONRAGE,
			MOVE_PROTECT
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_CALM,
	},
	{
		.species = SPECIES_SWALOT,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x42,
		.moves = {
			MOVE_STOCKPILE,
			MOVE_SWALLOW,
			MOVE_SPITUP,
			MOVE_YAWN
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_NAUGHTY,
	},
	{
		.species = SPECIES_MAGCARGO,
		.heldItem = BATTLE_TOWER_ITEM_ASPEAR_BERRY,
		.teamFlags = 0x41,
		.moves = {
			MOVE_ROCKSLIDE,
			MOVE_FIREBLAST,
			MOVE_BODYSLAM,
			MOVE_LIGHTSCREEN
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_LONELY,
	},
	{
		.species = SPECIES_MUK,
		.heldItem = BATTLE_TOWER_ITEM_POISON_BARB,
		.teamFlags = 0xC3,
		.moves = {
			MOVE_SLUDGEBOMB,
			MOVE_FLAMETHROWER,
			MOVE_ACIDARMOR,
			MOVE_DISABLE
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_NAIVE,
	},
	{
		.species = SPECIES_SPINDA,
		.heldItem = BATTLE_TOWER_ITEM_SILK_SCARF,
		.teamFlags = 0x42,
		.moves = {
			MOVE_DIZZYPUNCH,
			MOVE_TEETERDANCE,
			MOVE_PSYCHUP,
			MOVE_FACADE
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_MODEST,
	},
	{
		.species = SPECIES_ALTARIA,
		.heldItem = BATTLE_TOWER_ITEM_DRAGON_FANG,
		.teamFlags = 0x03,
		.moves = {
			MOVE_DRAGONCLAW,
			MOVE_DRAGONBREATH,
			MOVE_DRAGONDANCE,
			MOVE_REFRESH
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_RASH,
	},
	{
		.species = SPECIES_ZANGOOSE,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x03,
		.moves = {
			MOVE_CRUSHCLAW,
			MOVE_TAUNT,
			MOVE_SWORDSDANCE,
			MOVE_DETECT
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_QUIRKY,
	},
	{
		.species = SPECIES_SEVIPER,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x41,
		.moves = {
			MOVE_SWAGGER,
			MOVE_TAUNT,
			MOVE_GLARE,
			MOVE_POISONTAIL
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_CAREFUL,
	},
	{
		.species = SPECIES_GRUMPIG,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x42,
		.moves = {
			MOVE_TOXIC,
			MOVE_BOUNCE,
			MOVE_CONFUSERAY,
			MOVE_ATTRACT
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_BRAVE,
	},
	{
		.species = SPECIES_CACTURNE,
		.heldItem = BATTLE_TOWER_ITEM_MIRACLE_SEED,
		.teamFlags = 0x41,
		.moves = {
			MOVE_NEEDLEARM,
			MOVE_INGRAIN,
			MOVE_SPIKES,
			MOVE_COTTONSPORE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_SASSY,
	},
	{
		.species = SPECIES_CLAYDOL,
		.heldItem = BATTLE_TOWER_ITEM_CHESTO_BERRY,
		.teamFlags = 0x03,
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_SANDSTORM,
			MOVE_COSMICPOWER,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_LAX,
	},
	{
		.species = SPECIES_TENTACRUEL,
		.heldItem = BATTLE_TOWER_ITEM_MENTAL_HERB,
		.teamFlags = 0xC1,
		.moves = {
			MOVE_SLUDGEBOMB,
			MOVE_HYDROPUMP,
			MOVE_BARRIER,
			MOVE_SUPERSONIC
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_WIGGLYTUFF,
		.heldItem = BATTLE_TOWER_ITEM_RAWST_BERRY,
		.teamFlags = 0xC3,
		.moves = {
			MOVE_SING,
			MOVE_FOCUSPUNCH,
			MOVE_DISABLE,
			MOVE_FACADE
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_ADAMANT,
	},
	{
		.species = SPECIES_AZUMARILL,
		.heldItem = BATTLE_TOWER_ITEM_CHERI_BERRY,
		.teamFlags = 0xC2,
		.moves = {
			MOVE_SURF,
			MOVE_ATTRACT,
			MOVE_DEFENSECURL,
			MOVE_ROLLOUT
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_RASH,
	},
	{
		.species = SPECIES_ELECTRODE,
		.heldItem = BATTLE_TOWER_ITEM_CHERI_BERRY,
		.teamFlags = 0xC3,
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_MIRRORCOAT,
			MOVE_LIGHTSCREEN,
			MOVE_SELFDESTRUCT
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_MILOTIC,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0x42,
		.moves = {
			MOVE_HYDROPUMP,
			MOVE_ATTRACT,
			MOVE_RECOVER,
			MOVE_REFRESH
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_JOLLY,
	},
	{
		.species = SPECIES_KECLEON,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x43,
		.moves = {
			MOVE_SKILLSWAP,
			MOVE_ANCIENTPOWER,
			MOVE_WATERPULSE,
			MOVE_THUNDERBOLT
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_NAUGHTY,
	},
	{
		.species = SPECIES_DUSCLOPS,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x43,
		.moves = {
			MOVE_CONFUSERAY,
			MOVE_CURSE,
			MOVE_REST,
			MOVE_MEANLOOK
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_BASHFUL,
	},
	{
		.species = SPECIES_ABSOL,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x41,
		.moves = {
			MOVE_SLASH,
			MOVE_SWORDSDANCE,
			MOVE_DOUBLETEAM,
			MOVE_SNATCH
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_DOCILE,
	},
	{
		.species = SPECIES_NINETALES,
		.heldItem = BATTLE_TOWER_ITEM_APICOT_BERRY,
		.teamFlags = 0xC2,
		.moves = {
			MOVE_FLAMETHROWER,
			MOVE_CONFUSERAY,
			MOVE_DOUBLETEAM,
			MOVE_WILLOWISP
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_TIMID,
	},
	{
		.species = SPECIES_PIKACHU,
		.heldItem = BATTLE_TOWER_ITEM_LIGHT_BALL,
		.teamFlags = 0xC2,
		.moves = {
			MOVE_THUNDERWAVE,
			MOVE_THUNDER,
			MOVE_RAINDANCE,
			MOVE_ATTRACT
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_HASTY,
	},
	{
		.species = SPECIES_VILEPLUME,
		.heldItem = BATTLE_TOWER_ITEM_ASPEAR_BERRY,
		.teamFlags = 0xC3,
		.moves = {
			MOVE_GIGADRAIN,
			MOVE_SLEEPPOWDER,
			MOVE_MOONLIGHT,
			MOVE_SLUDGEBOMB
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_DONPHAN,
		.heldItem = BATTLE_TOWER_ITEM_PERSIM_BERRY,
		.teamFlags = 0x41,
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_DOUBLEEDGE,
			MOVE_IRONTAIL,
			MOVE_FISSURE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_QUIRKY,
	},
	{
		.species = SPECIES_STARMIE,
		.heldItem = BATTLE_TOWER_ITEM_CHERI_BERRY,
		.teamFlags = 0xC3,
		.moves = {
			MOVE_CONFUSERAY,
			MOVE_ICEBEAM,
			MOVE_RECOVER,
			MOVE_DOUBLETEAM
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_HASTY,
	},
	{
		.species = SPECIES_WALREIN,
		.heldItem = BATTLE_TOWER_ITEM_NEVER_MELT_ICE,
		.teamFlags = 0x43,
		.moves = {
			MOVE_ICEBEAM,
			MOVE_BODYSLAM,
			MOVE_ENCORE,
			MOVE_HAIL
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_LAX,
	},
	{
		.species = SPECIES_RELICANTH,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x41,
		.moves = {
			MOVE_YAWN,
			MOVE_MUDSPORT,
			MOVE_DOUBLEEDGE,
			MOVE_SANDSTORM
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_LONELY,
	},
	{
		.species = SPECIES_KINGDRA,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0x43,
		.moves = {
			MOVE_RAINDANCE,
			MOVE_ICEBEAM,
			MOVE_HYDROPUMP,
			MOVE_AGILITY
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_CRADILY,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x43,
		.moves = {
			MOVE_CONFUSERAY,
			MOVE_INGRAIN,
			MOVE_ANCIENTPOWER,
			MOVE_GIGADRAIN
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_MILD,
	},
	{
		.species = SPECIES_ARMALDO,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x43,
		.moves = {
			MOVE_SLASH,
			MOVE_ROCKSLIDE,
			MOVE_EARTHQUAKE,
			MOVE_WATERPULSE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_NAIVE,
	},
	{
		.species = SPECIES_METAGROSS,
		.heldItem = BATTLE_TOWER_ITEM_METAL_COAT,
		.teamFlags = 0x41,
		.moves = {
			MOVE_METALCLAW,
			MOVE_PSYCHIC,
			MOVE_LIGHTSCREEN,
			MOVE_AGILITY
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_SALAMENCE,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x42,
		.moves = {
			MOVE_DRAGONBREATH,
			MOVE_CRUNCH,
			MOVE_FLAMETHROWER,
			MOVE_AERIALACE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_HASTY,
	},
	{
		.species = SPECIES_MIGHTYENA,
		.heldItem = BATTLE_TOWER_ITEM_LIECHI_BERRY,
		.teamFlags = 0x01,
		.moves = {
			MOVE_CRUNCH,
			MOVE_YAWN,
			MOVE_FACADE,
			MOVE_HOWL
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_LINOONE,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x02,
		.moves = {
			MOVE_HYPERBEAM,
			MOVE_FACADE,
			MOVE_ATTRACT,
			MOVE_TRICK
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_LUDICOLO,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x03,
		.moves = {
			MOVE_SURF,
			MOVE_FOCUSPUNCH,
			MOVE_FAKEOUT,
			MOVE_SYNTHESIS
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_TIMID,
	},
	{
		.species = SPECIES_EXPLOUD,
		.heldItem = BATTLE_TOWER_ITEM_LIECHI_BERRY,
		.teamFlags = 0x01,
		.moves = {
			MOVE_UPROAR,
			MOVE_EARTHQUAKE,
			MOVE_ICEBEAM,
			MOVE_FLAMETHROWER
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
		.nature = NATURE_DOCILE,
	},
	{
		.species = SPECIES_SWELLOW,
		.heldItem = BATTLE_TOWER_ITEM_LANSAT_BERRY,
		.teamFlags = 0x02,
		.moves = {
			MOVE_FACADE,
			MOVE_SUPERSONIC,
			MOVE_WINGATTACK,
			MOVE_ENDEAVOR
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_NAIVE,
	},
	{
		.species = SPECIES_PELIPPER,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0x82,
		.moves = {
			MOVE_STOCKPILE,
			MOVE_SWALLOW,
			MOVE_SPITUP,
			MOVE_ATTRACT
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_BRELOOM,
		.heldItem = BATTLE_TOWER_ITEM_FOCUS_BAND,
		.teamFlags = 0x01,
		.moves = {
			MOVE_DYNAMICPUNCH,
			MOVE_COUNTER,
			MOVE_BULKUP,
			MOVE_MINDREADER
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_SHEDINJA,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x01,
		.moves = {
			MOVE_RETURN,
			MOVE_DOUBLETEAM,
			MOVE_TOXIC,
			MOVE_SHADOWBALL
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_EXPLOUD,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x01,
		.moves = {
			MOVE_HYPERBEAM,
			MOVE_SUPERSONIC,
			MOVE_FLAMETHROWER,
			MOVE_ICEBEAM
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_HARIYAMA,
		.heldItem = BATTLE_TOWER_ITEM_SCOPE_LENS,
		.teamFlags = 0x01,
		.moves = {
			MOVE_CROSSCHOP,
			MOVE_COUNTER,
			MOVE_FACADE,
			MOVE_FAKEOUT
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_ALAKAZAM,
		.heldItem = BATTLE_TOWER_ITEM_PETAYA_BERRY,
		.teamFlags = 0x83,
		.moves = {
			MOVE_PSYCHIC,
			MOVE_ENCORE,
			MOVE_DISABLE,
			MOVE_RECOVER
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_CROBAT,
		.heldItem = BATTLE_TOWER_ITEM_SCOPE_LENS,
		.teamFlags = 0x81,
		.moves = {
			MOVE_CONFUSERAY,
			MOVE_AIRCUTTER,
			MOVE_TORMENT,
			MOVE_DOUBLETEAM
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_SABLEYE,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x83,
		.moves = {
			MOVE_TOXIC,
			MOVE_DETECT,
			MOVE_RECOVER,
			MOVE_TORMENT
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_RELAXED,
	},
	{
		.species = SPECIES_MAWILE,
		.heldItem = BATTLE_TOWER_ITEM_CHESTO_BERRY,
		.teamFlags = 0x02,
		.moves = {
			MOVE_CRUNCH,
			MOVE_SWORDSDANCE,
			MOVE_IRONDEFENSE,
			MOVE_REST
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_AGGRON,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x01,
		.moves = {
			MOVE_DOUBLEEDGE,
			MOVE_IRONDEFENSE,
			MOVE_ROAR,
			MOVE_EARTHQUAKE
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_GOLEM,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x01,
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCKSLIDE,
			MOVE_FLAMETHROWER,
			MOVE_FACADE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_NOSEPASS,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x81,
		.moves = {
			MOVE_THUNDERWAVE,
			MOVE_ROCKSLIDE,
			MOVE_TORMENT,
			MOVE_ATTRACT
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_NAIVE,
	},
	{
		.species = SPECIES_MANECTRIC,
		.heldItem = BATTLE_TOWER_ITEM_PETAYA_BERRY,
		.teamFlags = 0x02,
		.moves = {
			MOVE_THUNDER,
			MOVE_CRUNCH,
			MOVE_THUNDERWAVE,
			MOVE_QUICKATTACK
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_JOLLY,
	},
	{
		.species = SPECIES_ROSELIA,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x82,
		.moves = {
			MOVE_GRASSWHISTLE,
			MOVE_LEECHSEED,
			MOVE_GIGADRAIN,
			MOVE_GROWTH
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_DELCATTY,
		.heldItem = BATTLE_TOWER_ITEM_STARF_BERRY,
		.teamFlags = 0x02,
		.moves = {
			MOVE_ASSIST,
			MOVE_SING,
			MOVE_ATTRACT,
			MOVE_SUBSTITUTE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_DOCILE,
	},
	{
		.species = SPECIES_TROPIUS,
		.heldItem = BATTLE_TOWER_ITEM_SCOPE_LENS,
		.teamFlags = 0xC2,
		.moves = {
			MOVE_RAZORLEAF,
			MOVE_EARTHQUAKE,
			MOVE_ATTRACT,
			MOVE_SYNTHESIS
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
		.nature = NATURE_JOLLY,
	},
	{
		.species = SPECIES_SWALOT,
		.heldItem = BATTLE_TOWER_ITEM_LIECHI_BERRY,
		.teamFlags = 0x03,
		.moves = {
			MOVE_YAWN,
			MOVE_SLUDGEBOMB,
			MOVE_ATTRACT,
			MOVE_ICEBEAM
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_MACHAMP,
		.heldItem = BATTLE_TOWER_ITEM_BLACK_BELT,
		.teamFlags = 0x01,
		.moves = {
			MOVE_CROSSCHOP,
			MOVE_BULKUP,
			MOVE_LOWKICK,
			MOVE_BRICKBREAK
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_BASHFUL,
	},
	{
		.species = SPECIES_CAMERUPT,
		.heldItem = BATTLE_TOWER_ITEM_SITRUS_BERRY,
		.teamFlags = 0x40,
		.moves = {
			MOVE_ERUPTION,
			MOVE_EARTHQUAKE,
			MOVE_ROCKSLIDE,
			MOVE_OVERHEAT
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_NAIVE,
	},
	{
		.species = SPECIES_MAGCARGO,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0x03,
		.moves = {
			MOVE_FLAMETHROWER,
			MOVE_ROCKSLIDE,
			MOVE_EARTHQUAKE,
			MOVE_REFLECT
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_WEEZING,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x81,
		.moves = {
			MOVE_WILLOWISP,
			MOVE_HYPERBEAM,
			MOVE_THUNDERBOLT,
			MOVE_DESTINYBOND
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_LAX,
	},
	{
		.species = SPECIES_SPINDA,
		.heldItem = BATTLE_TOWER_ITEM_CHOICE_BAND,
		.teamFlags = 0x82,
		.moves = {
			MOVE_TRICK,
			MOVE_TEETERDANCE,
			MOVE_FOCUSPUNCH,
			MOVE_FACADE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_TIMID,
	},
	{
		.species = SPECIES_SKARMORY,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x01,
		.moves = {
			MOVE_DRILLPECK,
			MOVE_STEELWING,
			MOVE_TORMENT,
			MOVE_PROTECT
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_ALTARIA,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0x02,
		.moves = {
			MOVE_SING,
			MOVE_DRAGONCLAW,
			MOVE_ICEBEAM,
			MOVE_EARTHQUAKE
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_GRUMPIG,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x82,
		.moves = {
			MOVE_PSYCHIC,
			MOVE_CONFUSERAY,
			MOVE_CALMMIND,
			MOVE_REST
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_SHIFTRY,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0x20,
		.moves = {
			MOVE_SWAGGER,
			MOVE_FRUSTRATION,
			MOVE_ATTRACT,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_CLAYDOL,
		.heldItem = BATTLE_TOWER_ITEM_LIECHI_BERRY,
		.teamFlags = 0x20,
		.moves = {
			MOVE_COSMICPOWER,
			MOVE_PSYCHIC,
			MOVE_EARTHQUAKE,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
		.nature = NATURE_RELAXED,
	},
	{
		.species = SPECIES_HARIYAMA,
		.heldItem = BATTLE_TOWER_ITEM_CHESTO_BERRY,
		.teamFlags = 0x33,
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_COUNTER,
			MOVE_BELLYDRUM,
			MOVE_REST
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_SASSY,
	},
	{
		.species = SPECIES_NOSEPASS,
		.heldItem = BATTLE_TOWER_ITEM_LIECHI_BERRY,
		.teamFlags = 0x20,
		.moves = {
			MOVE_ROCKSLIDE,
			MOVE_THUNDERWAVE,
			MOVE_EARTHQUAKE,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_LAX,
	},
	{
		.species = SPECIES_DUSCLOPS,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x33,
		.moves = {
			MOVE_SHADOWPUNCH,
			MOVE_WILLOWISP,
			MOVE_CONFUSERAY,
			MOVE_DESTINYBOND
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_SASSY,
	},
	{
		.species = SPECIES_SEAKING,
		.heldItem = BATTLE_TOWER_ITEM_LEPPA_BERRY,
		.teamFlags = 0x20,
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
		.teamFlags = 0x73,
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ERUPTION,
			MOVE_ROCKSLIDE,
			MOVE_FISSURE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_NAIVE,
	},
	{
		.species = SPECIES_LANTURN,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x13,
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_THUNDERWAVE,
			MOVE_CONFUSERAY
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_WEEZING,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x33,
		.moves = {
			MOVE_SLUDGEBOMB,
			MOVE_THUNDERBOLT,
			MOVE_FIREBLAST,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_WHISCASH,
		.heldItem = BATTLE_TOWER_ITEM_LEPPA_BERRY,
		.teamFlags = 0x20,
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_SURF,
			MOVE_SPARK,
			MOVE_FISSURE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_RELAXED,
	},
	{
		.species = SPECIES_AGGRON,
		.heldItem = BATTLE_TOWER_ITEM_LIECHI_BERRY,
		.teamFlags = 0x51,
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
		.species = SPECIES_KECLEON,
		.heldItem = BATTLE_TOWER_ITEM_CHOICE_BAND,
		.teamFlags = 0x12,
		.moves = {
			MOVE_TRICK,
			MOVE_FOCUSPUNCH,
			MOVE_ATTRACT,
			MOVE_SNATCH
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_MILD,
	},
	{
		.species = SPECIES_SHARPEDO,
		.heldItem = BATTLE_TOWER_ITEM_KINGS_ROCK,
		.teamFlags = 0x11,
		.moves = {
			MOVE_CRUNCH,
			MOVE_DOUBLEEDGE,
			MOVE_SURF,
			MOVE_SWAGGER
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_ABSOL,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x12,
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
		.teamFlags = 0x72,
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
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x20,
		.moves = {
			MOVE_HYDROPUMP,
			MOVE_SLUDGEBOMB,
			MOVE_BARRIER,
			MOVE_MIRRORCOAT
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_JOLLY,
	},
	{
		.species = SPECIES_SABLEYE,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x32,
		.moves = {
			MOVE_SHADOWBALL,
			MOVE_TOXIC,
			MOVE_RECOVER,
			MOVE_DOUBLETEAM
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_WOBBUFFET,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x20,
		.moves = {
			MOVE_ENCORE,
			MOVE_COUNTER,
			MOVE_MIRRORCOAT,
			MOVE_DESTINYBOND
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_MILD,
	},
	{
		.species = SPECIES_RHYDON,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0x71,
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_MEGAHORN,
			MOVE_BRICKBREAK,
			MOVE_HORNDRILL
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_GLALIE,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x31,
		.moves = {
			MOVE_CRUNCH,
			MOVE_BLIZZARD,
			MOVE_HAIL,
			MOVE_SHEERCOLD
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_BASHFUL,
	},
	{
		.species = SPECIES_SCEPTILE,
		.heldItem = BATTLE_TOWER_ITEM_SCOPE_LENS,
		.teamFlags = 0x8C,
		.moves = {
			MOVE_LEAFBLADE,
			MOVE_EARTHQUAKE,
			MOVE_DRAGONCLAW,
			MOVE_CRUNCH
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_BLAZIKEN,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x8C,
		.moves = {
			MOVE_BLAZEKICK,
			MOVE_COUNTER,
			MOVE_ENDURE,
			MOVE_REVERSAL
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_DOCILE,
	},
	{
		.species = SPECIES_SWAMPERT,
		.heldItem = BATTLE_TOWER_ITEM_SHELL_BELL,
		.teamFlags = 0x8C,
		.moves = {
			MOVE_SURF,
			MOVE_EARTHQUAKE,
			MOVE_MIRRORCOAT,
			MOVE_BLIZZARD
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_CAREFUL,
	},
	{
		.species = SPECIES_GARDEVOIR,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x1A,
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDERBOLT,
			MOVE_DESTINYBOND,
			MOVE_SNATCH
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_BRAVE,
	},
	{
		.species = SPECIES_BRELOOM,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x15,
		.moves = {
			MOVE_SPORE,
			MOVE_FOCUSPUNCH,
			MOVE_MACHPUNCH,
			MOVE_ATTRACT
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_ALAKAZAM,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0x58,
		.moves = {
			MOVE_PSYCHIC,
			MOVE_FIREPUNCH,
			MOVE_ICEPUNCH,
			MOVE_RECOVER
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_HASTY,
	},
	{
		.species = SPECIES_HARIYAMA,
		.heldItem = BATTLE_TOWER_ITEM_SCOPE_LENS,
		.teamFlags = 0x15,
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
		.species = SPECIES_GYARADOS,
		.heldItem = BATTLE_TOWER_ITEM_SHELL_BELL,
		.teamFlags = 0x55,
		.moves = {
			MOVE_HYPERBEAM,
			MOVE_EARTHQUAKE,
			MOVE_SURF,
			MOVE_ICEBEAM
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_BOLD,
	},
	{
		.species = SPECIES_CROBAT,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0x58,
		.moves = {
			MOVE_SLUDGEBOMB,
			MOVE_CONFUSERAY,
			MOVE_AIRCUTTER,
			MOVE_DOUBLETEAM
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_MACHAMP,
		.heldItem = BATTLE_TOWER_ITEM_SCOPE_LENS,
		.teamFlags = 0x5D,
		.moves = {
			MOVE_CROSSCHOP,
			MOVE_FLAMETHROWER,
			MOVE_EARTHQUAKE,
			MOVE_ROCKSLIDE
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_MANECTRIC,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x1A,
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDERWAVE,
			MOVE_ROAR,
			MOVE_CRUNCH
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_ELECTRODE,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x60,
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_PROTECT,
			MOVE_MIRRORCOAT,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_BASHFUL,
	},
	{
		.species = SPECIES_MUK,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0x64,
		.moves = {
			MOVE_SLUDGEBOMB,
			MOVE_FLAMETHROWER,
			MOVE_THUNDERBOLT,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_FLYGON,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x1C,
		.moves = {
			MOVE_DRAGONCLAW,
			MOVE_EARTHQUAKE,
			MOVE_FLAMETHROWER,
			MOVE_CRUNCH
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_TIMID,
	},
	{
		.species = SPECIES_STARMIE,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x5C,
		.moves = {
			MOVE_SURF,
			MOVE_THUNDERBOLT,
			MOVE_RECOVER,
			MOVE_CONFUSERAY
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_NINETALES,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x4A,
		.moves = {
			MOVE_CONFUSERAY,
			MOVE_TOXIC,
			MOVE_FIRESPIN,
			MOVE_HEATWAVE
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_RAICHU,
		.heldItem = BATTLE_TOWER_ITEM_FOCUS_BAND,
		.teamFlags = 0x5A,
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDERWAVE,
			MOVE_REVERSAL,
			MOVE_IRONTAIL
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_TIMID,
	},
	{
		.species = SPECIES_GOLDUCK,
		.heldItem = BATTLE_TOWER_ITEM_LIECHI_BERRY,
		.teamFlags = 0x55,
		.moves = {
			MOVE_SURF,
			MOVE_CROSSCHOP,
			MOVE_ICEBEAM,
			MOVE_DIG
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
		.nature = NATURE_JOLLY,
	},
	{
		.species = SPECIES_HERACROSS,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x5D,
		.moves = {
			MOVE_MEGAHORN,
			MOVE_EARTHQUAKE,
			MOVE_ENDURE,
			MOVE_REVERSAL
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_WALREIN,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0x26,
		.moves = {
			MOVE_SURF,
			MOVE_ICEBEAM,
			MOVE_EARTHQUAKE,
			MOVE_SHEERCOLD
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_CAREFUL,
	},
	{
		.species = SPECIES_KINGDRA,
		.heldItem = BATTLE_TOWER_ITEM_CHESTO_BERRY,
		.teamFlags = 0x5B,
		.moves = {
			MOVE_SURF,
			MOVE_ICEBEAM,
			MOVE_DRAGONBREATH,
			MOVE_REST
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_SALAMENCE,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x0D,
		.moves = {
			MOVE_DRAGONCLAW,
			MOVE_EARTHQUAKE,
			MOVE_CRUNCH,
			MOVE_FIREBLAST
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_NAUGHTY,
	},
	{
		.species = SPECIES_METAGROSS,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x3D,
		.moves = {
			MOVE_METEORMASH,
			MOVE_PSYCHIC,
			MOVE_EARTHQUAKE,
			MOVE_ROCKTOMB
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_REGIROCK,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0x3C,
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ANCIENTPOWER,
			MOVE_THUNDERBOLT,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_REGICE,
		.heldItem = BATTLE_TOWER_ITEM_LAX_INCENSE,
		.teamFlags = 0x3C,
		.moves = {
			MOVE_ICEBEAM,
			MOVE_THUNDERBOLT,
			MOVE_EARTHQUAKE,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_CAREFUL,
	},
	{
		.species = SPECIES_REGISTEEL,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0x3C,
		.moves = {
			MOVE_METALCLAW,
			MOVE_EARTHQUAKE,
			MOVE_THUNDERBOLT,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_LATIAS,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x0E,
		.moves = {
			MOVE_MISTBALL,
			MOVE_THUNDERBOLT,
			MOVE_RECOVER,
			MOVE_DRAGONCLAW
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_LATIOS,
		.heldItem = BATTLE_TOWER_ITEM_PETAYA_BERRY,
		.teamFlags = 0x0D,
		.moves = {
			MOVE_LUSTERPURGE,
			MOVE_THUNDERBOLT,
			MOVE_RECOVER,
			MOVE_DRAGONCLAW
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_MILOTIC,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x1A,
		.moves = {
			MOVE_SURF,
			MOVE_TOXIC,
			MOVE_RECOVER,
			MOVE_MIRRORCOAT
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_BRAVE,
	},
	{
		.species = SPECIES_SLAKING,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x15,
		.moves = {
			MOVE_YAWN,
			MOVE_FOCUSPUNCH,
			MOVE_COUNTER,
			MOVE_SLACKOFF
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_DOCILE,
	},
	{
		.species = SPECIES_SCEPTILE,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x8C,
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
		.heldItem = BATTLE_TOWER_ITEM_SCOPE_LENS,
		.teamFlags = 0x8C,
		.moves = {
			MOVE_BLAZEKICK,
			MOVE_EARTHQUAKE,
			MOVE_ROCKSLIDE,
			MOVE_QUICKATTACK
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_DOCILE,
	},
	{
		.species = SPECIES_SWAMPERT,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x8C,
		.moves = {
			MOVE_MUDDYWATER,
			MOVE_MUDSHOT,
			MOVE_MIRRORCOAT,
			MOVE_ICEBEAM
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
		.nature = NATURE_CAREFUL,
	},
	{
		.species = SPECIES_GARDEVOIR,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x0A,
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDERBOLT,
			MOVE_HYPNOSIS,
			MOVE_DREAMEATER
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_RELAXED,
	},
	{
		.species = SPECIES_BRELOOM,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x05,
		.moves = {
			MOVE_SPORE,
			MOVE_COUNTER,
			MOVE_SKYUPPERCUT,
			MOVE_GIGADRAIN
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_DOCILE,
	},
	{
		.species = SPECIES_ALAKAZAM,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0x58,
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDERPUNCH,
			MOVE_FIREPUNCH,
			MOVE_RECOVER
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_HASTY,
	},
	{
		.species = SPECIES_HARIYAMA,
		.heldItem = BATTLE_TOWER_ITEM_FOCUS_BAND,
		.teamFlags = 0x04,
		.moves = {
			MOVE_CROSSCHOP,
			MOVE_COUNTER,
			MOVE_ENDURE,
			MOVE_REVERSAL
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_GYARADOS,
		.heldItem = BATTLE_TOWER_ITEM_SHELL_BELL,
		.teamFlags = 0x44,
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
		.teamFlags = 0x48,
		.moves = {
			MOVE_TOXIC,
			MOVE_CONFUSERAY,
			MOVE_ATTRACT,
			MOVE_FLY
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_MACHAMP,
		.heldItem = BATTLE_TOWER_ITEM_SCOPE_LENS,
		.teamFlags = 0x5D,
		.moves = {
			MOVE_CROSSCHOP,
			MOVE_COUNTER,
			MOVE_EARTHQUAKE,
			MOVE_FACADE
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_MANECTRIC,
		.heldItem = BATTLE_TOWER_ITEM_PETAYA_BERRY,
		.teamFlags = 0x0A,
		.moves = {
			MOVE_THUNDER,
			MOVE_THUNDERWAVE,
			MOVE_QUICKATTACK,
			MOVE_CRUNCH
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_ELECTRODE,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x60,
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_LIGHTSCREEN,
			MOVE_MIRRORCOAT,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_BASHFUL,
	},
	{
		.species = SPECIES_MUK,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0x64,
		.moves = {
			MOVE_SLUDGEBOMB,
			MOVE_GIGADRAIN,
			MOVE_FLAMETHROWER,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_FLYGON,
		.heldItem = BATTLE_TOWER_ITEM_SHELL_BELL,
		.teamFlags = 0x1C,
		.moves = {
			MOVE_DRAGONCLAW,
			MOVE_EARTHQUAKE,
			MOVE_IRONTAIL,
			MOVE_CRUNCH
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_TIMID,
	},
	{
		.species = SPECIES_STARMIE,
		.heldItem = BATTLE_TOWER_ITEM_APICOT_BERRY,
		.teamFlags = 0x5C,
		.moves = {
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_RECOVER
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_DODRIO,
		.heldItem = BATTLE_TOWER_ITEM_LIECHI_BERRY,
		.teamFlags = 0x5A,
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
		.heldItem = BATTLE_TOWER_ITEM_PETAYA_BERRY,
		.teamFlags = 0x4A,
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDERWAVE,
			MOVE_ATTRACT,
			MOVE_FOCUSPUNCH
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_TIMID,
	},
	{
		.species = SPECIES_GOLDUCK,
		.heldItem = BATTLE_TOWER_ITEM_PETAYA_BERRY,
		.teamFlags = 0x45,
		.moves = {
			MOVE_HYDROPUMP,
			MOVE_CROSSCHOP,
			MOVE_BLIZZARD,
			MOVE_ATTRACT
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_HERACROSS,
		.heldItem = BATTLE_TOWER_ITEM_LIECHI_BERRY,
		.teamFlags = 0x5D,
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
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x26,
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_ROCKSLIDE,
			MOVE_SHEERCOLD
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_CAREFUL,
	},
	{
		.species = SPECIES_KINGDRA,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x5C,
		.moves = {
			MOVE_HYDROPUMP,
			MOVE_ICEBEAM,
			MOVE_DRAGONBREATH,
			MOVE_ATTRACT
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_SALAMENCE,
		.heldItem = BATTLE_TOWER_ITEM_KINGS_ROCK,
		.teamFlags = 0x1D,
		.moves = {
			MOVE_DRAGONCLAW,
			MOVE_EARTHQUAKE,
			MOVE_CRUNCH,
			MOVE_ROCKTOMB
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_RELAXED,
	},
	{
		.species = SPECIES_METAGROSS,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0x3D,
		.moves = {
			MOVE_METEORMASH,
			MOVE_PSYCHIC,
			MOVE_EARTHQUAKE,
			MOVE_SHADOWBALL
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_REGIROCK,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0x3C,
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_THUNDERBOLT,
			MOVE_FOCUSPUNCH,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_REGICE,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0x3C,
		.moves = {
			MOVE_ICEBEAM,
			MOVE_THUNDERBOLT,
			MOVE_HAIL,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_CAREFUL,
	},
	{
		.species = SPECIES_REGISTEEL,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x3C,
		.moves = {
			MOVE_METALCLAW,
			MOVE_EARTHQUAKE,
			MOVE_ANCIENTPOWER,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_LATIAS,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0x1E,
		.moves = {
			MOVE_MISTBALL,
			MOVE_ICEBEAM,
			MOVE_RECOVER,
			MOVE_DRAGONCLAW
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_LATIOS,
		.heldItem = BATTLE_TOWER_ITEM_LAX_INCENSE,
		.teamFlags = 0x1D,
		.moves = {
			MOVE_LUSTERPURGE,
			MOVE_ICEBEAM,
			MOVE_RECOVER,
			MOVE_DRAGONCLAW
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_MILOTIC,
		.heldItem = BATTLE_TOWER_ITEM_PETAYA_BERRY,
		.teamFlags = 0x1A,
		.moves = {
			MOVE_HYDROPUMP,
			MOVE_ICEBEAM,
			MOVE_RECOVER,
			MOVE_MIRRORCOAT
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_BRAVE,
	},
	{
		.species = SPECIES_SLAKING,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x15,
		.moves = {
			MOVE_YAWN,
			MOVE_FOCUSPUNCH,
			MOVE_COUNTER,
			MOVE_PURSUIT
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_DOCILE,
	},
	{
		.species = SPECIES_SCEPTILE,
		.heldItem = BATTLE_TOWER_ITEM_PETAYA_BERRY,
		.teamFlags = 0x8C,
		.moves = {
			MOVE_LEAFBLADE,
			MOVE_ROCKTOMB,
			MOVE_DRAGONCLAW,
			MOVE_CRUNCH
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_BLAZIKEN,
		.heldItem = BATTLE_TOWER_ITEM_GANLON_BERRY,
		.teamFlags = 0x8C,
		.moves = {
			MOVE_FOCUSPUNCH,
			MOVE_COUNTER,
			MOVE_SWAGGER,
			MOVE_ROCKTOMB
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_SWAMPERT,
		.heldItem = BATTLE_TOWER_ITEM_SHELL_BELL,
		.teamFlags = 0x8C,
		.moves = {
			MOVE_SURF,
			MOVE_ICEBEAM,
			MOVE_ATTRACT,
			MOVE_REST
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_CAREFUL,
	},
	{
		.species = SPECIES_GARDEVOIR,
		.heldItem = BATTLE_TOWER_ITEM_LAX_INCENSE,
		.teamFlags = 0x0A,
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDERBOLT,
			MOVE_ATTRACT,
			MOVE_WILLOWISP
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_BRELOOM,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x05,
		.moves = {
			MOVE_SPORE,
			MOVE_FOCUSPUNCH,
			MOVE_MACHPUNCH,
			MOVE_COUNTER
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_ALAKAZAM,
		.heldItem = BATTLE_TOWER_ITEM_CHOICE_BAND,
		.teamFlags = 0x58,
		.moves = {
			MOVE_PSYCHIC,
			MOVE_TRICK,
			MOVE_RECOVER,
			MOVE_SNATCH
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_HASTY,
	},
	{
		.species = SPECIES_HARIYAMA,
		.heldItem = BATTLE_TOWER_ITEM_FOCUS_BAND,
		.teamFlags = 0x05,
		.moves = {
			MOVE_REVENGE,
			MOVE_COUNTER,
			MOVE_FOCUSPUNCH,
			MOVE_REVERSAL
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_LUDICOLO,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x0A,
		.moves = {
			MOVE_RAINDANCE,
			MOVE_LEECHSEED,
			MOVE_GIGADRAIN,
			MOVE_DIVE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_CROBAT,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0x48,
		.moves = {
			MOVE_SLUDGEBOMB,
			MOVE_CONFUSERAY,
			MOVE_SHADOWBALL,
			MOVE_SNATCH
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_MACHAMP,
		.heldItem = BATTLE_TOWER_ITEM_SCOPE_LENS,
		.teamFlags = 0x5D,
		.moves = {
			MOVE_CROSSCHOP,
			MOVE_FIREBLAST,
			MOVE_LOWKICK,
			MOVE_ROCKTOMB
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_MANECTRIC,
		.heldItem = BATTLE_TOWER_ITEM_LUM_BERRY,
		.teamFlags = 0x08,
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDERWAVE,
			MOVE_ATTRACT,
			MOVE_CRUNCH
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_ELECTRODE,
		.heldItem = BATTLE_TOWER_ITEM_LIECHI_BERRY,
		.teamFlags = 0x60,
		.moves = {
			MOVE_THUNDER,
			MOVE_SWIFT,
			MOVE_MIRRORCOAT,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_BASHFUL,
	},
	{
		.species = SPECIES_MUK,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x64,
		.moves = {
			MOVE_SLUDGEBOMB,
			MOVE_FLAMETHROWER,
			MOVE_THUNDERBOLT,
			MOVE_SHADOWPUNCH
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_FLYGON,
		.heldItem = BATTLE_TOWER_ITEM_LAX_INCENSE,
		.teamFlags = 0x0C,
		.moves = {
			MOVE_DRAGONCLAW,
			MOVE_EARTHQUAKE,
			MOVE_FIREBLAST,
			MOVE_SANDSTORM
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_TIMID,
	},
	{
		.species = SPECIES_STARMIE,
		.heldItem = BATTLE_TOWER_ITEM_PETAYA_BERRY,
		.teamFlags = 0x4C,
		.moves = {
			MOVE_SURF,
			MOVE_THUNDERBOLT,
			MOVE_ICEBEAM,
			MOVE_PSYCHIC
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_LUDICOLO,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x4A,
		.moves = {
			MOVE_LEECHSEED,
			MOVE_ATTRACT,
			MOVE_DOUBLETEAM,
			MOVE_PROTECT
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_SKARMORY,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x4B,
		.moves = {
			MOVE_DRILLPECK,
			MOVE_STEELWING,
			MOVE_ATTRACT,
			MOVE_PURSUIT
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED,
		.nature = NATURE_SASSY,
	},
	{
		.species = SPECIES_GOLDUCK,
		.heldItem = BATTLE_TOWER_ITEM_SCOPE_LENS,
		.teamFlags = 0x49,
		.moves = {
			MOVE_SURF,
			MOVE_PSYCHIC,
			MOVE_ICEBEAM,
			MOVE_CROSSCHOP
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_JOLLY,
	},
	{
		.species = SPECIES_HERACROSS,
		.heldItem = BATTLE_TOWER_ITEM_QUICK_CLAW,
		.teamFlags = 0x5D,
		.moves = {
			MOVE_MEGAHORN,
			MOVE_EARTHQUAKE,
			MOVE_FOCUSPUNCH,
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
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_KINGDRA,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x5C,
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_HYPERBEAM,
			MOVE_FLAIL
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_BRAVE,
	},
	{
		.species = SPECIES_SALAMENCE,
		.heldItem = BATTLE_TOWER_ITEM_PETAYA_BERRY,
		.teamFlags = 0x1D,
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
		.teamFlags = 0x3D,
		.moves = {
			MOVE_METEORMASH,
			MOVE_PSYCHIC,
			MOVE_EARTHQUAKE,
			MOVE_HYPERBEAM
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_REGIROCK,
		.heldItem = BATTLE_TOWER_ITEM_SALAC_BERRY,
		.teamFlags = 0x3C,
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_THUNDERBOLT,
			MOVE_SUPERPOWER,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_REGICE,
		.heldItem = BATTLE_TOWER_ITEM_LAX_INCENSE,
		.teamFlags = 0x3C,
		.moves = {
			MOVE_ICEBEAM,
			MOVE_THUNDERBOLT,
			MOVE_ANCIENTPOWER,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
		.nature = NATURE_CAREFUL,
	},
	{
		.species = SPECIES_REGISTEEL,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x3C,
		.moves = {
			MOVE_METALCLAW,
			MOVE_THUNDERBOLT,
			MOVE_HYPERBEAM,
			MOVE_EXPLOSION
		},
		.evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_GENTLE,
	},
	{
		.species = SPECIES_LATIAS,
		.heldItem = BATTLE_TOWER_ITEM_APICOT_BERRY,
		.teamFlags = 0x1E,
		.moves = {
			MOVE_MISTBALL,
			MOVE_THUNDERBOLT,
			MOVE_EARTHQUAKE,
			MOVE_ICEBEAM
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_LATIOS,
		.heldItem = BATTLE_TOWER_ITEM_GANLON_BERRY,
		.teamFlags = 0x1D,
		.moves = {
			MOVE_LUSTERPURGE,
			MOVE_THUNDERBOLT,
			MOVE_EARTHQUAKE,
			MOVE_ICEBEAM
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_MILOTIC,
		.heldItem = BATTLE_TOWER_ITEM_APICOT_BERRY,
		.teamFlags = 0x1A,
		.moves = {
			MOVE_SURF,
			MOVE_ICEBEAM,
			MOVE_RECOVER,
			MOVE_ATTRACT
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_BRAVE,
	},
	{
		.species = SPECIES_ALTARIA,
		.heldItem = BATTLE_TOWER_ITEM_GANLON_BERRY,
		.teamFlags = 0x0A,
		.moves = {
			MOVE_DRAGONCLAW,
			MOVE_ICEBEAM,
			MOVE_SING,
			MOVE_FLAMETHROWER
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_SCEPTILE,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0x9C,
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
		.teamFlags = 0x9C,
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
		.teamFlags = 0x9C,
		.moves = {
			MOVE_SURF,
			MOVE_EARTHQUAKE,
			MOVE_ICEBEAM,
			MOVE_ROCKTOMB
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_SHEDINJA,
		.heldItem = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
		.teamFlags = 0x20,
		.moves = {
			MOVE_CONFUSERAY,
			MOVE_SHADOWBALL,
			MOVE_TOXIC,
			MOVE_GRUDGE
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
	{
		.species = SPECIES_METAGROSS,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x1D,
		.moves = {
			MOVE_METEORMASH,
			MOVE_EARTHQUAKE,
			MOVE_DOUBLETEAM,
			MOVE_PROTECT
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
		.nature = NATURE_NAIVE,
	},
	{
		.species = SPECIES_ALAKAZAM,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x58,
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDERPUNCH,
			MOVE_ICEPUNCH,
			MOVE_FIREPUNCH
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_HASTY,
	},
	{
		.species = SPECIES_LATIAS,
		.heldItem = BATTLE_TOWER_ITEM_LEFTOVERS,
		.teamFlags = 0x1E,
		.moves = {
			MOVE_MISTBALL,
			MOVE_THUNDERBOLT,
			MOVE_ICEBEAM,
			MOVE_DRAGONCLAW
		},
		.evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
		.nature = NATURE_QUIET,
	},
	{
		.species = SPECIES_LATIOS,
		.heldItem = BATTLE_TOWER_ITEM_SHELL_BELL,
		.teamFlags = 0x1D,
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
		.species = SPECIES_SALAMENCE,
		.heldItem = BATTLE_TOWER_ITEM_SHELL_BELL,
		.teamFlags = 0x1D,
		.moves = {
			MOVE_DRAGONCLAW,
			MOVE_FLAMETHROWER,
			MOVE_EARTHQUAKE,
			MOVE_AERIALACE
		},
		.evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
		.nature = NATURE_RELAXED,
	},
	{
		.species = SPECIES_MACHAMP,
		.heldItem = BATTLE_TOWER_ITEM_LIECHI_BERRY,
		.teamFlags = 0x5D,
		.moves = {
			MOVE_CROSSCHOP,
			MOVE_EARTHQUAKE,
			MOVE_LOWKICK,
			MOVE_ROCKSLIDE
		},
		.evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
		.nature = NATURE_HARDY,
	},
};
