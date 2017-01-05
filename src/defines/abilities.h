#ifndef ABILITY_IDS
#define ABILITY_IDS

enum poke_abilities
{
        ABILITY_NO_ABILITY, //0x0
        ABILITY_STENCH, //0x1
        ABILITY_DRIZZLE, //0x2
        ABILITY_SPEED_BOOST, //0x3
        ABILITY_BATTLE_ARMOR, //0x4
        ABILITY_STURDY, //0x5
        ABILITY_DAMP, //0x6
        ABILITY_LIMBER, //0x7
        ABILITY_SAND_VEIL, //0x8
        ABILITY_STATIC, //0x9
        ABILITY_VOLT_ABSORB, //0xA
        ABILITY_WATER_ABSORB, //0xB
        ABILITY_OBLIVIOUS, //0xC
        ABILITY_CLOUD_NINE, //0xD
        ABILITY_COMPOUND_EYES, //0xE
        ABILITY_INSOMNIA, //0xF
        ABILITY_COLOR_CHANGE, //0x10
        ABILITY_IMMUNITY, //0x11
        ABILITY_FLASH_FIRE, //0x12
        ABILITY_SHIELD_DUST, //0x13
        ABILITY_OWN_TEMPO, //0x14
        ABILITY_SUCTION_CUPS, //0x15
        ABILITY_INTIMIDATE, //0x16
        ABILITY_SHADOW_TAG, //0x17
        ABILITY_ROUGH_SKIN, //0x18
        ABILITY_WONDER_GUARD, //0x19
        ABILITY_LEVITATE, //0x1A
        ABILITY_EFFECT_SPORE, //0x1B
        ABILITY_SYNCHRONIZE, //0x1C
        ABILITY_CLEAR_BODY, //0x1D
        ABILITY_NATURAL_CURE, //0x1E
        ABILITY_LIGHTNING_ROD, //0x1F
        ABILITY_SERENE_GRACE, //0x20
        ABILITY_SWIFT_SWIM, //0x21
        ABILITY_CHLOROPHYLL, //0x22
        ABILITY_ILLUMINATE, //0x23
        ABILITY_TRACE, //0x24
        ABILITY_HUGE_POWER, //0x25
        ABILITY_POISON_POINT, //0x26
        ABILITY_INNER_FOCUS, //0x27
        ABILITY_MAGMA_ARMOR, //0x28
        ABILITY_WATER_VEIL, //0x29
        ABILITY_MAGNET_PULL, //0x2A
        ABILITY_SOUNDPROOF, //0x2B
        ABILITY_RAIN_DISH, //0x2C
        ABILITY_SAND_STREAM, //0x2D
        ABILITY_PRESSURE, //0x2E
        ABILITY_THICK_FAT, //0x2F
        ABILITY_EARLY_BIRD, //0x30
        ABILITY_FLAME_BODY, //0x31
        ABILITY_RUN_AWAY, //0x32
        ABILITY_KEEN_EYE, //0x33
        ABILITY_HYPER_CUTTER, //0x34
        ABILITY_PICKUP, //0x35
        ABILITY_TRUANT, //0x36
        ABILITY_HUSTLE, //0x37
        ABILITY_CUTE_CHARM, //0x38
        ABILITY_PLUS, //0x39
        ABILITY_MINUS, //0x3A
        ABILITY_FORECAST, //0x3B
        ABILITY_STICKY_HOLD, //0x3C
        ABILITY_SHED_SKIN, //0x3D
        ABILITY_GUTS, //0x3E
        ABILITY_MARVEL_SCALE, //0x3F
        ABILITY_LIQUID_OOZE, //0x40
        ABILITY_OVERGROW, //0x41
        ABILITY_BLAZE, //0x42
        ABILITY_TORRENT, //0x43
        ABILITY_SWARM, //0x44
        ABILITY_ROCK_HEAD, //0x45
        ABILITY_DROUGHT, //0x46
        ABILITY_ARENA_TRAP, //0x47
        ABILITY_VITAL_SPIRIT, //0x48
        ABILITY_WHITE_SMOKE, //0x49
        ABILITY_PURE_POWER, //0x4A
        ABILITY_SHELL_ARMOR, //0x4B
        ABILITY_AIR_LOCK, //0x4C
        ABILITY_TANGLED_FEET, //0x4D
        ABILITY_MOTOR_DRIVE, //0x4E
        ABILITY_RIVALRY, //0x4F
        ABILITY_STEADFAST, //0x50
        ABILITY_SNOW_CLOAK, //0x51
        ABILITY_GLUTTONY, //0x52
        ABILITY_ANGER_POINT, //0x53
        ABILITY_UNBURDEN, //0x54
        ABILITY_HEATPROOF, //0x55
        ABILITY_SIMPLE, //0x56
        ABILITY_DRY_SKIN, //0x57
        ABILITY_DOWNLOAD, //0x58
        ABILITY_IRON_FIST, //0x59
        ABILITY_POISON_HEAL, //0x5A
        ABILITY_ADAPTABILITY, //0x5B
        ABILITY_SKILL_LINK, //0x5C
        ABILITY_HYDRATION, //0x5D
        ABILITY_SOLAR_POWER, //0x5E
        ABILITY_QUICK_FEET, //0x5F
        ABILITY_NORMALIZE, //0x60
        ABILITY_SNIPER, //0x61
        ABILITY_MAGIC_GUARD, //0x62
        ABILITY_NO_GUARD, //0x63
        ABILITY_STALL, //0x64
        ABILITY_TECHNICIAN, //0x65
        ABILITY_LEAF_GUARD, //0x66
        ABILITY_KLUTZ, //0x67
        ABILITY_MOLD_BREAKER, //0x68
        ABILITY_SUPER_LUCK, //0x69
        ABILITY_AFTERMATH, //0x6A
        ABILITY_ANTICIPATION, //0x6B
        ABILITY_FOREWARN, //0x6C
        ABILITY_UNAWARE, //0x6D
        ABILITY_TINTED_LENS, //0x6E
        ABILITY_FILTER, //0x6F
        ABILITY_SLOW_START, //0x70
        ABILITY_SCRAPPY, //0x71
        ABILITY_STORM_DRAIN, //0x72
        ABILITY_ICE_BODY, //0x73
        ABILITY_SOLID_ROCK, //0x74
        ABILITY_SNOW_WARNING, //0x75
        ABILITY_HONEY_GATHER, //0x76
        ABILITY_FRISK, //0x77
        ABILITY_RECKLESS, //0x78
        ABILITY_MULTITYPE, //0x79
        ABILITY_FLOWER_GIFT, //0x7A
        ABILITY_BAD_DREAMS, //0x7B
        ABILITY_PICKPOCKET, //0x7C
        ABILITY_SHEER_FORCE, //0x7D
        ABILITY_CONTRARY, //0x7E
        ABILITY_UNNERVE, //0x7F
        ABILITY_DEFIANT, //0x80
        ABILITY_DEFEATIST, //0x81
        ABILITY_CURSED_BODY, //0x82
        ABILITY_HEALER, //0x83
        ABILITY_FRIEND_GUARD, //0x84
        ABILITY_WEAK_ARMOR, //0x85
        ABILITY_HEAVY_METAL, //0x86
        ABILITY_LIGHT_METAL, //0x87
        ABILITY_MULTISCALE, //0x88
        ABILITY_TOXIC_BOOST, //0x89
        ABILITY_FLARE_BOOST, //0x8A
        ABILITY_HARVEST, //0x8B
        ABILITY_TELEPATHY, //0x8C
        ABILITY_MOODY, //0x8D
        ABILITY_OVERCOAT, //0x8E
        ABILITY_POISON_TOUCH, //0x8F
        ABILITY_REGENERATOR, //0x90
        ABILITY_BIG_PECKS, //0x91
        ABILITY_SAND_RUSH, //0x92
        ABILITY_WONDER_SKIN, //0x93
        ABILITY_ANALYTIC, //0x94
        ABILITY_ILLUSION, //0x95
        ABILITY_IMPOSTER, //0x96
        ABILITY_INFILTRATOR, //0x97
        ABILITY_MUMMY, //0x98
        ABILITY_MOXIE, //0x99
        ABILITY_JUSTIFIED, //0x9A
        ABILITY_RATTLED, //0x9B
        ABILITY_MAGIC_BOUNCE, //0x9C
        ABILITY_SAP_SIPPER, //0x9D
        ABILITY_PRANKSTER, //0x9E
        ABILITY_SAND_FORCE, //0x9F
        ABILITY_IRON_BARBS, //0xA0
        ABILITY_ZEN_MODE, //0xA1
        ABILITY_VICTORY_STAR, //0xA2
        ABILITY_TURBOBLAZE, //0xA3
        ABILITY_TERAVOLT, //0xA4
        ABILITY_AROMA_VEIL, //0xA5
        ABILITY_FLOWER_VEIL, //0xA6
        ABILITY_CHEEK_POUCH, //0xA7
        ABILITY_PROTEAN, //0xA8
        ABILITY_FUR_COAT, //0xA9
        ABILITY_MAGICIAN, //0xAA
        ABILITY_BULLETPROOF, //0xAB
        ABILITY_COMPETITIVE, //0xAC
        ABILITY_STRONG_JAW, //0xAD
        ABILITY_REFRIGERATE, //0xAE
        ABILITY_SWEET_VEIL, //0xAF
        ABILITY_STANCE_CHANGE, //0xB0
        ABILITY_GALE_WINGS, //0xB1
        ABILITY_MEGA_LAUNCHER, //0xB2
        ABILITY_GRASS_PELT, //0xB3
        ABILITY_SYMBIOSIS, //0xB4
        ABILITY_TOUGH_CLAWS, //0xB5
        ABILITY_PIXILATE, //0xB6
        ABILITY_GOOEY, //0xB7
        ABILITY_AERILATE, //0xB8
        ABILITY_PARENTAL_BOND, //0xB9
        ABILITY_DARK_AURA, //0xBA
        ABILITY_FAIRY_AURA, //0xBB
        ABILITY_AURA_BREAK, //0xBC
        ABILITY_PRIMORDIAL_SEA, //0xBD
        ABILITY_DESOLATE_LAND, //0xBE
        ABILITY_DELTA_STREAM, //0xBF
        ABILITY_STAMINA, //0xC0
        ABILITY_WIMP_OUT, //0xC1
        ABILITY_EMERGENCY_EXIT, //0xC2
        ABILITY_WATER_COMPACTION, //0xC3
        ABILITY_MERCILESS, //0xC4
        ABILITY_SHIELDS_DOWN, //0xC5
        ABILITY_STAKEOUT, //0xC6
        ABILITY_WATER_BUBBLE, //0xC7
        ABILITY_STEELWORKER, //0xC8
        ABILITY_BERSERK, //0xC9
        ABILITY_SLUSH_RUSH, //0xCA
        ABILITY_LONG_REACH, //0xCB
        ABILITY_LIQUID_VOICE, //0xCC
        ABILITY_TRIAGE, //0xCD
        ABILITY_GALVANIZE, //0xCE
        ABILITY_SURGE_SURFER, //0xCF
        ABILITY_SCHOOLING, //0xD0
        ABILITY_DISGUISE, //0xD1
        ABILITY_BATTLE_BOND, //0xD2
        ABILITY_POWER_CONSTRUCT, //0xD3
        ABILITY_CORROSION, //0xD4
        ABILITY_COMATOSE, //0xD5
        ABILITY_QUEENLY_MAJESTY, //0xD6
        ABILITY_INNARDS_OUT, //0xD7
        ABILITY_DANCER, //0xD8
        ABILITY_BATTERY, //0xD9
        ABILITY_FLUFFY, //0xDA
        ABILITY_DAZZLING, //0xDB
        ABILITY_SOUL_HEART, //0xDC
        ABILITY_TANGLING_HAIR, //0xDD
        ABILITY_RECEIVER, //0xDE
        ABILITY_POWER_OF_ALCHEMY, //0xDF
        ABILITY_BEAST_BOOST, //0xE0
        ABILITY_RKS_SYSTEM, //0xE1
        ABILITY_ELECTRIC_SURGE, //0xE2
        ABILITY_PSYCHIC_SURGE, //0xE3
        ABILITY_MISTY_SURGE, //0xE4
        ABILITY_GRASSY_SURGE, //0xE5
        ABILITY_FULL_METAL_BODY, //0xE6
        ABILITY_SHADOW_SHIELD, //0xE7
        ABILITY_PRISM_ARMOR, //0xE8
};

#endif /* ABILITY_IDS_H */

