static const u16 sTutorMoves[TUTOR_MOVE_COUNT] =
{
    [TUTOR_MOVE_MEGAPUNCH] = MOVE_MEGAPUNCH,
    [TUTOR_MOVE_SWORDSDANCE] = MOVE_SWORDSDANCE,
    [TUTOR_MOVE_MEGAKICK] = MOVE_MEGAKICK,
    [TUTOR_MOVE_BODYSLAM] = MOVE_BODYSLAM,
    [TUTOR_MOVE_DOUBLEEDGE] = MOVE_DOUBLEEDGE,
    [TUTOR_MOVE_COUNTER] = MOVE_COUNTER,
    [TUTOR_MOVE_SEISMICTOSS] = MOVE_SEISMICTOSS,
    [TUTOR_MOVE_MIMIC] = MOVE_MIMIC,
    [TUTOR_MOVE_METRONOME] = MOVE_METRONOME,
    [TUTOR_MOVE_SOFTBOILED] = MOVE_SOFTBOILED,
    [TUTOR_MOVE_DREAMEATER] = MOVE_DREAMEATER,
    [TUTOR_MOVE_THUNDERWAVE] = MOVE_THUNDERWAVE,
    [TUTOR_MOVE_EXPLOSION] = MOVE_EXPLOSION,
    [TUTOR_MOVE_ROCKSLIDE] = MOVE_ROCKSLIDE,
    [TUTOR_MOVE_SUBSTITUTE] = MOVE_SUBSTITUTE,
};

#define TUTOR(move) (1 << (TUTOR_##move))

