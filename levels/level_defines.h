#ifdef VERSION_JP
#define VAL_DIFF 25000
#else
#define VAL_DIFF 60000
#endif

// Define lists for list of level for macros. Each of the following fields are described:
// Argument 1: Internal ROM name of the level.
// Argument 2: Level enumerator for enum used to identify the level ID.
// Argument 3: Course enumerator for enum used to identify the course ID.
// Argument 4: Shorthand name of the level which should be the name of the levels/ folder of the level.
// Argument 5: The shared texture bin used.
// Argument 6: Acoustic reaches for each levels.
// Argument 7, 8, 9: Echo levels for individual areas.
// Argument 10: Specify dynamic music tables for levels, if specified. _ for none.
// Argument 11: Specify level camera table, if specified. _ for none.

// NOTE: Be sure to edit sZoomOutAreaMasks in camera.c, as there isnt a good way to macro those right now.
// TODO: Figure something out for sZoomOutAreaMasks?
STUB_LEVEL("",                 LEVEL_UNKNOWN_1,        COURSE_NONE,                                 20000,    0x00, 0x00, 0x00, _,         _)
STUB_LEVEL("",                 LEVEL_UNKNOWN_2,        COURSE_NONE,                                 20000,    0x00, 0x00, 0x00, _,         _)
STUB_LEVEL("",                 LEVEL_UNKNOWN_3,        COURSE_NONE,                                 20000,    0x00, 0x00, 0x00, _,         _)
STUB_LEVEL("TERESA OBAKE",     LEVEL_BBH,              COURSE_BBH,                                  28000,    0x28, 0x28, 0x28, sDynBbh,   sCamBBH)
DEFINE_LEVEL("YYAMA1 % YSLD1", LEVEL_CCM,              COURSE_CCM,      ccm,              snow,     17000,    0x10, 0x38, 0x38, _,         _)
DEFINE_LEVEL("SELECT ROOM",    LEVEL_CASTLE,           COURSE_NONE,     castle_inside,    inside,   20000,    0x08, 0x08, 0x08, _,         sCamCastle)
STUB_LEVEL("HORROR DUNGEON",   LEVEL_HMC,              COURSE_HMC,                                  16000,    0x28, 0x28, 0x28, sDynHmc,   sCamHMC)
STUB_LEVEL("SABAKU % PYRMD",   LEVEL_SSL,              COURSE_SSL,                                  15000,    0x08, 0x30, 0x30, _,         sCamSSL)
STUB_LEVEL("BATTLE FIELD",     LEVEL_BOB,              COURSE_BOB,                                  15000,    0x08, 0x08, 0x08, _,         _)
STUB_LEVEL("YUKIYAMA2",        LEVEL_SL,               COURSE_SL,                                   14000,    0x10, 0x28, 0x28, _,         sCamSL)
STUB_LEVEL("POOL KAI",         LEVEL_WDW,              COURSE_WDW,                                  17000,    0x10, 0x18, 0x18, sDynWdw,   _)
STUB_LEVEL("WTDG % TINBOTU",   LEVEL_JRB,              COURSE_JRB,                                  20000,    0x10, 0x18, 0x18, _,         _)
STUB_LEVEL("BIG WORLD",        LEVEL_THI,              COURSE_THI,                                  20000,    0x0c, 0x0c, 0x20, _,         sCamTHI)
STUB_LEVEL("CLOCK TOWER",      LEVEL_TTC,              COURSE_TTC,                                  18000,    0x18, 0x18, 0x18, _,         _)
STUB_LEVEL("RAINBOW CRUISE",   LEVEL_RR,               COURSE_RR,                                   20000,    0x20, 0x20, 0x20, _,         sCamRR)
DEFINE_LEVEL("MAIN MAP",       LEVEL_CASTLE_GROUNDS,   COURSE_NONE,     castle_grounds,   outside,  25000,    0x18, 0x18, 0x18, _,         _)
STUB_LEVEL("EXT1 YOKO SCRL",   LEVEL_BITDW,            COURSE_BITDW,                                16000,    0x28, 0x28, 0x28, _,         _)
STUB_LEVEL("EXT7 HORI MINI",   LEVEL_VCUTM,            COURSE_VCUTM,                                30000,    0x28, 0x28, 0x28, _,         _)
STUB_LEVEL("EXT2 TIKA LAVA",   LEVEL_BITFS,            COURSE_BITFS,                                16000,    0x28, 0x28, 0x28, _,         _)
STUB_LEVEL("EXT9 SUISOU",      LEVEL_SA,               COURSE_SA,                                   20000,    0x10, 0x10, 0x10, _,         _)
STUB_LEVEL("EXT3 HEAVEN",      LEVEL_BITS,             COURSE_BITS,                                 16000,    0x28, 0x28, 0x28, _,         _)
DEFINE_LEVEL("FIREB1 % INVLC", LEVEL_LLL,              COURSE_LLL,      lll,              fire,     22000,    0x08, 0x08, 0x08, _,         _)
DEFINE_LEVEL("WATER LAND",     LEVEL_DDD,              COURSE_DDD,      ddd,              water,    17000,    0x08, 0x08, 0x08, _,         _)
DEFINE_LEVEL("MOUNTAIN",       LEVEL_WF,               COURSE_WF,       wf,               grass,    13000,    0x08, 0x08, 0x08, _,         _)
STUB_LEVEL("ENDING",           LEVEL_ENDING,           COURSE_CAKE_END,                             20000,    0x00, 0x00, 0x00, _,         _)
DEFINE_LEVEL("URANIWA",        LEVEL_CASTLE_COURTYARD, COURSE_NONE,     castle_courtyard, outside,  20000,    0x08, 0x08, 0x08, _,         _)
STUB_LEVEL("EXT4 MINI SLID",   LEVEL_PSS,              COURSE_PSS,                                  20000,    0x28, 0x28, 0x28, _,         _)
STUB_LEVEL("IN THE FALL",      LEVEL_COTMC,            COURSE_COTMC,                                18000,    0x28, 0x28, 0x28, _,         sCamCotMC)
STUB_LEVEL("EXT6 MARIO FLY",   LEVEL_TOTWC,            COURSE_TOTWC,                                20000,    0x20, 0x20, 0x20, _,         _)
DEFINE_LEVEL("KUPPA1",         LEVEL_BOWSER_1,         COURSE_BITDW,    bowser_1,         generic,  VAL_DIFF, 0x08, 0x08, 0x08, _,         _)
STUB_LEVEL("EXT8 BLUE SKY",    LEVEL_WMOTR,            COURSE_WMOTR,                                20000,    0x28, 0x28, 0x28, _,         _)
STUB_LEVEL("",                 LEVEL_UNKNOWN_32,       COURSE_NONE,                                 20000,    0x70, 0x00, 0x00, _,         _)
STUB_LEVEL("KUPPA2",           LEVEL_BOWSER_2,         COURSE_BITFS,                                VAL_DIFF, 0x40, 0x40, 0x40, _,         _)
STUB_LEVEL("KUPPA3",           LEVEL_BOWSER_3,         COURSE_BITS,                                 VAL_DIFF, 0x40, 0x40, 0x40, _,         _)
DEFINE_LEVEL("",               LEVEL_STAGE35,          COURSE_NONE,    stage35,           generic,  20000,    0x00, 0x00, 0x00, _,         _)
STUB_LEVEL("DONKEY % SLID2",   LEVEL_TTM,              COURSE_TTM,                                  15000,    0x08, 0x08, 0x08, _,         _)
STUB_LEVEL(  "",               LEVEL_UNKNOWN_37,       COURSE_NONE,                                 20000,    0x00, 0x00, 0x00, _,         _)
STUB_LEVEL("",                 LEVEL_UNKNOWN_38,       COURSE_NONE,                                 20000,    0x00, 0x00, 0x00, sDynUnk38, _)
