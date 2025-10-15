from enum import IntEnum

class SetFlags(IntEnum):
    POS = 1
    CAM = 2

ANY_PERCENT_SAVES = [
    {
        'name': 'ordon gate clip',
        'description': 'Gate Clip outside Ordon Spring',
        'filename': 'ordon_gate_clip',
        'setflags': SetFlags.POS | SetFlags.CAM,
        'pos': (827.450012, 216.490097, -4533.90625),
        'angle': 498,
        'cam': {
            'center': (833.467468, 477.604675, -4241.97266),
            'eye': (827.497559, 329.622986, -4532.90723)
        },
    },
    {
        'name': 'back in time',
        'description': 'Back in Time off the Ordon Spring bridge',
        'filename': 'ordon_gate_clip',
        'setflags': SetFlags.POS | SetFlags.CAM,
        'pos': (466.622467, 319.770752, -11651.3867),
        'angle': 52540,
        'cam': {
            'center': (735.525391, 524.418701, -11576.4746),
            'eye': (465.674622, 421.052704, -11651.0684)
        },
    },
    {
        'name': 'goats',
        'description': 'Goat herding 2',
        'filename': 'goats',
    },
    {
        'name': 'sword and shield skip',
        'description': 'Hangin\' with Hugo',
        'filename': 'hugo',
        'setflags': SetFlags.POS | SetFlags.CAM,
        'pos': (701.797302, 85.5212784, -5299.6123),
        'angle': 63622,
        'cam': {
            'center': (735.525391, 524.418701, -11576.4746),
            'eye': (465.674622, 421.052704, -11651.0684)
        },
    },
    {
        'name': 'early master sword',
        'description': 'Super Jump to Sacred Grove',
        'filename': 'ems',
    },
    {
        'name': 'purple mist',
        'description': 'Purple mist in Faron Woods (post-EMS)',
        'filename': 'purple_mist',
        'setflags': SetFlags.POS,
        'pos': (-23524.6152, 250.0, -16220.166),
        'angle': 40758,
    },
    {
        'name': 'forest bit',
        'description': 'Back in Time in Forest Temple',
        'filename': 'forest_bit',
    },
    {
        'name': 'forest escape',
        'description': 'LJA over S.Faron exit trigger',
        'filename': 'forest_escape',
        'setflags': SetFlags.POS | SetFlags.CAM,
        'pos': (-12433.6016, -235.969193, -17103.998),
        'angle': 29553,
        'cam': {
            'center': (-12552.8252, -53.5801048, -16729.5313),
            'eye': (-12433.2979, -106.667023, -17104.9512)
        },
    },
    {
        'name': 'gorge void',
        'description': '1 frame jump attack into Gorge',
        'filename': 'gorge_void',
        'setflags': SetFlags.POS,
        'pos': (-9704.47266, -7200.0, 58475.5195),
        'angle': 54288,
    },
    {
        'name': 'rupee roll',
        'description': 'Rupee Roll / Gorge Skip',
        'filename': 'rupee_roll',
        'setflags': SetFlags.POS | SetFlags.CAM,
        'pos': (-11130.208, -5700.0, 56423.1953),
        'angle': 31571,
        'cam': {
            'center': (-11178.1504, -5506.71338, 56843.1797),
            'eye': (-11124.4697, -5589.99902, 56373.5195)
        },
    },
    {
        'name': 'lanayru gate clip',
        'description': 'Gate Clip to Lanayru',
        'filename': 'lanayru_gate_clip',
        'setflags': SetFlags.POS | SetFlags.CAM,
        'pos': (-63026.2852, -9065.92578, 71680.3438),
        'angle': 44248,
        'cam': {
            'center': (-62655.8125, -8900.91309, 71903.6328),
            'eye': (-63064.2148, -8969.97656, 71661.0781)
        },
    },
    {
        'name': 'kargorok flight',
        'description': 'Clip OoB with trumpet bird',
        'filename': 'karg',
    },
    {
        'name': 'eldin twilight',
        'description': 'Eldin Twilight tears',
        'filename': 'eldin_twilight',
        'setflags': SetFlags.POS | SetFlags.CAM,
        'pos': (455.088379, -150.0, 11516.7227),
        'angle': 6058,
        'cam': {
            'center': (219.367218, -20.1253014, 11157.582),
            'eye': (482.515137, -39.9999771, 11558.5283)
        },
    },
    {
        'name': 'bomb house skip',
        'description': 'Skip entering the Bomb House',
        'filename': 'bomb_house_skip',
    },
    {
        'name': 'lanayru twilight',
        'description': 'Lanayru Twilight tears',
        'filename': 'lanayru_twilight',
    },
    {
        'name': 'waterfall sidehop',
        'description': 'Waterfall sidehop after Rutela skip',
        'filename': 'waterfall_sidehop',
    },
    {
        'name': 'boss bug',
        'description': 'Lanayru Twilight boss bug',
        'filename': 'boss_bug',
        'setflags': SetFlags.POS,
        'pos': (-89100.00, -18811.2363, 39410.00),
        'angle': 21504,
    },
    {
        'name': 'iza',
        'description': 'Steal Iza\'s bomb bag',
        'filename': 'iza',
        'setflags': SetFlags.POS,
        'pos': (5979.97217, 150.0, -2748.34155),
        'angle': 10114,
    },
    {
        'name': 'plumm oob',
        'description': 'Clip OoB during the Plumm flight',
        'filename': 'plumm_oob',
    },
    {
        'name': 'enter lakebed',
        'description': 'Enter Lakebed with Empty Lake Hylia',
        'filename': 'elh',
    },
    {
        'name': 'lakebed',
        'description': 'The Lakebed Temple segment',
        'filename': 'lakebed_1',
    },
    {
        'name': 'deku toad',
        'description': 'Lakebed Temple miniboss',
        'filename': 'deku_toad',
    },
    {
        'name': 'lakebed bk skip',
        'description': 'Boss Key skip in Lakebed Temple',
        'filename': 'lakebed_bk_skip',
        'setflags': SetFlags.POS | SetFlags.CAM,
        'pos': (71.9835968, 1500.00, 2839.01587),
        'angle': 32767,
        'cam': {
            'center': (71.9835968, 1719.93542, 2969.04565),
            'eye': (71.9835968, 1660.0, 2839.01587)
        },
    },
    {
        'name': 'morpheel',
        'description': 'Morpheel fight (no Zora Armor)',
        'filename': 'onebomb',
        'setflags': SetFlags.POS,
        'pos': (-1193.0, -23999.00, -770.0),
        'angle': 10754,
    },
    {
        'name': 'mdh tower',
        'description': 'MDH tower climb',
        'filename': 'mdh_tower',
    },
    {
        'name': 'mdh bridge',
        'description': 'MDH castle rooftops',
        'filename': 'mdh_bridge',
    },
    {
        'name': 'messenger skip',
        'description': 'LJA to skip the Snowpeak messengers',
        'filename': 'spr_warp',
        'setflags': SetFlags.POS | SetFlags.CAM,
        'pos': (-9294.87988, 980.0, -11712.3838),
        'angle': 346,
        'cam': {
            'center': (-9309.65137, 1280.4469, -12130.7695),
            'eye': (-9294.2207, 1180.0, -11692.3945)
        },
    },
    {
        'name': 'snowpeak',
        'description': 'The Snowpeak Ruins segment',
        'filename': 'spr',
        'setflags': SetFlags.POS,
        'pos': (0.0, -150.0, 6000.0),
        'angle': 33768,
    },
    {
        'name': 'darkhammer',
        'description': 'Snowpeak Ruins miniboss',
        'filename': 'darkhammer',
    },
    {
        'name': 'bulblin camp',
        'description': 'The camp before Arbiter\'s Grounds',
        'filename': 'camp',
    },
    {
        'name': 'arbiter\'s grounds',
        'description': 'The Arbiter\'s Grounds segment',
        'filename': 'ag',
    },
    {
        'name': 'poe 1 skip',
        'description': 'The pillar jump in Arbiter\'s Grounds',
        'filename': 'poe_1_skip',
        'setflags': SetFlags.POS | SetFlags.CAM,
        'pos': (-2046.97168, 0.0, -587.304871),
        'angle': 49030,
        'cam': {
            'center': (-1779.00293, 213.707397, -584.686768),
            'eye': (-2047.97168, 130.16568, -587.317139)
        },
    },
    {
        'name': 'death sword',
        'description': 'Arbiter\'s Grounds miniboss',
        'filename': 'death_sword_skip',
    },
    {
        'name': 'stallord',
        'description': 'Arbiter\'s Grounds boss',
        'filename': 'stallord',
    },
    {
        'name': 'stallord 2',
        'description': 'Stallord 2nd phase',
        'filename': 'stallord',
    },
    {
        'name': 'city early',
        'description': 'Clip to the cannon early',
        'filename': 'cits_early',
    },
    {
        'name': 'city 1',
        'description': 'The 1st City in the Sky segment',
        'filename': 'cits_1',
        'setflags': SetFlags.POS | SetFlags.CAM,
        'pos': (1309.60645, -240.0, 5533.43848),
        'angle': 16384,
        'cam': {
            'center': (1027.53259, -108.096123, 5605.23047),
            'eye': (1313.54285, -234.203003, 5545.16846)
        },
    },
    {
        'name': 'aeralfos skip',
        'description': 'City in the Sky miniboss',
        'filename': 'aeralfos_skip',
    },
    {
        'name': 'city 2',
        'description': 'The 2nd City in the Sky segment',
        'filename': 'cits_2',
    },
    {
        'name': 'fan tower',
        'description': 'Final fan room in City',
        'filename': 'fan_tower',
    },
    {
        'name': 'argorok',
        'description': 'City in the Sky boss',
        'filename': 'argorok',
    },
    {
        'name': 'palace 1',
        'description': 'The 1st Palace of Twilight segment',
        'filename': 'palace_1',
    },
    {
        'name': 'palace 2',
        'description': 'The 2nd Palace of Twilight segment',
        'filename': 'palace_2',
    },
    {
        'name': 'early platform',
        'description': 'Early platform in Palace of Twilight',
        'filename': 'early_platform',
    },
    {
        'name': 'zant',
        'description': 'Palace of Twilight boss',
        'filename': 'zant',
    },
    {
        'name': 'hyrule castle',
        'description': 'The Hyrule Castle segment',
        'filename': 'hc',
    },
    {
        'name': 'darknut fight',
        'description': 'The 1st Darknut fight in Hyrule Castle',
        'filename': 'darknut',
    },
    {
        'name': 'final tower climb',
        'description': 'The tower climb before Ganondorf',
        'filename': 'hc_tower',
    },
    {
        'name': 'beast ganon',
        'description': 'The Beast Ganon fight',
        'filename': 'beast_ganon',
    },
    {
        'name': 'horseback ganon',
        'description': 'The Horseback Ganondorf fight',
        'filename': 'horseback_ganon',
    },
]