static const u16 sTutorLearnsets[] =
{
    [SPECIES_NONE] = 0,

    [SPECIES_BULBASAUR] = TUTOR(MOVE_SWORDSDANCE)
                        | TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_IVYSAUR] = TUTOR(MOVE_SWORDSDANCE)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VENUSAUR] = TUTOR(MOVE_SWORDSDANCE)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CHARMANDER] = TUTOR(MOVE_MEGAPUNCH)
                         | TUTOR(MOVE_SWORDSDANCE)
                         | TUTOR(MOVE_MEGAKICK)
                         | TUTOR(MOVE_BODYSLAM)
                         | TUTOR(MOVE_DOUBLEEDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMICTOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_ROCKSLIDE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CHARMELEON] = TUTOR(MOVE_MEGAPUNCH)
                         | TUTOR(MOVE_SWORDSDANCE)
                         | TUTOR(MOVE_MEGAKICK)
                         | TUTOR(MOVE_BODYSLAM)
                         | TUTOR(MOVE_DOUBLEEDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMICTOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_ROCKSLIDE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CHARIZARD] = TUTOR(MOVE_MEGAPUNCH)
                        | TUTOR(MOVE_SWORDSDANCE)
                        | TUTOR(MOVE_MEGAKICK)
                        | TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMICTOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCKSLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SQUIRTLE] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WARTORTLE] = TUTOR(MOVE_MEGAPUNCH)
                        | TUTOR(MOVE_MEGAKICK)
                        | TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMICTOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BLASTOISE] = TUTOR(MOVE_MEGAPUNCH)
                        | TUTOR(MOVE_MEGAKICK)
                        | TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMICTOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CATERPIE] = 0,

    [SPECIES_METAPOD] = 0,

    [SPECIES_BUTTERFREE] = TUTOR(MOVE_DOUBLEEDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_DREAMEATER)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WEEDLE] = 0,

    [SPECIES_KAKUNA] = 0,

    [SPECIES_BEEDRILL] = TUTOR(MOVE_SWORDSDANCE)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PIDGEY] = TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PIDGEOTTO] = TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PIDGEOT] = TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RATTATA] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDERWAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RATICATE] = TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDERWAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SPEAROW] = TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FEAROW] = TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_EKANS] = TUTOR(MOVE_BODYSLAM)
                    | TUTOR(MOVE_DOUBLEEDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_ROCKSLIDE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ARBOK] = TUTOR(MOVE_BODYSLAM)
                    | TUTOR(MOVE_DOUBLEEDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_ROCKSLIDE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PIKACHU] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDERWAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RAICHU] = TUTOR(MOVE_MEGAPUNCH)
                     | TUTOR(MOVE_MEGAKICK)
                     | TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMICTOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDERWAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SANDSHREW] = TUTOR(MOVE_SWORDSDANCE)
                        | TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMICTOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCKSLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SANDSLASH] = TUTOR(MOVE_SWORDSDANCE)
                        | TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMICTOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCKSLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NIDORAN_F] = TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NIDORINA] = TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NIDOQUEEN] = TUTOR(MOVE_MEGAPUNCH)
                        | TUTOR(MOVE_MEGAKICK)
                        | TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMICTOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCKSLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NIDORAN_M] = TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NIDORINO] = TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NIDOKING] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCKSLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CLEFAIRY] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_SOFTBOILED)
                       | TUTOR(MOVE_DREAMEATER)
                       | TUTOR(MOVE_THUNDERWAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CLEFABLE] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_SOFTBOILED)
                       | TUTOR(MOVE_DREAMEATER)
                       | TUTOR(MOVE_THUNDERWAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VULPIX] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NINETALES] = TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_JIGGLYPUFF] = TUTOR(MOVE_MEGAPUNCH)
                         | TUTOR(MOVE_MEGAKICK)
                         | TUTOR(MOVE_BODYSLAM)
                         | TUTOR(MOVE_DOUBLEEDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMICTOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_DREAMEATER)
                         | TUTOR(MOVE_THUNDERWAVE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WIGGLYTUFF] = TUTOR(MOVE_MEGAPUNCH)
                         | TUTOR(MOVE_MEGAKICK)
                         | TUTOR(MOVE_BODYSLAM)
                         | TUTOR(MOVE_DOUBLEEDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMICTOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_DREAMEATER)
                         | TUTOR(MOVE_THUNDERWAVE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ZUBAT] = TUTOR(MOVE_DOUBLEEDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GOLBAT] = TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ODDISH] = TUTOR(MOVE_SWORDSDANCE)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GLOOM] = TUTOR(MOVE_SWORDSDANCE)
                    | TUTOR(MOVE_DOUBLEEDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VILEPLUME] = TUTOR(MOVE_SWORDSDANCE)
                        | TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PARAS] = TUTOR(MOVE_SWORDSDANCE)
                    | TUTOR(MOVE_BODYSLAM)
                    | TUTOR(MOVE_DOUBLEEDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PARASECT] = TUTOR(MOVE_SWORDSDANCE)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VENONAT] = TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VENOMOTH] = TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DIGLETT] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DUGTRIO] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MEOWTH] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAMEATER)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PERSIAN] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAMEATER)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PSYDUCK] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GOLDUCK] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MANKEY] = TUTOR(MOVE_MEGAPUNCH)
                     | TUTOR(MOVE_MEGAKICK)
                     | TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMICTOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_ROCKSLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PRIMEAPE] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_ROCKSLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GROWLITHE] = TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ARCANINE] = TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_POLIWAG] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_POLIWHIRL] = TUTOR(MOVE_MEGAPUNCH)
                        | TUTOR(MOVE_MEGAKICK)
                        | TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMICTOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_METRONOME)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_POLIWRATH] = TUTOR(MOVE_MEGAPUNCH)
                        | TUTOR(MOVE_MEGAKICK)
                        | TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMICTOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_METRONOME)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ABRA] = TUTOR(MOVE_MEGAPUNCH)
                   | TUTOR(MOVE_MEGAKICK)
                   | TUTOR(MOVE_BODYSLAM)
                   | TUTOR(MOVE_DOUBLEEDGE)
                   | TUTOR(MOVE_COUNTER)
                   | TUTOR(MOVE_SEISMICTOSS)
                   | TUTOR(MOVE_MIMIC)
                   | TUTOR(MOVE_METRONOME)
                   | TUTOR(MOVE_DREAMEATER)
                   | TUTOR(MOVE_THUNDERWAVE)
                   | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KADABRA] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_DREAMEATER)
                      | TUTOR(MOVE_THUNDERWAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ALAKAZAM] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_DREAMEATER)
                       | TUTOR(MOVE_THUNDERWAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MACHOP] = TUTOR(MOVE_MEGAPUNCH)
                     | TUTOR(MOVE_MEGAKICK)
                     | TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMICTOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_ROCKSLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MACHOKE] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MACHAMP] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BELLSPROUT] = TUTOR(MOVE_SWORDSDANCE)
                         | TUTOR(MOVE_DOUBLEEDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WEEPINBELL] = TUTOR(MOVE_SWORDSDANCE)
                         | TUTOR(MOVE_DOUBLEEDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VICTREEBEL] = TUTOR(MOVE_SWORDSDANCE)
                         | TUTOR(MOVE_BODYSLAM)
                         | TUTOR(MOVE_DOUBLEEDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TENTACOOL] = TUTOR(MOVE_SWORDSDANCE)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TENTACRUEL] = TUTOR(MOVE_SWORDSDANCE)
                         | TUTOR(MOVE_DOUBLEEDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GEODUDE] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GRAVELER] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_ROCKSLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GOLEM] = TUTOR(MOVE_MEGAPUNCH)
                    | TUTOR(MOVE_MEGAKICK)
                    | TUTOR(MOVE_BODYSLAM)
                    | TUTOR(MOVE_DOUBLEEDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_SEISMICTOSS)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_METRONOME)
                    | TUTOR(MOVE_EXPLOSION)
                    | TUTOR(MOVE_ROCKSLIDE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PONYTA] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RAPIDASH] = TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SLOWPOKE] = TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAMEATER)
                       | TUTOR(MOVE_THUNDERWAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SLOWBRO] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAMEATER)
                      | TUTOR(MOVE_THUNDERWAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAGNEMITE] = TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDERWAVE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAGNETON] = TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDERWAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FARFETCHD] = TUTOR(MOVE_SWORDSDANCE)
                        | TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DODUO] = TUTOR(MOVE_BODYSLAM)
                    | TUTOR(MOVE_DOUBLEEDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DODRIO] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SEEL] = TUTOR(MOVE_BODYSLAM)
                   | TUTOR(MOVE_DOUBLEEDGE)
                   | TUTOR(MOVE_MIMIC)
                   | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DEWGONG] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GRIMER] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MUK] = TUTOR(MOVE_BODYSLAM)
                  | TUTOR(MOVE_MIMIC)
                  | TUTOR(MOVE_EXPLOSION)
                  | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHELLDER] = TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CLOYSTER] = TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GASTLY] = TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAMEATER)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HAUNTER] = TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAMEATER)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GENGAR] = TUTOR(MOVE_MEGAPUNCH)
                     | TUTOR(MOVE_MEGAKICK)
                     | TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMICTOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_DREAMEATER)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ONIX] = TUTOR(MOVE_BODYSLAM)
                   | TUTOR(MOVE_DOUBLEEDGE)
                   | TUTOR(MOVE_MIMIC)
                   | TUTOR(MOVE_EXPLOSION)
                   | TUTOR(MOVE_ROCKSLIDE)
                   | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DROWZEE] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_DREAMEATER)
                      | TUTOR(MOVE_THUNDERWAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HYPNO] = TUTOR(MOVE_MEGAPUNCH)
                    | TUTOR(MOVE_MEGAKICK)
                    | TUTOR(MOVE_BODYSLAM)
                    | TUTOR(MOVE_DOUBLEEDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_SEISMICTOSS)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_METRONOME)
                    | TUTOR(MOVE_DREAMEATER)
                    | TUTOR(MOVE_THUNDERWAVE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KRABBY] = TUTOR(MOVE_SWORDSDANCE)
                     | TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KINGLER] = TUTOR(MOVE_SWORDSDANCE)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VOLTORB] = TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDERWAVE)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ELECTRODE] = TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDERWAVE)
                        | TUTOR(MOVE_EXPLOSION)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_EXEGGCUTE] = TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_DREAMEATER)
                        | TUTOR(MOVE_EXPLOSION)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_EXEGGUTOR] = TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_DREAMEATER)
                        | TUTOR(MOVE_EXPLOSION)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CUBONE] = TUTOR(MOVE_MEGAPUNCH)
                     | TUTOR(MOVE_SWORDSDANCE)
                     | TUTOR(MOVE_MEGAKICK)
                     | TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMICTOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCKSLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAROWAK] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_SWORDSDANCE)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HITMONLEE] = TUTOR(MOVE_MEGAPUNCH)
                        | TUTOR(MOVE_MEGAKICK)
                        | TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMICTOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_METRONOME)
                        | TUTOR(MOVE_ROCKSLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HITMONCHAN] = TUTOR(MOVE_MEGAPUNCH)
                         | TUTOR(MOVE_MEGAKICK)
                         | TUTOR(MOVE_BODYSLAM)
                         | TUTOR(MOVE_DOUBLEEDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMICTOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_METRONOME)
                         | TUTOR(MOVE_ROCKSLIDE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LICKITUNG] = TUTOR(MOVE_MEGAPUNCH)
                        | TUTOR(MOVE_SWORDSDANCE)
                        | TUTOR(MOVE_MEGAKICK)
                        | TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMICTOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_DREAMEATER)
                        | TUTOR(MOVE_ROCKSLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KOFFING] = TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WEEZING] = TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RHYHORN] = TUTOR(MOVE_SWORDSDANCE)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RHYDON] = TUTOR(MOVE_MEGAPUNCH)
                     | TUTOR(MOVE_SWORDSDANCE)
                     | TUTOR(MOVE_MEGAKICK)
                     | TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMICTOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCKSLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CHANSEY] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_SOFTBOILED)
                      | TUTOR(MOVE_DREAMEATER)
                      | TUTOR(MOVE_THUNDERWAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TANGELA] = TUTOR(MOVE_SWORDSDANCE)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KANGASKHAN] = TUTOR(MOVE_MEGAPUNCH)
                         | TUTOR(MOVE_MEGAKICK)
                         | TUTOR(MOVE_BODYSLAM)
                         | TUTOR(MOVE_DOUBLEEDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMICTOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_ROCKSLIDE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HORSEA] = TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SEADRA] = TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GOLDEEN] = TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SEAKING] = TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_STARYU] = TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDERWAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_STARMIE] = TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAMEATER)
                      | TUTOR(MOVE_THUNDERWAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MR_MIME] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_DREAMEATER)
                      | TUTOR(MOVE_THUNDERWAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SCYTHER] = TUTOR(MOVE_SWORDSDANCE)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_JYNX] = TUTOR(MOVE_MEGAPUNCH)
                   | TUTOR(MOVE_MEGAKICK)
                   | TUTOR(MOVE_BODYSLAM)
                   | TUTOR(MOVE_DOUBLEEDGE)
                   | TUTOR(MOVE_COUNTER)
                   | TUTOR(MOVE_SEISMICTOSS)
                   | TUTOR(MOVE_MIMIC)
                   | TUTOR(MOVE_METRONOME)
                   | TUTOR(MOVE_DREAMEATER)
                   | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ELECTABUZZ] = TUTOR(MOVE_MEGAPUNCH)
                         | TUTOR(MOVE_MEGAKICK)
                         | TUTOR(MOVE_BODYSLAM)
                         | TUTOR(MOVE_DOUBLEEDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMICTOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_THUNDERWAVE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAGMAR] = TUTOR(MOVE_MEGAPUNCH)
                     | TUTOR(MOVE_MEGAKICK)
                     | TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMICTOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PINSIR] = TUTOR(MOVE_SWORDSDANCE)
                     | TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_SEISMICTOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCKSLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TAUROS] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAGIKARP] = 0,

    [SPECIES_GYARADOS] = TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDERWAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LAPRAS] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAMEATER)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DITTO] = 0,

    [SPECIES_EEVEE] = TUTOR(MOVE_BODYSLAM)
                    | TUTOR(MOVE_DOUBLEEDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VAPOREON] = TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_JOLTEON] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDERWAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FLAREON] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PORYGON] = TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAMEATER)
                      | TUTOR(MOVE_THUNDERWAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_OMANYTE] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_OMASTAR] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KABUTO] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCKSLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KABUTOPS] = TUTOR(MOVE_SWORDSDANCE)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCKSLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_AERODACTYL] = TUTOR(MOVE_DOUBLEEDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_ROCKSLIDE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SNORLAX] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ARTICUNO] = TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ZAPDOS] = TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDERWAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MOLTRES] = TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DRATINI] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDERWAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DRAGONAIR] = TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDERWAVE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DRAGONITE] = TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDERWAVE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MEWTWO] = TUTOR(MOVE_MEGAPUNCH)
                     | TUTOR(MOVE_MEGAKICK)
                     | TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMICTOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_DREAMEATER)
                     | TUTOR(MOVE_THUNDERWAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MEW] = TUTOR(MOVE_MEGAPUNCH)
                  | TUTOR(MOVE_SWORDSDANCE)
                  | TUTOR(MOVE_MEGAKICK)
                  | TUTOR(MOVE_BODYSLAM)
                  | TUTOR(MOVE_DOUBLEEDGE)
                  | TUTOR(MOVE_COUNTER)
                  | TUTOR(MOVE_SEISMICTOSS)
                  | TUTOR(MOVE_MIMIC)
                  | TUTOR(MOVE_METRONOME)
                  | TUTOR(MOVE_SOFTBOILED)
                  | TUTOR(MOVE_DREAMEATER)
                  | TUTOR(MOVE_THUNDERWAVE)
                  | TUTOR(MOVE_EXPLOSION)
                  | TUTOR(MOVE_ROCKSLIDE)
                  | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CHIKORITA] = TUTOR(MOVE_SWORDSDANCE)
                        | TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BAYLEEF] = TUTOR(MOVE_SWORDSDANCE)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MEGANIUM] = TUTOR(MOVE_SWORDSDANCE)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CYNDAQUIL] = TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_QUILAVA] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TYPHLOSION] = TUTOR(MOVE_MEGAPUNCH)
                         | TUTOR(MOVE_MEGAKICK)
                         | TUTOR(MOVE_BODYSLAM)
                         | TUTOR(MOVE_DOUBLEEDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMICTOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_ROCKSLIDE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TOTODILE] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_SWORDSDANCE)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCKSLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CROCONAW] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_SWORDSDANCE)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCKSLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FERALIGATR] = TUTOR(MOVE_MEGAPUNCH)
                         | TUTOR(MOVE_SWORDSDANCE)
                         | TUTOR(MOVE_MEGAKICK)
                         | TUTOR(MOVE_BODYSLAM)
                         | TUTOR(MOVE_DOUBLEEDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMICTOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_ROCKSLIDE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SENTRET] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FURRET] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HOOTHOOT] = TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAMEATER)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NOCTOWL] = TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAMEATER)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LEDYBA] = TUTOR(MOVE_MEGAPUNCH)
                     | TUTOR(MOVE_SWORDSDANCE)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LEDIAN] = TUTOR(MOVE_MEGAPUNCH)
                     | TUTOR(MOVE_SWORDSDANCE)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SPINARAK] = TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ARIADOS] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CROBAT] = TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CHINCHOU] = TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDERWAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LANTURN] = TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDERWAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PICHU] = TUTOR(MOVE_MEGAPUNCH)
                    | TUTOR(MOVE_MEGAKICK)
                    | TUTOR(MOVE_BODYSLAM)
                    | TUTOR(MOVE_DOUBLEEDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_SEISMICTOSS)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_THUNDERWAVE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CLEFFA] = TUTOR(MOVE_MEGAPUNCH)
                     | TUTOR(MOVE_MEGAKICK)
                     | TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMICTOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_SOFTBOILED)
                     | TUTOR(MOVE_DREAMEATER)
                     | TUTOR(MOVE_THUNDERWAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_IGGLYBUFF] = TUTOR(MOVE_MEGAPUNCH)
                        | TUTOR(MOVE_MEGAKICK)
                        | TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMICTOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_DREAMEATER)
                        | TUTOR(MOVE_THUNDERWAVE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TOGEPI] = TUTOR(MOVE_MEGAPUNCH)
                     | TUTOR(MOVE_MEGAKICK)
                     | TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMICTOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_SOFTBOILED)
                     | TUTOR(MOVE_DREAMEATER)
                     | TUTOR(MOVE_THUNDERWAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TOGETIC] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_SOFTBOILED)
                      | TUTOR(MOVE_DREAMEATER)
                      | TUTOR(MOVE_THUNDERWAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NATU] = TUTOR(MOVE_DOUBLEEDGE)
                   | TUTOR(MOVE_MIMIC)
                   | TUTOR(MOVE_DREAMEATER)
                   | TUTOR(MOVE_THUNDERWAVE)
                   | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_XATU] = TUTOR(MOVE_DOUBLEEDGE)
                   | TUTOR(MOVE_MIMIC)
                   | TUTOR(MOVE_DREAMEATER)
                   | TUTOR(MOVE_THUNDERWAVE)
                   | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAREEP] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDERWAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FLAAFFY] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDERWAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_AMPHAROS] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDERWAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BELLOSSOM] = TUTOR(MOVE_SWORDSDANCE)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MARILL] = TUTOR(MOVE_MEGAPUNCH)
                     | TUTOR(MOVE_MEGAKICK)
                     | TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_SEISMICTOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_AZUMARILL] = TUTOR(MOVE_MEGAPUNCH)
                        | TUTOR(MOVE_MEGAKICK)
                        | TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_SEISMICTOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SUDOWOODO] = TUTOR(MOVE_MEGAPUNCH)
                        | TUTOR(MOVE_MEGAKICK)
                        | TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMICTOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_EXPLOSION)
                        | TUTOR(MOVE_ROCKSLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_POLITOED] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HOPPIP] = TUTOR(MOVE_SWORDSDANCE)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SKIPLOOM] = TUTOR(MOVE_SWORDSDANCE)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_JUMPLUFF] = TUTOR(MOVE_SWORDSDANCE)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_AIPOM] = TUTOR(MOVE_MEGAPUNCH)
                    | TUTOR(MOVE_MEGAKICK)
                    | TUTOR(MOVE_BODYSLAM)
                    | TUTOR(MOVE_DOUBLEEDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_SEISMICTOSS)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_METRONOME)
                    | TUTOR(MOVE_DREAMEATER)
                    | TUTOR(MOVE_THUNDERWAVE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SUNKERN] = TUTOR(MOVE_SWORDSDANCE)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SUNFLORA] = TUTOR(MOVE_SWORDSDANCE)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_YANMA] = TUTOR(MOVE_DOUBLEEDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_DREAMEATER)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WOOPER] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_QUAGSIRE] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ESPEON] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAMEATER)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_UMBREON] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAMEATER)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MURKROW] = TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAMEATER)
                      | TUTOR(MOVE_THUNDERWAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SLOWKING] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAMEATER)
                       | TUTOR(MOVE_THUNDERWAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MISDREAVUS] = TUTOR(MOVE_DOUBLEEDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_DREAMEATER)
                         | TUTOR(MOVE_THUNDERWAVE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_UNOWN] = 0,

    [SPECIES_WOBBUFFET] = 0,

    [SPECIES_GIRAFARIG] = TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_DREAMEATER)
                        | TUTOR(MOVE_THUNDERWAVE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PINECO] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_ROCKSLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FORRETRESS] = TUTOR(MOVE_BODYSLAM)
                         | TUTOR(MOVE_DOUBLEEDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_EXPLOSION)
                         | TUTOR(MOVE_ROCKSLIDE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DUNSPARCE] = TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_DREAMEATER)
                        | TUTOR(MOVE_THUNDERWAVE)
                        | TUTOR(MOVE_ROCKSLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GLIGAR] = TUTOR(MOVE_SWORDSDANCE)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAMEATER)
                     | TUTOR(MOVE_ROCKSLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_STEELIX] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SNUBBULL] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_THUNDERWAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GRANBULL] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_THUNDERWAVE)
                       | TUTOR(MOVE_ROCKSLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_QWILFISH] = TUTOR(MOVE_SWORDSDANCE)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDERWAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SCIZOR] = TUTOR(MOVE_SWORDSDANCE)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHUCKLE] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HERACROSS] = TUTOR(MOVE_SWORDSDANCE)
                        | TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMICTOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCKSLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SNEASEL] = TUTOR(MOVE_SWORDSDANCE)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAMEATER)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TEDDIURSA] = TUTOR(MOVE_MEGAPUNCH)
                        | TUTOR(MOVE_SWORDSDANCE)
                        | TUTOR(MOVE_MEGAKICK)
                        | TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMICTOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_METRONOME)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_URSARING] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_SWORDSDANCE)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_ROCKSLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SLUGMA] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCKSLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAGCARGO] = TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCKSLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SWINUB] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCKSLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PILOSWINE] = TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCKSLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CORSOLA] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_REMORAID] = TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDERWAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_OCTILLERY] = TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_SEISMICTOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDERWAVE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DELIBIRD] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MANTINE] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SKARMORY] = TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCKSLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HOUNDOUR] = TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAMEATER)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HOUNDOOM] = TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAMEATER)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KINGDRA] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PHANPY] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DONPHAN] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PORYGON2] = TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAMEATER)
                       | TUTOR(MOVE_THUNDERWAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_STANTLER] = TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAMEATER)
                       | TUTOR(MOVE_THUNDERWAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SMEARGLE] = 0,

    [SPECIES_TYROGUE] = TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HITMONTOP] = TUTOR(MOVE_MEGAKICK)
                        | TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMICTOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCKSLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SMOOCHUM] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_DREAMEATER)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ELEKID] = TUTOR(MOVE_MEGAPUNCH)
                     | TUTOR(MOVE_MEGAKICK)
                     | TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMICTOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDERWAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAGBY] = TUTOR(MOVE_MEGAPUNCH)
                    | TUTOR(MOVE_MEGAKICK)
                    | TUTOR(MOVE_BODYSLAM)
                    | TUTOR(MOVE_DOUBLEEDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_SEISMICTOSS)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MILTANK] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_THUNDERWAVE)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BLISSEY] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_SOFTBOILED)
                      | TUTOR(MOVE_DREAMEATER)
                      | TUTOR(MOVE_THUNDERWAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RAIKOU] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDERWAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ENTEI] = TUTOR(MOVE_BODYSLAM)
                    | TUTOR(MOVE_DOUBLEEDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SUICUNE] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LARVITAR] = TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCKSLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PUPITAR] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TYRANITAR] = TUTOR(MOVE_MEGAPUNCH)
                        | TUTOR(MOVE_MEGAKICK)
                        | TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMICTOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDERWAVE)
                        | TUTOR(MOVE_ROCKSLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LUGIA] = TUTOR(MOVE_BODYSLAM)
                    | TUTOR(MOVE_DOUBLEEDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_DREAMEATER)
                    | TUTOR(MOVE_THUNDERWAVE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HO_OH] = TUTOR(MOVE_DOUBLEEDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_DREAMEATER)
                    | TUTOR(MOVE_THUNDERWAVE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CELEBI] = TUTOR(MOVE_SWORDSDANCE)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_DREAMEATER)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TREECKO] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_SWORDSDANCE)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GROVYLE] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_SWORDSDANCE)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SCEPTILE] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_SWORDSDANCE)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TORCHIC] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_SWORDSDANCE)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_COMBUSKEN] = TUTOR(MOVE_MEGAPUNCH)
                        | TUTOR(MOVE_SWORDSDANCE)
                        | TUTOR(MOVE_MEGAKICK)
                        | TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMICTOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCKSLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BLAZIKEN] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_SWORDSDANCE)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCKSLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MUDKIP] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MARSHTOMP] = TUTOR(MOVE_MEGAPUNCH)
                        | TUTOR(MOVE_MEGAKICK)
                        | TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMICTOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCKSLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SWAMPERT] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCKSLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_POOCHYENA] = TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MIGHTYENA] = TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ZIGZAGOON] = TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDERWAVE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LINOONE] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDERWAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WURMPLE] = 0,

    [SPECIES_SILCOON] = 0,

    [SPECIES_BEAUTIFLY] = TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CASCOON] = 0,

    [SPECIES_DUSTOX] = TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LOTAD] = TUTOR(MOVE_SWORDSDANCE)
                    | TUTOR(MOVE_BODYSLAM)
                    | TUTOR(MOVE_DOUBLEEDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LOMBRE] = TUTOR(MOVE_SWORDSDANCE)
                     | TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LUDICOLO] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_SWORDSDANCE)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SEEDOT] = TUTOR(MOVE_SWORDSDANCE)
                     | TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NUZLEAF] = TUTOR(MOVE_SWORDSDANCE)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHIFTRY] = TUTOR(MOVE_SWORDSDANCE)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NINCADA] = TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NINJASK] = TUTOR(MOVE_SWORDSDANCE)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHEDINJA] = TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAMEATER)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TAILLOW] = TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SWELLOW] = TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHROOMISH] = TUTOR(MOVE_SWORDSDANCE)
                        | TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BRELOOM] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_SWORDSDANCE)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SPINDA] = TUTOR(MOVE_MEGAPUNCH)
                     | TUTOR(MOVE_MEGAKICK)
                     | TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMICTOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_DREAMEATER)
                     | TUTOR(MOVE_ROCKSLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WINGULL] = TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PELIPPER] = TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SURSKIT] = TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MASQUERAIN] = TUTOR(MOVE_DOUBLEEDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WAILMER] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WAILORD] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SKITTY] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAMEATER)
                     | TUTOR(MOVE_THUNDERWAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DELCATTY] = TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAMEATER)
                       | TUTOR(MOVE_THUNDERWAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KECLEON] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_THUNDERWAVE)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BALTOY] = TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAMEATER)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_ROCKSLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CLAYDOL] = TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAMEATER)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NOSEPASS] = TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDERWAVE)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_ROCKSLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TORKOAL] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SABLEYE] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_DREAMEATER)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BARBOACH] = TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WHISCASH] = TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCKSLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LUVDISC] = TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CORPHISH] = TUTOR(MOVE_SWORDSDANCE)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CRAWDAUNT] = TUTOR(MOVE_SWORDSDANCE)
                        | TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FEEBAS] = TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MILOTIC] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CARVANHA] = TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHARPEDO] = TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TRAPINCH] = TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCKSLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VIBRAVA] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FLYGON] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCKSLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAKUHITA] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_ROCKSLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HARIYAMA] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_ROCKSLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ELECTRIKE] = TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDERWAVE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MANECTRIC] = TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDERWAVE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NUMEL] = TUTOR(MOVE_BODYSLAM)
                    | TUTOR(MOVE_DOUBLEEDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_ROCKSLIDE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CAMERUPT] = TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_ROCKSLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SPHEAL] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCKSLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SEALEO] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCKSLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WALREIN] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CACNEA] = TUTOR(MOVE_MEGAPUNCH)
                     | TUTOR(MOVE_SWORDSDANCE)
                     | TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMICTOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CACTURNE] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_SWORDSDANCE)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SNORUNT] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GLALIE] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LUNATONE] = TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAMEATER)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_ROCKSLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SOLROCK] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAMEATER)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_AZURILL] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SPOINK] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAMEATER)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GRUMPIG] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAMEATER)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PLUSLE] = TUTOR(MOVE_MEGAPUNCH)
                     | TUTOR(MOVE_MEGAKICK)
                     | TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMICTOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_THUNDERWAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MINUN] = TUTOR(MOVE_MEGAPUNCH)
                    | TUTOR(MOVE_MEGAKICK)
                    | TUTOR(MOVE_BODYSLAM)
                    | TUTOR(MOVE_DOUBLEEDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_SEISMICTOSS)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_METRONOME)
                    | TUTOR(MOVE_THUNDERWAVE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAWILE] = TUTOR(MOVE_MEGAPUNCH)
                     | TUTOR(MOVE_SWORDSDANCE)
                     | TUTOR(MOVE_MEGAKICK)
                     | TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMICTOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCKSLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MEDITITE] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_DREAMEATER)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MEDICHAM] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_DREAMEATER)
                       | TUTOR(MOVE_ROCKSLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SWABLU] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAMEATER)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ALTARIA] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAMEATER)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WYNAUT] = 0,

    [SPECIES_DUSKULL] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAMEATER)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DUSCLOPS] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_DREAMEATER)
                       | TUTOR(MOVE_ROCKSLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ROSELIA] = TUTOR(MOVE_SWORDSDANCE)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SLAKOTH] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VIGOROTH] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCKSLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SLAKING] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GULPIN] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAMEATER)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SWALOT] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAMEATER)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TROPIUS] = TUTOR(MOVE_SWORDSDANCE)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WHISMUR] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LOUDRED] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_EXPLOUD] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CLAMPERL] = TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HUNTAIL] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GOREBYSS] = TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ABSOL] = TUTOR(MOVE_SWORDSDANCE)
                    | TUTOR(MOVE_BODYSLAM)
                    | TUTOR(MOVE_DOUBLEEDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_DREAMEATER)
                    | TUTOR(MOVE_THUNDERWAVE)
                    | TUTOR(MOVE_ROCKSLIDE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHUPPET] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAMEATER)
                      | TUTOR(MOVE_THUNDERWAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BANETTE] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_DREAMEATER)
                      | TUTOR(MOVE_THUNDERWAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SEVIPER] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ZANGOOSE] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_SWORDSDANCE)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDERWAVE)
                       | TUTOR(MOVE_ROCKSLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RELICANTH] = TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCKSLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ARON] = TUTOR(MOVE_BODYSLAM)
                   | TUTOR(MOVE_DOUBLEEDGE)
                   | TUTOR(MOVE_MIMIC)
                   | TUTOR(MOVE_ROCKSLIDE)
                   | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LAIRON] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCKSLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_AGGRON] = TUTOR(MOVE_MEGAPUNCH)
                     | TUTOR(MOVE_MEGAKICK)
                     | TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMICTOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDERWAVE)
                     | TUTOR(MOVE_ROCKSLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CASTFORM] = TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDERWAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VOLBEAT] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_THUNDERWAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ILLUMISE] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_THUNDERWAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LILEEP] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCKSLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CRADILY] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ANORITH] = TUTOR(MOVE_SWORDSDANCE)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ARMALDO] = TUTOR(MOVE_SWORDSDANCE)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RALTS] = TUTOR(MOVE_BODYSLAM)
                    | TUTOR(MOVE_DOUBLEEDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_DREAMEATER)
                    | TUTOR(MOVE_THUNDERWAVE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KIRLIA] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAMEATER)
                     | TUTOR(MOVE_THUNDERWAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GARDEVOIR] = TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_DREAMEATER)
                        | TUTOR(MOVE_THUNDERWAVE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BAGON] = TUTOR(MOVE_BODYSLAM)
                    | TUTOR(MOVE_DOUBLEEDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_ROCKSLIDE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHELGON] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SALAMENCE] = TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCKSLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BELDUM] = 0,

    [SPECIES_METANG] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_ROCKSLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_METAGROSS] = TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_EXPLOSION)
                        | TUTOR(MOVE_ROCKSLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_REGIROCK] = TUTOR(MOVE_MEGAPUNCH)
                       | TUTOR(MOVE_MEGAKICK)
                       | TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMICTOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDERWAVE)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_ROCKSLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_REGICE] = TUTOR(MOVE_MEGAPUNCH)
                     | TUTOR(MOVE_MEGAKICK)
                     | TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMICTOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDERWAVE)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_ROCKSLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_REGISTEEL] = TUTOR(MOVE_MEGAPUNCH)
                        | TUTOR(MOVE_MEGAKICK)
                        | TUTOR(MOVE_BODYSLAM)
                        | TUTOR(MOVE_DOUBLEEDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMICTOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDERWAVE)
                        | TUTOR(MOVE_EXPLOSION)
                        | TUTOR(MOVE_ROCKSLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KYOGRE] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDERWAVE)
                     | TUTOR(MOVE_ROCKSLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GROUDON] = TUTOR(MOVE_MEGAPUNCH)
                      | TUTOR(MOVE_SWORDSDANCE)
                      | TUTOR(MOVE_MEGAKICK)
                      | TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMICTOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDERWAVE)
                      | TUTOR(MOVE_ROCKSLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RAYQUAZA] = TUTOR(MOVE_BODYSLAM)
                       | TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDERWAVE)
                       | TUTOR(MOVE_ROCKSLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LATIAS] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAMEATER)
                     | TUTOR(MOVE_THUNDERWAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LATIOS] = TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAMEATER)
                     | TUTOR(MOVE_THUNDERWAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_JIRACHI] = TUTOR(MOVE_BODYSLAM)
                      | TUTOR(MOVE_DOUBLEEDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_DREAMEATER)
                      | TUTOR(MOVE_THUNDERWAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DEOXYS] = TUTOR(MOVE_MEGAPUNCH)
                     | TUTOR(MOVE_MEGAKICK)
                     | TUTOR(MOVE_BODYSLAM)
                     | TUTOR(MOVE_DOUBLEEDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMICTOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAMEATER)
                     | TUTOR(MOVE_THUNDERWAVE)
                     | TUTOR(MOVE_ROCKSLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CHIMECHO] = TUTOR(MOVE_DOUBLEEDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAMEATER)
                       | TUTOR(MOVE_SUBSTITUTE),
};
