/** @file wordlist_en.c
 *
 *  Wordlist (English).
 *
 **/

#include <SDL.h>

const unsigned int wordlist_en_letter_count = 26;
const unsigned int wordlist_en_word_count   = 0x90b;
const char         wordlist_en_first_letter = 0x41; // А
const char         wordlist_en_last_letter  = 0x5a; // Z
const SDL_bool     wordlist_en_is_cyrillic  = SDL_FALSE;
const char         wordlist_en_title[5]     = { 'W', 'O', 'R', 'D', 'L' };

const Uint32 wordlist_en_hash[0x90b] = {
    0x0cbc8757, // ABACK
    0x0cbc8961, // ABASE
    0x0cbc8982, // ABATE
    0x0cbc8be8, // ABBEY
    0x0cbc8d2d, // ABBOT
    0x0cbca6b1, // ABHOR
    0x0cbca97a, // ABIDE
    0x0cbcb65d, // ABLED
    0x0cbcc300, // ABODE
    0x0cbcc4dd, // ABORT
    0x0cbcc540, // ABOUT
    0x0cbcc552, // ABOVE
    0x0cbcde75, // ABUSE
    0x0cbcef87, // ABYSS
    0x0cbd5138, // ACORN
    0x0cbd5cc8, // ACRID
    0x0cbd661e, // ACTOR
    0x0cbd6af7, // ACUTE
    0x0cbda097, // ADAGE
    0x0cbda1cf, // ADAPT
    0x0cbdb2d3, // ADEPT
    0x0cbdd3ee, // ADMIN
    0x0cbdd3f4, // ADMIT
    0x0cbddb80, // ADOBE
    0x0cbddd5d, // ADOPT
    0x0cbddd90, // ADORE
    0x0cbddd99, // ADORN
    0x0cbdf65f, // ADULT
    0x0cbecef3, // AFFIX
    0x0cbedccc, // AFIRE
    0x0cbef5fe, // AFOOT
    0x0cbef6bc, // AFOUL
    0x0cbf09f7, // AFTER
    0x0cbf4605, // AGAIN
    0x0cbf46e3, // AGAPE
    0x0cbf4767, // AGATE
    0x0cbf57b4, // AGENT
    0x0cbf6867, // AGILE
    0x0cbf68ab, // AGING
    0x0cbf759f, // AGLOW
    0x0cbf8243, // AGONY
    0x0cbf82af, // AGORA
    0x0cbf8dc9, // AGREE
    0x0cbfe258, // AHEAD
    0x0cc06b0a, // AIDER
    0x0cc0abb3, // AISLE
    0x0cc20512, // ALARM
    0x0cc209b6, // ALBUM
    0x0cc2161d, // ALERT
    0x0cc21c5f, // ALGAE
    0x0cc22506, // ALIBI
    0x0cc2256e, // ALIEN
    0x0cc225b0, // ALIGN
    0x0cc2262b, // ALIKE
    0x0cc22796, // ALIVE
    0x0cc231b8, // ALLAY
    0x0cc2323c, // ALLEY
    0x0cc23381, // ALLOT
    0x0cc23384, // ALLOW
    0x0cc23386, // ALLOY
    0x0cc23f1b, // ALOFT
    0x0cc24014, // ALONE
    0x0cc24016, // ALONG
    0x0cc24036, // ALOOF
    0x0cc240fa, // ALOUD
    0x0cc2438b, // ALPHA
    0x0cc253b9, // ALTAR
    0x0cc2543d, // ALTER
    0x0cc2919a, // AMASS
    0x0cc29273, // AMAZE
    0x0cc2940c, // AMBER
    0x0cc294e6, // AMBLE
    0x0cc2a1ea, // AMEND
    0x0cc2b3a2, // AMISS
    0x0cc2b3c9, // AMITY
    0x0cc2cc77, // AMONG
    0x0cc2d074, // AMPLE
    0x0cc2d088, // AMPLY
    0x0cc2e6a0, // AMUSE
    0x0cc335ac, // ANGEL
    0x0cc335b2, // ANGER
    0x0cc3368c, // ANGLE
    0x0cc33766, // ANGRY
    0x0cc33782, // ANGST
    0x0cc33f2f, // ANIME
    0x0cc34790, // ANKLE
    0x0cc3537f, // ANNEX
    0x0cc354ca, // ANNOY
    0x0cc35583, // ANNUL
    0x0cc3578c, // ANODE
    0x0cc36d74, // ANTIC
    0x0cc375ff, // ANVIL
    0x0cc3f2bc, // AORTA
    0x0cc4369d, // APART
    0x0cc4532b, // APHID
    0x0cc45814, // APING
    0x0cc46c2a, // APNEA
    0x0cc47597, // APPLE
    0x0cc475ab, // APPLY
    0x0cc47e85, // APRON
    0x0cc486af, // APTLY
    0x0cc5533b, // ARBOR
    0x0cc55bbd, // ARDOR
    0x0cc55fcc, // ARENA
    0x0cc56939, // ARGUE
    0x0cc57179, // ARISE
    0x0cc58206, // ARMOR
    0x0cc58a35, // AROMA
    0x0cc58aff, // AROSE
    0x0cc59584, // ARRAY
    0x0cc59750, // ARROW
    0x0cc59b88, // ARSON
    0x0cc5a058, // ARTSY
    0x0cc5e3df, // ASCOT
    0x0cc5f7d4, // ASHEN
    0x0cc5fbeb, // ASIDE
    0x0cc604a0, // ASKEW
    0x0cc62626, // ASSAY
    0x0cc626a5, // ASSET
    0x0cc6a2e1, // ATOLL
    0x0cc6a31c, // ATONE
    0x0cc6b7ba, // ATTIC
    0x0cc70017, // AUDIO
    0x0cc7001c, // AUDIT
    0x0cc70e69, // AUGUR
    0x0cc72c16, // AUNTY
    0x0cc77fb2, // AVAIL
    0x0cc791e7, // AVERT
    0x0cc7a0b4, // AVIAN
    0x0cc7bb38, // AVOID
    0x0cc80c1b, // AWAIT
    0x0cc80c4e, // AWAKE
    0x0cc80d34, // AWARD
    0x0cc80d35, // AWARE
    0x0cc80d59, // AWASH
    0x0cc822e4, // AWFUL
    0x0cc847dc, // AWOKE
    0x0cc8b974, // AXIAL
    0x0cc8bb43, // AXIOM
    0x0cc8bb44, // AXION
    0x0cca076c, // AZURE
    0x0cce1d88, // BACON
    0x0cce20b8, // BADGE
    0x0cce2171, // BADLY
    0x0cce2d40, // BAGEL
    0x0cce2d8f, // BAGGY
    0x0cce3e4a, // BAKER
    0x0cce428b, // BALER
    0x0cce439a, // BALMY
    0x0cce4a83, // BANAL
    0x0cce4baf, // BANJO
    0x0cce5c46, // BARGE
    0x0cce5d57, // BARON
    0x0cce5fc8, // BASAL
    0x0cce60c7, // BASIC
    0x0cce60d0, // BASIL
    0x0cce60d2, // BASIN
    0x0cce60d7, // BASIS
    0x0cce6234, // BASTE
    0x0cce6447, // BATCH
    0x0cce64e9, // BATHE
    0x0cce65d9, // BATON
    0x0cce6689, // BATTY
    0x0cce713c, // BAWDY
    0x0cce7b25, // BAYOU
    0x0cd044f8, // BEACH
    0x0cd0452a, // BEADY
    0x0cd046e3, // BEARD
    0x0cd04714, // BEAST
    0x0cd055fc, // BEECH
    0x0cd05670, // BEEFY
    0x0cd05b0f, // BEFIT
    0x0cd05e42, // BEGAN
    0x0cd05e48, // BEGAT
    0x0cd05ecc, // BEGET
    0x0cd05f4a, // BEGIN
    0x0cd060d6, // BEGUN
    0x0cd0686a, // BEING
    0x0cd073c3, // BELCH
    0x0cd07486, // BELIE
    0x0cd074e9, // BELLE
    0x0cd074fd, // BELLY
    0x0cd0755e, // BELOW
    0x0cd07c45, // BENCH
    0x0cd08d97, // BERET
    0x0cd08f49, // BERRY
    0x0cd08f7a, // BERTH
    0x0cd091d8, // BESET
    0x0cd09611, // BETEL
    0x0cd09e93, // BEVEL
    0x0cd0af97, // BEZEL
    0x0cd27be3, // BIBLE
    0x0cd27f48, // BICEP
    0x0cd28371, // BIDDY
    0x0cd2919a, // BIGOT
    0x0cd2a5c8, // BILGE
    0x0cd2a681, // BILLY
    0x0cd2ae4a, // BINGE
    0x0cd2ae54, // BINGO
    0x0cd2b351, // BIOME
    0x0cd2becd, // BIRCH
    0x0cd2c0fe, // BIRTH
    0x0cd2c4a0, // BISON
    0x0cd2c991, // BITTY
    0x0cd41ba2, // BLACK
    0x0cd41bbd, // BLADE
    0x0cd41ce6, // BLAME
    0x0cd41d06, // BLAND
    0x0cd41d0d, // BLANK
    0x0cd41d8b, // BLARE
    0x0cd41dbb, // BLAST
    0x0cd41e93, // BLAZE
    0x0cd42c64, // BLEAK
    0x0cd42c6d, // BLEAT
    0x0cd42ce1, // BLEED
    0x0cd42ced, // BLEEP
    0x0cd42e0a, // BLEND
    0x0cd42ebe, // BLESS
    0x0cd43ef9, // BLIMP
    0x0cd43f0e, // BLIND
    0x0cd43f15, // BLINK
    0x0cd43fc2, // BLISS
    0x0cd43fea, // BLITZ
    0x0cd456f7, // BLOAT
    0x0cd45730, // BLOCK
    0x0cd45832, // BLOKE
    0x0cd45894, // BLOND
    0x0cd458b5, // BLOOD
    0x0cd458be, // BLOOM
    0x0cd459c7, // BLOWN
    0x0cd470ff, // BLUER
    0x0cd47114, // BLUFF
    0x0cd4722a, // BLUNT
    0x0cd4729c, // BLURB
    0x0cd472ae, // BLURT
    0x0cd472c3, // BLUSH
    0x0cd5c2ad, // BOARD
    0x0cd5c2de, // BOAST
    0x0cd5c4f3, // BOBBY
    0x0cd5f862, // BONEY
    0x0cd5f89a, // BONGO
    0x0cd5fa6c, // BONUS
    0x0cd5fc40, // BOOBY
    0x0cd5fe6c, // BOOST
    0x0cd5fe81, // BOOTH
    0x0cd5fe92, // BOOTY
    0x0cd5ff44, // BOOZE
    0x0cd5ff58, // BOOZY
    0x0cd608e1, // BORAX
    0x0cd60a7b, // BORNE
    0x0cd60ee5, // BOSOM
    0x0cd60f75, // BOSSY
    0x0cd61195, // BOTCH
    0x0cd6165a, // BOUGH
    0x0cd616fc, // BOULE
    0x0cd6173d, // BOUND
    0x0cd61e9e, // BOWEL
    0x0cd622e5, // BOXER
    0x0cd765e2, // BRACE
    0x0cd766a7, // BRAID
    0x0cd766b1, // BRAIN
    0x0cd766ea, // BRAKE
    0x0cd7674c, // BRAND
    0x0cd767f5, // BRASH
    0x0cd76800, // BRASS
    0x0cd76855, // BRAVE
    0x0cd7685f, // BRAVO
    0x0cd7687d, // BRAWL
    0x0cd7687f, // BRAWN
    0x0cd776a3, // BREAD
    0x0cd776aa, // BREAK
    0x0cd77727, // BREED
    0x0cd787b5, // BRIAR
    0x0cd787c9, // BRIBE
    0x0cd787f0, // BRICK
    0x0cd7880b, // BRIDE
    0x0cd7882d, // BRIEF
    0x0cd78955, // BRINE
    0x0cd78957, // BRING
    0x0cd7895b, // BRINK
    0x0cd78969, // BRINY
    0x0cd78a00, // BRISK
    0x0cd7a12d, // BROAD
    0x0cd7a23d, // BROIL
    0x0cd7a278, // BROKE
    0x0cd7a2fb, // BROOD
    0x0cd7a302, // BROOK
    0x0cd7a304, // BROOM
    0x0cd7a3a4, // BROTH
    0x0cd7a40d, // BROWN
    0x0cd7bc70, // BRUNT
    0x0cd7bd09, // BRUSH
    0x0cd7bd27, // BRUTE
    0x0cd917fd, // BUDDY
    0x0cd9184c, // BUDGE
    0x0cd92523, // BUGGY
    0x0cd925b4, // BUGLE
    0x0cd92e35, // BUILD
    0x0cd92e45, // BUILT
    0x0cd93a54, // BULGE
    0x0cd93aec, // BULKY
    0x0cd93b0d, // BULLY
    0x0cd94255, // BUNCH
    0x0cd943d1, // BUNNY
    0x0cd95493, // BURLY
    0x0cd954d0, // BURNT
    0x0cd95575, // BURST
    0x0cd957d8, // BUSED
    0x0cd95850, // BUSHY
    0x0cd95bdb, // BUTCH
    0x0cd95e09, // BUTTE
    0x0cd96e70, // BUXOM
    0x0cd9716c, // BUYER
    0x0cdb6b24, // BYLAW
    0x0ce02ff8, // CABAL
    0x0ce03026, // CABBY
    0x0ce03102, // CABIN
    0x0ce0315c, // CABLE
    0x0ce0343c, // CACAO
    0x0ce03519, // CACHE
    0x0ce036a9, // CACTI
    0x0ce038ea, // CADDY
    0x0ce03906, // CADET
    0x0ce045ce, // CAGEY
    0x0ce04ff2, // CAIRN
    0x0ce05f47, // CAMEL
    0x0ce05f4a, // CAMEO
    0x0ce06304, // CANAL
    0x0ce06374, // CANDY
    0x0ce064be, // CANNY
    0x0ce064cb, // CANOE
    0x0ce064d4, // CANON
    0x0ce06c10, // CAPER
    0x0ce06e22, // CAPUT
    0x0ce07410, // CARAT
    0x0ce074d1, // CARGO
    0x0ce075d6, // CAROL
    0x0ce07646, // CARRY
    0x0ce076b6, // CARVE
    0x0ce07ab5, // CASTE
    0x0ce07cc8, // CATCH
    0x0ce07d14, // CATER
    0x0ce07f0a, // CATTY
    0x0ce08235, // CAULK
    0x0ce08316, // CAUSE
    0x0ce08614, // CAVIL
    0x0ce25f86, // CEASE
    0x0ce26a04, // CEDAR
    0x0ce28d74, // CELLO
    0x0ce402fc, // CHAFE
    0x0ce402fd, // CHAFF
    0x0ce40368, // CHAIN
    0x0ce4036c, // CHAIR
    0x0ce403c8, // CHALK
    0x0ce403ee, // CHAMP
    0x0ce40413, // CHANT
    0x0ce40433, // CHAOS
    0x0ce40487, // CHARD
    0x0ce40490, // CHARM
    0x0ce40497, // CHART
    0x0ce404a9, // CHASE
    0x0ce404b1, // CHASM
    0x0ce41366, // CHEAP
    0x0ce4136a, // CHEAT
    0x0ce413a3, // CHECK
    0x0ce413e5, // CHEEK
    0x0ce413ec, // CHEER
    0x0ce415bb, // CHESS
    0x0ce415bc, // CHEST
    0x0ce424a7, // CHICK
    0x0ce424c2, // CHIDE
    0x0ce424e4, // CHIEF
    0x0ce425c9, // CHILD
    0x0ce425ce, // CHILI
    0x0ce425d1, // CHILL
    0x0ce425eb, // CHIME
    0x0ce42608, // CHINA
    0x0ce4269b, // CHIRP
    0x0ce43e2d, // CHOCK
    0x0ce43efa, // CHOIR
    0x0ce43f2f, // CHOKE
    0x0ce44015, // CHORD
    0x0ce44016, // CHORE
    0x0ce44037, // CHOSE
    0x0ce457b3, // CHUCK
    0x0ce45902, // CHUMP
    0x0ce4591e, // CHUNK
    0x0ce459a5, // CHURN
    0x0ce459de, // CHUTE
    0x0ce49c0c, // CIDER
    0x0ce4a84b, // CIGAR
    0x0ce4c64a, // CINCH
    0x0ce4d747, // CIRCA
    0x0ce4e913, // CIVIC
    0x0ce4e91c, // CIVIL
    0x0ce63423, // CLACK
    0x0ce634eb, // CLAIM
    0x0ce63572, // CLAMP
    0x0ce6358a, // CLANG
    0x0ce6358e, // CLANK
    0x0ce63630, // CLASH
    0x0ce63638, // CLASP
    0x0ce6363b, // CLASS
    0x0ce644e8, // CLEAN
    0x0ce644ec, // CLEAR
    0x0ce644ee, // CLEAT
    0x0ce64593, // CLEFT
    0x0ce64716, // CLERK
    0x0ce6562b, // CLICK
    0x0ce65689, // CLIFF
    0x0ce6576c, // CLIMB
    0x0ce65792, // CLING
    0x0ce65796, // CLINK
    0x0ce66f6f, // CLOAK
    0x0ce66fb1, // CLOCK
    0x0ce67116, // CLONE
    0x0ce671bb, // CLOSE
    0x0ce671df, // CLOTH
    0x0ce671fc, // CLOUD
    0x0ce6720c, // CLOUT
    0x0ce6721e, // CLOVE
    0x0ce67248, // CLOWN
    0x0ce68937, // CLUCK
    0x0ce68972, // CLUED
    0x0ce68a86, // CLUMP
    0x0ce68a9e, // CLUNG
    0x0ce7d943, // COACH
    0x0ce7db5f, // COAST
    0x0ce7df6c, // COBRA
    0x0ce7e34a, // COCOA
    0x0ce809a0, // COLON
    0x0ce809a4, // COLOR
    0x0ce80c9d, // COMET
    0x0ce80cc3, // COMFY
    0x0ce80d10, // COMIC
    0x0ce80d92, // COMMA
    0x0ce81090, // CONCH
    0x0ce810b8, // CONDO
    0x0ce81151, // CONIC
    0x0ce81b1f, // COPSE
    0x0ce82156, // CORAL
    0x0ce821e0, // CORER
    0x0ce82310, // CORNY
    0x0ce82e57, // COUCH
    0x0ce82edb, // COUGH
    0x0ce82f7c, // COULD
    0x0ce82fce, // COUNT
    0x0ce83001, // COUPE
    0x0ce83052, // COURT
    0x0ce832e0, // COVEN
    0x0ce832e4, // COVER
    0x0ce832e6, // COVET
    0x0ce832eb, // COVEY
    0x0ce83725, // COWER
    0x0ce84095, // COYLY
    0x0ce97e69, // CRACK
    0x0ce97ed5, // CRAFT
    0x0ce97fb8, // CRAMP
    0x0ce97fce, // CRANE
    0x0ce97fd4, // CRANK
    0x0ce98076, // CRASH
    0x0ce98081, // CRASS
    0x0ce98094, // CRATE
    0x0ce980d6, // CRAVE
    0x0ce980fe, // CRAWL
    0x0ce9815a, // CRAZE
    0x0ce9816e, // CRAZY
    0x0ce98f2b, // CREAK
    0x0ce98f2d, // CREAM
    0x0ce98f92, // CREDO
    0x0ce98fa8, // CREED
    0x0ce98faf, // CREEK
    0x0ce98fb4, // CREEP
    0x0ce990b1, // CREME
    0x0ce99114, // CREPE
    0x0ce99123, // CREPT
    0x0ce99185, // CRESS
    0x0ce99186, // CREST
    0x0ce9a071, // CRICK
    0x0ce9a0ac, // CRIED
    0x0ce9a0ba, // CRIER
    0x0ce9a1b5, // CRIME
    0x0ce9a1c0, // CRIMP
    0x0ce9a286, // CRISP
    0x0ce9b9b5, // CROAK
    0x0ce9b9f7, // CROCK
    0x0ce9bb5c, // CRONE
    0x0ce9bb70, // CRONY
    0x0ce9bb83, // CROOK
    0x0ce9bc0f, // CROSS
    0x0ce9bc4e, // CROUP
    0x0ce9bc84, // CROWD
    0x0ce9bc8e, // CROWN
    0x0ce9d398, // CRUDE
    0x0ce9d3c0, // CRUEL
    0x0ce9d4be, // CRUMB
    0x0ce9d4cc, // CRUMP
    0x0ce9d58a, // CRUSH
    0x0ce9d596, // CRUST
    0x0ce9e637, // CRYPT
    0x0ceb288b, // CUBIC
    0x0ceb5761, // CUMIN
    0x0ceb6ca7, // CURIO
    0x0ceb6d14, // CURLY
    0x0ceb6dda, // CURRY
    0x0ceb6de7, // CURSE
    0x0ceb6e4a, // CURVE
    0x0ceb6e5e, // CURVY
    0x0ceb751f, // CUTIE
    0x0ced599a, // CYBER
    0x0ced5eb5, // CYCLE
    0x0ced8d1b, // CYNIC
    0x0cf2516b, // DADDY
    0x0cf267b8, // DAILY
    0x0cf2687e, // DAIRY
    0x0cf2689f, // DAISY
    0x0cf2747b, // DALLY
    0x0cf27bc0, // DANCE
    0x0cf27bf5, // DANDY
    0x0cf297a0, // DATUM
    0x0cf29b01, // DAUNT
    0x0cf4772f, // DEALT
    0x0cf4782b, // DEATH
    0x0cf47a03, // DEBAR
    0x0cf47b0d, // DEBIT
    0x0cf47c8c, // DEBUG
    0x0cf47c99, // DEBUT
    0x0cf47e3e, // DECAL
    0x0cf47e4b, // DECAY
    0x0cf48012, // DECOR
    0x0cf48019, // DECOY
    0x0cf4807c, // DECRY
    0x0cf48b8b, // DEFER
    0x0cf4988c, // DEIGN
    0x0cf49a44, // DEITY
    0x0cf4a494, // DELAY
    0x0cf4a6ef, // DELTA
    0x0cf4a735, // DELVE
    0x0cf4aa98, // DEMON
    0x0cf4ab62, // DEMUR
    0x0cf4ae12, // DENIM
    0x0cf4af54, // DENSE
    0x0cf4b761, // DEPOT
    0x0cf4b7fa, // DEPTH
    0x0cf4be3b, // DERBY
    0x0cf4c719, // DETER
    0x0cf4c869, // DETOX
    0x0cf4cb0b, // DEUCE
    0x0cf4d019, // DEVIL
    0x0cf6a97e, // DIARY
    0x0cf6b053, // DICEY
    0x0cf6c1d6, // DIGIT
    0x0cf6d783, // DILLY
    0x0cf6dbc4, // DIMLY
    0x0cf6df17, // DINER
    0x0cf6df56, // DINGO
    0x0cf6df60, // DINGY
    0x0cf6e32a, // DIODE
    0x0cf6f050, // DIRGE
    0x0cf6f211, // DIRTY
    0x0cf6f417, // DISCO
    0x0cf6f851, // DITCH
    0x0cf6fa89, // DITTO
    0x0cf6fa93, // DITTY
    0x0cf7011f, // DIVER
    0x0cf714df, // DIZZY
    0x0cf9ff08, // DODGE
    0x0cf9ff1c, // DODGY
    0x0cfa0c8d, // DOGMA
    0x0cfa1536, // DOING
    0x0cfa21c9, // DOLLY
    0x0cfa2aa7, // DONOR
    0x0cfa2b6f, // DONUT
    0x0cfa31e6, // DOPEY
    0x0cfa46c3, // DOUBT
    0x0cfa475c, // DOUGH
    0x0cfa4f8c, // DOWDY
    0x0cfa4fa0, // DOWEL
    0x0cfa50d6, // DOWNY
    0x0cfa515a, // DOWRY
    0x0cfa5c65, // DOZEN
    0x0cfb9756, // DRAFT
    0x0cfb97b3, // DRAIN
    0x0cfb97ec, // DRAKE
    0x0cfb982a, // DRAMA
    0x0cfb9855, // DRANK
    0x0cfb9891, // DRAPE
    0x0cfb997f, // DRAWL
    0x0cfb9981, // DRAWN
    0x0cfba7a5, // DREAD
    0x0cfba7ae, // DREAM
    0x0cfbaa06, // DRESS
    0x0cfbb92d, // DRIED
    0x0cfbb93b, // DRIER
    0x0cfbb95e, // DRIFT
    0x0cfbba1c, // DRILL
    0x0cfbba5d, // DRINK
    0x0cfbbb5f, // DRIVE
    0x0cfbd347, // DROIT
    0x0cfbd3a2, // DROLL
    0x0cfbd3dd, // DRONE
    0x0cfbd405, // DROOL
    0x0cfbd409, // DROOP
    0x0cfbd490, // DROSS
    0x0cfbd4e5, // DROVE
    0x0cfbd50f, // DROWN
    0x0cfbecbd, // DRUID
    0x0cfbed69, // DRUNK
    0x0cfbfd4b, // DRYER
    0x0cfbfe39, // DRYLY
    0x0cfd4542, // DUCHY
    0x0cfd6c0f, // DULLY
    0x0cfd7071, // DUMMY
    0x0cfd70d4, // DUMPY
    0x0cfd7354, // DUNCE
    0x0cfd89b5, // DUSKY
    0x0cfd8ade, // DUSTY
    0x0cfd8cdd, // DUTCH
    0x0cfd95ad, // DUVET
    0x0cfe56b9, // DWARF
    0x0cfe66fd, // DWELL
    0x0cfe6705, // DWELT
    0x0cff9100, // DYING
    0x0d0476c9, // EAGER
    0x0d0477a3, // EAGLE
    0x0d04a682, // EARLY
    0x0d04a779, // EARTH
    0x0d04a9cf, // EASEL
    0x0d04ae12, // EATEN
    0x0d04ae16, // EATER
    0x0d052662, // EBONY
    0x0d05a44e, // ECLAT
    0x0d06242e, // EDICT
    0x0d062496, // EDIFY
    0x0d06d78f, // EERIE
    0x0d07efdc, // EGRET
    0x0d08da36, // EIGHT
    0x0d095d70, // EJECT
    0x0d09fc33, // EKING
    0x0d0a6750, // ELATE
    0x0d0a6afe, // ELBOW
    0x0d0a7231, // ELDER
    0x0d0a7632, // ELECT
    0x0d0a76bb, // ELEGY
    0x0d0a7b33, // ELFIN
    0x0d0a8748, // ELIDE
    0x0d0a8958, // ELITE
    0x0d0aa25a, // ELOPE
    0x0d0aba54, // ELUDE
    0x0d0af24d, // EMAIL
    0x0d0af602, // EMBED
    0x0d0af610, // EMBER
    0x0d0afa44, // EMCEE
    0x0d0b3394, // EMPTY
    0x0d0b7df0, // ENACT
    0x0d0b8c42, // ENDOW
    0x0d0b902b, // ENEMA
    0x0d0b9043, // ENEMY
    0x0d0ba5ca, // ENJOY
    0x0d0bb784, // ENNUI
    0x0d0bccc5, // ENSUE
    0x0d0bcf03, // ENTER
    0x0d0bd0b7, // ENTRY
    0x0d0bd8d6, // ENVOY
    0x0d0cd234, // EPOCH
    0x0d0cd4fa, // EPOXY
    0x0d0d77dd, // EQUAL
    0x0d0d78e9, // EQUIP
    0x0d0db175, // ERASE
    0x0d0dc078, // ERECT
    0x0d0deb14, // ERODE
    0x0d0df94f, // ERROR
    0x0d0e0635, // ERUPT
    0x0d0e882a, // ESSAY
    0x0d0e8ce8, // ESTER
    0x0d0ee63d, // ETHER
    0x0d0ee6b2, // ETHIC
    0x0d0ee788, // ETHOS
    0x0d0f1d5c, // ETUDE
    0x0d0fe10a, // EVADE
    0x0d0ff367, // EVENT
    0x0d0ff3f0, // EVERY
    0x0d100300, // EVICT
    0x0d101d7f, // EVOKE
    0x0d10f9ba, // EXACT
    0x0d10fae3, // EXALT
    0x0d110276, // EXCEL
    0x0d110cad, // EXERT
    0x0d111cdc, // EXILE
    0x0d111dd2, // EXIST
    0x0d1139c3, // EXPEL
    0x0d114c11, // EXTOL
    0x0d114c69, // EXTRA
    0x0d114ff7, // EXULT
    0x0d11a981, // EYING
    0x0d167adf, // FABLE
    0x0d167e48, // FACET
    0x0d1698f7, // FAINT
    0x0d169980, // FAIRY
    0x0d1699b1, // FAITH
    0x0d16a650, // FALSE
    0x0d16acd6, // FANCY
    0x0d16ae41, // FANNY
    0x0d16bdc6, // FARCE
    0x0d16c60d, // FATAL
    0x0d16c88d, // FATTY
    0x0d16cbc1, // FAULT
    0x0d16cbf0, // FAUNA
    0x0d16d063, // FAVOR
    0x0d18a918, // FEAST
    0x0d18af40, // FECAL
    0x0d18c98e, // FEIGN
    0x0d18d6e9, // FELLA
    0x0d18d759, // FELON
    0x0d18db4f, // FEMME
    0x0d18dc64, // FEMUR
    0x0d18de46, // FENCE
    0x0d18ef0f, // FERAL
    0x0d18f14d, // FERRY
    0x0d18f791, // FETAL
    0x0d18f7cf, // FETCH
    0x0d18f891, // FETID
    0x0d18fa2c, // FETUS
    0x0d19009d, // FEVER
    0x0d1904de, // FEWER
    0x0d1add0d, // FIBER
    0x0d1adead, // FIBRE
    0x0d1ae35f, // FICUS
    0x0d1aeaa9, // FIELD
    0x0d1aeaeb, // FIEND
    0x0d1aeb84, // FIERY
    0x0d1aeff6, // FIFTH
    0x0d1af007, // FIFTY
    0x0d1af2b7, // FIGHT
    0x0d1b0797, // FILER
    0x0d1b0799, // FILET
    0x0d1b0885, // FILLY
    0x0d1b08a6, // FILMY
    0x0d1b097c, // FILTH
    0x0d1b0f8f, // FINAL
    0x0d1b0fcd, // FINCH
    0x0d1b1019, // FINER
    0x0d1b22ed, // FIRST
    0x0d1b25c8, // FISHY
    0x0d1b3aa3, // FIXER
    0x0d1b45e1, // FIZZY
    0x0d1ba25a, // FJORD
    0x0d1c7da6, // FLACK
    0x0d1c7e6d, // FLAIL
    0x0d1c7e73, // FLAIR
    0x0d1c7ea8, // FLAKE
    0x0d1c7ebc, // FLAKY
    0x0d1c7eea, // FLAME
    0x0d1c7f11, // FLANK
    0x0d1c7f8f, // FLARE
    0x0d1c7fb3, // FLASH
    0x0d1c7fb6, // FLASK
    0x0d1c8eaa, // FLECK
    0x0d1c8ef5, // FLEET
    0x0d1c90b7, // FLESH
    0x0d1c9fae, // FLICK
    0x0d1c9ff7, // FLIER
    0x0d1ca115, // FLING
    0x0d1ca122, // FLINT
    0x0d1ca1a6, // FLIRT
    0x0d1cb8fb, // FLOAT
    0x0d1cb934, // FLOCK
    0x0d1cbab9, // FLOOD
    0x0d1cbac7, // FLOOR
    0x0d1cbb19, // FLORA
    0x0d1cbb4c, // FLOSS
    0x0d1cbb8d, // FLOUR
    0x0d1cbb8f, // FLOUT
    0x0d1cbbcb, // FLOWN
    0x0d1cd318, // FLUFF
    0x0d1cd379, // FLUID
    0x0d1cd3bc, // FLUKE
    0x0d1cd3fe, // FLUME
    0x0d1cd421, // FLUNG
    0x0d1cd425, // FLUNK
    0x0d1cd4c7, // FLUSH
    0x0d1cd4e5, // FLUTE
    0x0d1ce407, // FLYER
    0x0d1e2421, // FOAMY
    0x0d1e2b0a, // FOCAL
    0x0d1e2da5, // FOCUS
    0x0d1e3ce1, // FOGGY
    0x0d1e46ea, // FOIST
    0x0d1e525e, // FOLIO
    0x0d1e52cb, // FOLLY
    0x0d1e6ae6, // FORAY
    0x0d1e6b14, // FORCE
    0x0d1e6b98, // FORGE
    0x0d1e6ba2, // FORGO
    0x0d1e6d45, // FORTE
    0x0d1e6d48, // FORTH
    0x0d1e6d59, // FORTY
    0x0d1e6d6e, // FORUM
    0x0d1e7941, // FOUND
    0x0d1e892a, // FOYER
    0x0d1fc8b3, // FRAIL
    0x0d1fc930, // FRAME
    0x0d1fc957, // FRANK
    0x0d1fca37, // FRAUD
    0x0d1fd8ae, // FREAK
    0x0d1fd92b, // FREED
    0x0d1fd939, // FREER
    0x0d1fdafd, // FRESH
    0x0d1fe9b9, // FRIAR
    0x0d1fea2f, // FRIED
    0x0d1feb1e, // FRILL
    0x0d1fec04, // FRISK
    0x0d1fec34, // FRITZ
    0x0d20037a, // FROCK
    0x0d2004de, // FROND
    0x0d2004ee, // FRONT
    0x0d200593, // FROST
    0x0d2005a8, // FROTH
    0x0d200611, // FROWN
    0x0d20066b, // FROZE
    0x0d201dcf, // FRUIT
    0x0d217a50, // FUDGE
    0x0d2188e1, // FUGUE
    0x0d219d11, // FULLY
    0x0d21a4de, // FUNGI
    0x0d21a572, // FUNKY
    0x0d21a5d5, // FUNNY
    0x0d21b6f3, // FUROR
    0x0d21b75d, // FURRY
    0x0d21bbbf, // FUSSY
    0x0d21da6d, // FUZZY
    0x0d28a39e, // GAFFE
    0x0d28b13b, // GAILY
    0x0d28c151, // GAMER
    0x0d28c248, // GAMMA
    0x0d28c363, // GAMUT
    0x0d28dcac, // GASSY
    0x0d28e33f, // GAUDY
    0x0d28e38e, // GAUGE
    0x0d28e484, // GAUNT
    0x0d28e601, // GAUZE
    0x0d28e794, // GAVEL
    0x0d28eca8, // GAWKY
    0x0d28f45d, // GAYER
    0x0d28f54b, // GAYLY
    0x0d28f89e, // GAZER
    0x0d2ac90e, // GECKO
    0x0d2ad19a, // GEEKY
    0x0d2ad28e, // GEESE
    0x0d2af78d, // GENIE
    0x0d2af8b6, // GENRE
    0x0d2ca24a, // GHOST
    0x0d2ca284, // GHOUL
    0x0d2cf278, // GIANT
    0x0d2cfdf6, // GIDDY
    0x0d2d32f1, // GIPSY
    0x0d2d3a8c, // GIRLY
    0x0d2d3b83, // GIRTH
    0x0d2d4a9e, // GIVEN
    0x0d2d4aa2, // GIVER
    0x0d2e9642, // GLADE
    0x0d2e978b, // GLAND
    0x0d2e9810, // GLARE
    0x0d2e983f, // GLASS
    0x0d2e9918, // GLAZE
    0x0d2ea6eb, // GLEAM
    0x0d2ea6ec, // GLEAN
    0x0d2eb84a, // GLIDE
    0x0d2eb9a3, // GLINT
    0x0d2ed17c, // GLOAT
    0x0d2ed18e, // GLOBE
    0x0d2ed343, // GLOOM
    0x0d2ed3b2, // GLORY
    0x0d2ed3cd, // GLOSS
    0x0d2ed422, // GLOVE
    0x0d2efde9, // GLYPH
    0x0d2fb0f6, // GNASH
    0x0d2febbb, // GNOME
    0x0d304944, // GODLY
    0x0d305eb9, // GOING
    0x0d306a59, // GOLEM
    0x0d306b4c, // GOLLY
    0x0d30724e, // GONAD
    0x0d3072e0, // GONER
    0x0d307707, // GOODY
    0x0d307728, // GOOEY
    0x0d307749, // GOOFY
    0x0d3078e2, // GOOSE
    0x0d308419, // GORGE
    0x0d3090dc, // GOUGE
    0x0d309246, // GOURD
    0x0d31e067, // GRACE
    0x0d31e088, // GRADE
    0x0d31e0d9, // GRAFT
    0x0d31e134, // GRAIL
    0x0d31e136, // GRAIN
    0x0d31e1d1, // GRAND
    0x0d31e1e1, // GRANT
    0x0d31e214, // GRAPE
    0x0d31e217, // GRAPH
    0x0d31e282, // GRASP
    0x0d31e285, // GRASS
    0x0d31e298, // GRATE
    0x0d31e2da, // GRAVE
    0x0d31e2ee, // GRAVY
    0x0d31e35e, // GRAZE
    0x0d31f138, // GREAT
    0x0d31f1ac, // GREED
    0x0d31f1b6, // GREEN
    0x0d31f1bc, // GREET
    0x0d3202b2, // GRIEF
    0x0d32039f, // GRILL
    0x0d3203b9, // GRIME
    0x0d3203cd, // GRIMY
    0x0d3203d9, // GRIND
    0x0d32041c, // GRIPE
    0x0d321bbc, // GROAN
    0x0d321cc4, // GROIN
    0x0d321d89, // GROOM
    0x0d321da2, // GROPE
    0x0d321e13, // GROSS
    0x0d321e52, // GROUP
    0x0d321e56, // GROUT
    0x0d321e68, // GROVE
    0x0d321e90, // GROWL
    0x0d321e92, // GROWN
    0x0d3235c4, // GRUEL
    0x0d3235df, // GRUFF
    0x0d3236f5, // GRUNT
    0x0d338778, // GUARD
    0x0d3387f9, // GUAVA
    0x0d3398ac, // GUESS
    0x0d3398ad, // GUEST
    0x0d33a7b3, // GUIDE
    0x0d33a8ba, // GUILD
    0x0d33a8bb, // GUILE
    0x0d33a8ca, // GUILT
    0x0d33a9a2, // GUISE
    0x0d33b458, // GULCH
    0x0d33b592, // GULLY
    0x0d33b87f, // GUMBO
    0x0d33b9f4, // GUMMY
    0x0d33c71a, // GUPPY
    0x0d33d457, // GUSTO
    0x0d33d461, // GUSTY
    0x0d35f901, // GYPSY
    0x0d3aab8d, // HABIT
    0x0d3aca82, // HAIRY
    0x0d3ad7b5, // HALVE
    0x0d3addf9, // HANDY
    0x0d3ae807, // HAPPY
    0x0d3aeefd, // HARDY
    0x0d3aef12, // HAREM
    0x0d3af089, // HARPY
    0x0d3af0cb, // HARRY
    0x0d3af0db, // HARSH
    0x0d3af53a, // HASTE
    0x0d3af54e, // HASTY
    0x0d3af74d, // HATCH
    0x0d3af799, // HATER
    0x0d3afd05, // HAUNT
    0x0d3afdbc, // HAUTE
    0x0d3b0017, // HAVEN
    0x0d3b0156, // HAVOC
    0x0d3b1119, // HAZEL
    0x0d3cd830, // HEADY
    0x0d3cd9e9, // HEARD
    0x0d3cd9f9, // HEART
    0x0d3cda2f, // HEATH
    0x0d3cda6e, // HEAVE
    0x0d3cda82, // HEAVY
    0x0d3ce542, // HEDGE
    0x0d3cef85, // HEFTY
    0x0d3cfc22, // HEIST
    0x0d3d079f, // HELIX
    0x0d3d07f9, // HELLO
    0x0d3d0f48, // HENCE
    0x0d3d21e1, // HERON
    0x0d3f3987, // HILLY
    0x0d3f4150, // HINGE
    0x0d3f4b05, // HIPPO
    0x0d3f4b0f, // HIPPY
    0x0d3f5a55, // HITCH
    0x0d4255b3, // HOARD
    0x0d4257f9, // HOBBY
    0x0d4277ec, // HOIST
    0x0d4283cd, // HOLLY
    0x0d428720, // HOMER
    0x0d428b68, // HONEY
    0x0d428cab, // HONOR
    0x0d429c37, // HORDE
    0x0d429d95, // HORNY
    0x0d429e26, // HORSE
    0x0d42a4e1, // HOTEL
    0x0d42a5d5, // HOTLY
    0x0d42aa43, // HOUND
    0x0d42aae9, // HOUSE
    0x0d42ad63, // HOVEL
    0x0d42ad69, // HOVER
    0x0d42b190, // HOWDY
    0x0d45d0de, // HUMAN
    0x0d45d1dc, // HUMID
    0x0d45d2b0, // HUMOR
    0x0d45d2c7, // HUMPH
    0x0d45d377, // HUMUS
    0x0d45d55b, // HUNCH
    0x0d45d674, // HUNKY
    0x0d45e85f, // HURRY
    0x0d45ebb9, // HUSKY
    0x0d45ecc1, // HUSSY
    0x0d45eee1, // HUTCH
    0x0d47de4b, // HYDRO
    0x0d47e1fa, // HYENA
    0x0d4802e6, // HYMEN
    0x0d480fad, // HYPER
    0x0d4dfaff, // ICILY
    0x0d4dfb2f, // ICING
    0x0d4e74e4, // IDEAL
    0x0d4e87b7, // IDIOM
    0x0d4e87be, // IDIOT
    0x0d4e9335, // IDLER
    0x0d4ecb63, // IDYLL
    0x0d50399f, // IGLOO
    0x0d52e8e7, // ILIAC
    0x0d535408, // IMAGE
    0x0d535a17, // IMBUE
    0x0d53939c, // IMPEL
    0x0d539490, // IMPLY
    0x0d53e150, // INANE
    0x0d53e5c5, // INBOX
    0x0d53eac6, // INCUR
    0x0d53ecfd, // INDEX
    0x0d53f2a5, // INEPT
    0x0d53f2e7, // INERT
    0x0d53f579, // INFER
    0x0d53fb06, // INGOT
    0x0d540e82, // INLAY
    0x0d540f01, // INLET
    0x0d541781, // INNER
    0x0d542215, // INPUT
    0x0d543107, // INTER
    0x0d5432b1, // INTRO
    0x0d54a457, // IONIC
    0x0d56139a, // IRATE
    0x0d564e76, // IRONY
    0x0d56cce6, // ISLET
    0x0d56ecae, // ISSUE
    0x0d573366, // ITCHY
    0x0d58807e, // IVORY
    0x0d5f2e07, // JAUNT
    0x0d5f44dd, // JAZZY
    0x0d613905, // JELLY
    0x0d61526a, // JERKY
    0x0d615c15, // JETTY
    0x0d6166dc, // JEWEL
    0x0d63503d, // JIFFY
    0x0d66a849, // JOINT
    0x0d66a8ee, // JOIST
    0x0d66afa0, // JOKER
    0x0d66b4cf, // JOLLY
    0x0d66dbfa, // JOUST
    0x0d69dc54, // JUDGE
    0x0d69f115, // JUICE
    0x0d69f129, // JUICY
    0x0d6a0202, // JUMBO
    0x0d6a03da, // JUMPY
    0x0d6a0887, // JUNTA
    0x0d6a0895, // JUNTO
    0x0d6a18f7, // JUROR
    0x0d713172, // KAPPA
    0x0d713991, // KARMA
    0x0d7155d6, // KAYAK
    0x0d73257a, // KEBAB
    0x0d74c7ad, // KHAKI
    0x0d758b6b, // KINKY
    0x0d7590a6, // KIOSK
    0x0d75a61a, // KITTY
    0x0d7810ed, // KNACK
    0x0d78135a, // KNAVE
    0x0d7821a8, // KNEAD
    0x0d78222c, // KNEED
    0x0d782234, // KNEEL
    0x0d782323, // KNELT
    0x0d783352, // KNIFE
    0x0d784c7b, // KNOCK
    0x0d784da5, // KNOLL
    0x0d784f12, // KNOWN
    0x0d789e6d, // KOALA
    0x0d7a65a3, // KRILL
    0x0d830d05, // LABEL
    0x0d830e55, // LABOR
    0x0d831589, // LADEN
    0x0d831667, // LADLE
    0x0d832250, // LAGER
    0x0d833fc8, // LANCE
    0x0d8340e4, // LANKY
    0x0d834893, // LAPEL
    0x0d834a5a, // LAPSE
    0x0d835150, // LARGE
    0x0d83533b, // LARVA
    0x0d835727, // LASSO
    0x0d835951, // LATCH
    0x0d83599d, // LATER
    0x0d8359f3, // LATHE
    0x0d835b7f, // LATTE
    0x0d835e16, // LAUGH
    0x0d836ee2, // LAYER
    0x0d853a02, // LEACH
    0x0d853a76, // LEAFY
    0x0d853b1b, // LEAKY
    0x0d853b79, // LEANT
    0x0d853bbb, // LEAPT
    0x0d853bf7, // LEARN
    0x0d853c0f, // LEASE
    0x0d853c12, // LEASH
    0x0d853c1e, // LEAST
    0x0d853c72, // LEAVE
    0x0d854746, // LEDGE
    0x0d854b06, // LEECH
    0x0d854d06, // LEERY
    0x0d855189, // LEFTY
    0x0d85534a, // LEGAL
    0x0d85541d, // LEGGY
    0x0d856ea0, // LEMON
    0x0d856f6a, // LEMUR
    0x0d857a1d, // LEPER
    0x0d85939d, // LEVEL
    0x0d8593a3, // LEVER
    0x0d87700d, // LIBEL
    0x0d877d0b, // LIEGE
    0x0d8785bd, // LIGHT
    0x0d879658, // LIKEN
    0x0d879a0a, // LILAC
    0x0d879e78, // LIMBO
    0x0d879f64, // LIMIT
    0x0d87a31b, // LINEN
    0x0d87a31f, // LINER
    0x0d87a35e, // LINGO
    0x0d87ac17, // LIPID
    0x0d87bcfb, // LITHE
    0x0d87c527, // LIVER
    0x0d87c59d, // LIVID
    0x0d8911ec, // LLAMA
    0x0d8ab727, // LOAMY
    0x0d8ab7fd, // LOATH
    0x0d8ab9fd, // LOBBY
    0x0d8abe10, // LOCAL
    0x0d8ac0ab, // LOCUS
    0x0d8ac310, // LODGE
    0x0d8acd53, // LOFTY
    0x0d8ad013, // LOGIC
    0x0d8ad01e, // LOGIN
    0x0d8af318, // LOOPY
    0x0d8af367, // LOOSE
    0x0d8b001d, // LORRY
    0x0d8b02aa, // LOSER
    0x0d8b0ced, // LOUSE
    0x0d8b0d01, // LOUSY
    0x0d8b0f6d, // LOVER
    0x0d8b13ae, // LOWER
    0x0d8b149c, // LOWLY
    0x0d8b1ba6, // LOYAL
    0x0d8e0956, // LUCID
    0x0d8e09ad, // LUCKY
    0x0d8e3366, // LUMEN
    0x0d8e34dc, // LUMPY
    0x0d8e3727, // LUNAR
    0x0d8e375f, // LUNCH
    0x0d8e37e0, // LUNGE
    0x0d8e423e, // LUPUS
    0x0d8e4863, // LURCH
    0x0d8e4925, // LURID
    0x0d8e4ee6, // LUSTY
    0x0d905508, // LYING
    0x0d90664f, // LYMPH
    0x0d9068e3, // LYNCH
    0x0d907aa8, // LYRIC
    0x0d95294e, // MACAW
    0x0d952a2d, // MACHO
    0x0d952b77, // MACRO
    0x0d952d85, // MADAM
    0x0d952efc, // MADLY
    0x0d953703, // MAFIA
    0x0d953b46, // MAGIC
    0x0d953bc8, // MAGMA
    0x0d9545fb, // MAIZE
    0x0d9548de, // MAJOR
    0x0d954bd5, // MAKER
    0x0d9553f1, // MAMBO
    0x0d95554e, // MAMMA
    0x0d955566, // MAMMY
    0x0d9558c9, // MANGA
    0x0d9558cd, // MANGE
    0x0d9558d7, // MANGO
    0x0d9558e1, // MANGY
    0x0d95590b, // MANIA
    0x0d95590d, // MANIC
    0x0d955986, // MANLY
    0x0d9559e2, // MANOR
    0x0d9561f4, // MAPLE
    0x0d956950, // MARCH
    0x0d956b50, // MARRY
    0x0d956b60, // MARSH
    0x0d956f23, // MASON
    0x0d956f9e, // MASSE
    0x0d9571d2, // MATCH
    0x0d957225, // MATEY
    0x0d957883, // MAUVE
    0x0d9583a1, // MAXIM
    0x0d9586f3, // MAYBE
    0x0d9588ad, // MAYOR
    0x0d9753bd, // MEALY
    0x0d9753fa, // MEANT
    0x0d9754c5, // MEATY
    0x0d975afe, // MECCA
    0x0d975f08, // MEDAL
    0x0d976005, // MEDIA
    0x0d976007, // MEDIC
    0x0d97818d, // MELEE
    0x0d9782e0, // MELON
    0x0d979ae5, // MERCY
    0x0d979b55, // MERGE
    0x0d979ba6, // MERIT
    0x0d979cd4, // MERRY
    0x0d97a318, // METAL
    0x0d97a3a2, // METER
    0x0d97a54c, // METRO
    0x0d998e7f, // MICRO
    0x0d99914b, // MIDGE
    0x0d9992e6, // MIDST
    0x0d999e3e, // MIGHT
    0x0d99b3eb, // MILKY
    0x0d99b7d4, // MIMIC
    0x0d99bb51, // MINCE
    0x0d99bba0, // MINER
    0x0d99bc1f, // MINIM
    0x0d99bcea, // MINOR
    0x0d99bd96, // MINTY
    0x0d99bdb1, // MINUS
    0x0d99ce89, // MIRTH
    0x0d99d0e5, // MISER
    0x0d99d2ba, // MISSY
    0x0d9cd76d, // MOCHA
    0x0d9cdad2, // MODAL
    0x0d9cdb56, // MODEL
    0x0d9cdb57, // MODEM
    0x0d9cea29, // MOGUL
    0x0d9cf271, // MOIST
    0x0d9cfce0, // MOLAR
    0x0d9cfd4a, // MOLDY
    0x0d9d05ed, // MONEY
    0x0d9d07cb, // MONTH
    0x0d9d0a0d, // MOODY
    0x0d9d0be8, // MOOSE
    0x0d9d1660, // MORAL
    0x0d9d1830, // MORON
    0x0d9d184b, // MORPH
    0x0d9d1d00, // MOSSY
    0x0d9d1f66, // MOTEL
    0x0d9d1fe4, // MOTIF
    0x0d9d20b6, // MOTOR
    0x0d9d2158, // MOTTO
    0x0d9d2496, // MOULT
    0x0d9d24c8, // MOUND
    0x0d9d24d8, // MOUNT
    0x0d9d2556, // MOURN
    0x0d9d256e, // MOUSE
    0x0d9d2592, // MOUTH
    0x0d9d27ee, // MOVER
    0x0d9d2865, // MOVIE
    0x0d9d2c2f, // MOWER
    0x0da0222e, // MUCKY
    0x0da02372, // MUCUS
    0x0da02588, // MUDDY
    0x0da0475e, // MULCH
    0x0da04cfa, // MUMMY
    0x0da04fe0, // MUNCH
    0x0da060a6, // MURAL
    0x0da061fd, // MURKY
    0x0da065db, // MUSHY
    0x0da065e6, // MUSIC
    0x0da0663e, // MUSKY
    0x0da06767, // MUSTY
    0x0da29457, // MYRRH
    0x0da74713, // NADIR
    0x0da75df8, // NAIVE
    0x0da77249, // NANNY
    0x0da785d4, // NASAL
    0x0da78854, // NASTY
    0x0da78a15, // NATAL
    0x0da79297, // NAVAL
    0x0da7931b, // NAVEL
    0x0da97c3a, // NEEDY
    0x0da98d90, // NEIGH
    0x0da9b387, // NERDY
    0x0da9b5c5, // NERVE
    0x0da9c4a5, // NEVER
    0x0da9c8e6, // NEWER
    0x0da9c9d4, // NEWLY
    0x0daba556, // NICER
    0x0daba5ac, // NICHE
    0x0dabad89, // NIECE
    0x0dabb6bf, // NIGHT
    0x0dabd4b5, // NINJA
    0x0dabd551, // NINNY
    0x0dabd606, // NINTH
    0x0daeec35, // NOBLE
    0x0daeec49, // NOBLY
    0x0daf0ae3, // NOISE
    0x0daf0af7, // NOISY
    0x0daf1994, // NOMAD
    0x0daf2469, // NOOSE
    0x0daf3150, // NORTH
    0x0daf33b3, // NOSEY
    0x0daf37a1, // NOTCH
    0x0daf4069, // NOVEL
    0x0db23e58, // NUDGE
    0x0db27b72, // NURSE
    0x0db28429, // NUTTY
    0x0db492f5, // NYLON
    0x0db49751, // NYMPH
    0x0db97cd3, // OAKEN
    0x0db9f173, // OBESE
    0x0dba75a1, // OCCUR
    0x0dba7b8b, // OCEAN
    0x0dbabb58, // OCTAL
    0x0dbabbe4, // OCTET
    0x0dbb0433, // ODDER
    0x0dbb0521, // ODDLY
    0x0dbc24ed, // OFFAL
    0x0dbc2577, // OFFER
    0x0dbc6101, // OFTEN
    0x0dbf6737, // OLDEN
    0x0dbf673b, // OLDER
    0x0dbf7ea4, // OLIVE
    0x0dbfecba, // OMBRE
    0x0dbff80e, // OMEGA
    0x0dc09688, // ONION
    0x0dc0bfce, // ONSET
    0x0dc19e9c, // OPERA
    0x0dc1af20, // OPINE
    0x0dc1b00f, // OPIUM
    0x0dc1dd44, // OPTIC
    0x0dc2a985, // ORBIT
    0x0dc2b181, // ORDER
    0x0dc2bdbc, // ORGAN
    0x0dc3db47, // OTHER
    0x0dc40e53, // OTTER
    0x0dc463cc, // OUGHT
    0x0dc480df, // OUNCE
    0x0dc49a90, // OUTDO
    0x0dc49ab4, // OUTER
    0x0dc49af3, // OUTGO
    0x0dc4d7f6, // OVARY
    0x0dc4d824, // OVATE
    0x0dc4e8f5, // OVERT
    0x0dc4f966, // OVINE
    0x0dc51246, // OVOID
    0x0dc585c9, // OWING
    0x0dc599f0, // OWNER
    0x0dc610de, // OXIDE
    0x0dc74470, // OZONE
    0x0dcb7777, // PADDY
    0x0dcb83cc, // PAGAN
    0x0dcb8e01, // PAINT
    0x0dcb9999, // PALER
    0x0dcb9b6e, // PALSY
    0x0dcba215, // PANEL
    0x0dcba290, // PANIC
    0x0dcba3f0, // PANSY
    0x0dcbaa13, // PAPAL
    0x0dcbaa9d, // PAPER
    0x0dcbb31f, // PARER
    0x0dcbb3d4, // PARKA
    0x0dcbb4d3, // PARRY
    0x0dcbb4e0, // PARSE
    0x0dcbb515, // PARTY
    0x0dcbb93e, // PASTA
    0x0dcbb942, // PASTE
    0x0dcbb956, // PASTY
    0x0dcbbb55, // PATCH
    0x0dcbbc22, // PATIO
    0x0dcbbd76, // PATSY
    0x0dcbbd97, // PATTY
    0x0dcbc1a3, // PAUSE
    0x0dcbd0d9, // PAYEE
    0x0dcbd0e6, // PAYER
    0x0dcd9c03, // PEACE
    0x0dcd9c06, // PEACH
    0x0dcd9df9, // PEARL
    0x0dcda44c, // PECAN
    0x0dcda88b, // PEDAL
    0x0dcdd315, // PENAL
    0x0dcdd350, // PENCE
    0x0dcdd4bb, // PENNE
    0x0dcdd4cf, // PENNY
    0x0dcde457, // PERCH
    0x0dcde521, // PERIL
    0x0dcde570, // PERKY
    0x0dcde9b1, // PESKY
    0x0dcdead0, // PESTO
    0x0dcdec9b, // PETAL
    0x0dcdef1b, // PETTY
    0x0dcf4336, // PHASE
    0x0dcf7e1f, // PHONE
    0x0dcf7e33, // PHONY
    0x0dcf7eef, // PHOTO
    0x0dcfcefc, // PIANO
    0x0dcfd725, // PICKY
    0x0dcfde8b, // PIECE
    0x0dcfe0d0, // PIETY
    0x0dcfe7a5, // PIGGY
    0x0dcffded, // PILOT
    0x0dd004d7, // PINCH
    0x0dd0052a, // PINEY
    0x0dd005f0, // PINKY
    0x0dd0070f, // PINTO
    0x0dd00da5, // PIPER
    0x0dd013e9, // PIQUE
    0x0dd01e5d, // PITCH
    0x0dd01f13, // PITHY
    0x0dd02877, // PIVOT
    0x0dd02fa7, // PIXEL
    0x0dd03024, // PIXIE
    0x0dd03ad3, // PIZZA
    0x0dd172aa, // PLACE
    0x0dd1736f, // PLAID
    0x0dd17379, // PLAIN
    0x0dd1737f, // PLAIT
    0x0dd17415, // PLANE
    0x0dd1741b, // PLANK
    0x0dd17424, // PLANT
    0x0dd174db, // PLATE
    0x0dd1759d, // PLAZA
    0x0dd1836b, // PLEAD
    0x0dd1837b, // PLEAT
    0x0dd194f3, // PLIED
    0x0dd19501, // PLIER
    0x0dd1c7c4, // PLUCK
    0x0dd1c905, // PLUMB
    0x0dd1c908, // PLUME
    0x0dd1c913, // PLUMP
    0x0dd1c92f, // PLUNK
    0x0dd1c9d1, // PLUSH
    0x0dd32af5, // POESY
    0x0dd33b4f, // POINT
    0x0dd33be5, // POISE
    0x0dd342a6, // POKER
    0x0dd34663, // POLAR
    0x0dd3479c, // POLKA
    0x0dd34979, // POLYP
    0x0dd3535e, // POOCH
    0x0dd3595d, // POPPY
    0x0dd36021, // PORCH
    0x0dd364ae, // POSER
    0x0dd36534, // POSIT
    0x0dd3666f, // POSSE
    0x0dd36ce4, // POUCH
    0x0dd36e4b, // POUND
    0x0dd36f26, // POUTY
    0x0dd375b2, // POWER
    0x0dd4be61, // PRANK
    0x0dd4bf8d, // PRAWN
    0x0dd4ce3f, // PREEN
    0x0dd4d012, // PRESS
    0x0dd4def8, // PRICE
    0x0dd4defe, // PRICK
    0x0dd4df19, // PRIDE
    0x0dd4df39, // PRIED
    0x0dd4e042, // PRIME
    0x0dd4e04c, // PRIMO
    0x0dd4e072, // PRINT
    0x0dd4e091, // PRIOR
    0x0dd4e110, // PRISM
    0x0dd4e17f, // PRIVY
    0x0dd4e1ef, // PRIZE
    0x0dd4f85d, // PROBE
    0x0dd4f9e9, // PRONE
    0x0dd4f9eb, // PRONG
    0x0dd4fa0b, // PROOF
    0x0dd4fa8e, // PROSE
    0x0dd4facf, // PROUD
    0x0dd4faf1, // PROVE
    0x0dd4fb19, // PROWL
    0x0dd4fb47, // PROXY
    0x0dd51225, // PRUDE
    0x0dd5136f, // PRUNE
    0x0dd54a82, // PSALM
    0x0dd66718, // PUBIC
    0x0dd66f6e, // PUDGY
    0x0dd677cf, // PUFFY
    0x0dd6929f, // PULPY
    0x0dd692ee, // PULSE
    0x0dd69963, // PUNCH
    0x0dd6a1a7, // PUPAL
    0x0dd6a2af, // PUPIL
    0x0dd6a3a3, // PUPPY
    0x0dd6aaa6, // PUREE
    0x0dd6aab3, // PURER
    0x0dd6aae8, // PURGE
    0x0dd6ac74, // PURSE
    0x0dd6af5e, // PUSHY
    0x0dd6b52b, // PUTTY
    0x0dd8ae7b, // PYGMY
    0x0de87a9a, // QUACK
    0x0de87b61, // QUAIL
    0x0de87b9c, // QUAKE
    0x0de87bc5, // QUALM
    0x0de87c89, // QUARK
    0x0de87c92, // QUART
    0x0de87ca7, // QUASH
    0x0de87ca8, // QUASI
    0x0de88be3, // QUEEN
    0x0de88be7, // QUEER
    0x0de88cc8, // QUELL
    0x0de88d9b, // QUERY
    0x0de88db7, // QUEST
    0x0de88dea, // QUEUE
    0x0de89ca2, // QUICK
    0x0de89ced, // QUIET
    0x0de89dcc, // QUILL
    0x0de89dd4, // QUILT
    0x0de89e91, // QUIRK
    0x0de89ecd, // QUITE
    0x0de8b84f, // QUOTA
    0x0de8b853, // QUOTE
    0x0de8b856, // QUOTH
    0x0def9fa5, // RABBI
    0x0defa087, // RABID
    0x0defa452, // RACER
    0x0defa80f, // RADAR
    0x0defa90e, // RADII
    0x0defa914, // RADIO
    0x0defbf08, // RAINY
    0x0defbf99, // RAISE
    0x0defc18b, // RAJAH
    0x0defcb89, // RALLY
    0x0defcbfc, // RALPH
    0x0defced8, // RAMEN
    0x0defd2d1, // RANCH
    0x0defd303, // RANDY
    0x0defd352, // RANGE
    0x0defdc15, // RAPID
    0x0defe421, // RARER
    0x0defe9d4, // RASPY
    0x0defed24, // RATIO
    0x0defee99, // RATTY
    0x0deff521, // RAVEN
    0x0df0032e, // RAYON
    0x0df00773, // RAZOR
    0x0df1cd08, // REACH
    0x0df1cd14, // REACT
    0x0df1cd3a, // READY
    0x0df1ce36, // REALM
    0x0df1cefc, // REARM
    0x0df1d111, // REBAR
    0x0df1d18f, // REBEL
    0x0df1d3a6, // REBUS
    0x0df1d3a7, // REBUT
    0x0df1d550, // RECAP
    0x0df1d7e6, // RECUR
    0x0df1d7e8, // RECUT
    0x0df1de3e, // REEDY
    0x0df1e299, // REFER
    0x0df1e31f, // REFIT
    0x0df1e650, // REGAL
    0x0df1ea87, // REHAB
    0x0df1ef9a, // REIGN
    0x0df1fba1, // RELAX
    0x0df1fba2, // RELAY
    0x0df1fc94, // RELIC
    0x0df200e6, // REMIT
    0x0df20417, // RENAL
    0x0df204a6, // RENEW
    0x0df20ca6, // REPAY
    0x0df20d1d, // REPEL
    0x0df20e11, // REPLY
    0x0df217b1, // RERUN
    0x0df219e8, // RESET
    0x0df21a66, // RESIN
    0x0df21ddb, // RETCH
    0x0df21fd1, // RETRO
    0x0df21fdb, // RETRY
    0x0df22429, // REUSE
    0x0df226a3, // REVEL
    0x0df228ac, // REVUE
    0x0df395a5, // RHINO
    0x0df3d98a, // RHYME
    0x0df40b9b, // RIDER
    0x0df40bd0, // RIDGE
    0x0df414f7, // RIFLE
    0x0df418c3, // RIGHT
    0x0df418d4, // RIGID
    0x0df419a8, // RIGOR
    0x0df437e6, // RINSE
    0x0df43ea3, // RIPEN
    0x0df43ea7, // RIPER
    0x0df44b66, // RISEN
    0x0df44b6a, // RISER
    0x0df44c37, // RISKY
    0x0df457a3, // RIVAL
    0x0df4582d, // RIVER
    0x0df4582f, // RIVET
    0x0df748d2, // ROACH
    0x0df74aee, // ROAST
    0x0df74ddf, // ROBIN
    0x0df74eab, // ROBOT
    0x0df7526d, // ROCKY
    0x0df755de, // RODEO
    0x0df762a4, // ROGER
    0x0df764a7, // ROGUE
    0x0df785bb, // ROOMY
    0x0df7867c, // ROOST
    0x0df79b3b, // ROTOR
    0x0df79e67, // ROUGE
    0x0df79e6a, // ROUGH
    0x0df79f4d, // ROUND
    0x0df79ff3, // ROUSE
    0x0df7a014, // ROUTE
    0x0df7a273, // ROVER
    0x0df7a69a, // ROWDY
    0x0df7a6b4, // ROWER
    0x0df7aeac, // ROYAL
    0x0dfaa00d, // RUDDY
    0x0dfaa027, // RUDER
    0x0dfaac8e, // RUGBY
    0x0dfac22f, // RULER
    0x0dfac5fc, // RUMBA
    0x0dfac7ba, // RUMOR
    0x0dfad326, // RUPEE
    0x0dfadb2b, // RURAL
    0x0dfae1ec, // RUSTY
    0x0e01c202, // SADLY
    0x0e01c996, // SAFER
    0x0e01d784, // SAINT
    0x0e01e28a, // SALAD
    0x0e01e40a, // SALLY
    0x0e01e462, // SALON
    0x0e01e4d9, // SALSA
    0x0e01e512, // SALTY
    0x0e01e540, // SALVE
    0x0e01e54a, // SALVO
    0x0e01eb84, // SANDY
    0x0e01eb9e, // SANER
    0x0e01f592, // SAPPY
    0x0e0202b8, // SASSY
    0x0e0205a4, // SATIN
    0x0e0207b8, // SATYR
    0x0e020916, // SAUCE
    0x0e02092a, // SAUCY
    0x0e020a7d, // SAUNA
    0x0e020b47, // SAUTE
    0x0e020ef0, // SAVOR
    0x0e020ef7, // SAVOY
    0x0e020fde, // SAVVY
    0x0e02cdec, // SCALD
    0x0e02cded, // SCALE
    0x0e02cdf8, // SCALP
    0x0e02ce01, // SCALY
    0x0e02ce19, // SCAMP
    0x0e02ce3e, // SCANT
    0x0e02ceb3, // SCARE
    0x0e02ceb4, // SCARF
    0x0e02cec7, // SCARY
    0x0e02df33, // SCENE
    0x0e02df42, // SCENT
    0x0e02f061, // SCION
    0x0e0308b6, // SCOFF
    0x0e03097a, // SCOLD
    0x0e0309bd, // SCONE
    0x0e0309e9, // SCOOP
    0x0e0309ff, // SCOPE
    0x0e030a41, // SCORE
    0x0e030a4a, // SCORN
    0x0e030ab1, // SCOUR
    0x0e030ab3, // SCOUT
    0x0e030aed, // SCOWL
    0x0e0314db, // SCRAM
    0x0e0314de, // SCRAP
    0x0e031557, // SCREE
    0x0e031569, // SCREW
    0x0e031764, // SCRUB
    0x0e03176f, // SCRUM
    0x0e0321b3, // SCUBA
    0x0e03f210, // SEDAN
    0x0e03f6bf, // SEEDY
    0x0e04015e, // SEGUE
    0x0e040a85, // SEIZE
    0x0e0418dd, // SEMEN
    0x0e041ee3, // SENSE
    0x0e042617, // SEPIA
    0x0e042e9e, // SERIF
    0x0e043031, // SERUM
    0x0e04304a, // SERVE
    0x0e0438b6, // SETUP
    0x0e043f26, // SEVEN
    0x0e043f2a, // SEVER
    0x0e04436b, // SEWER
    0x0e058aaf, // SHACK
    0x0e058aca, // SHADE
    0x0e058ade, // SHADY
    0x0e058b1b, // SHAFT
    0x0e058bb1, // SHAKE
    0x0e058bc5, // SHAKY
    0x0e058bd2, // SHALE
    0x0e058bd9, // SHALL
    0x0e058be1, // SHALT
    0x0e058bf3, // SHAME
    0x0e058c1a, // SHANK
    0x0e058c56, // SHAPE
    0x0e058c97, // SHARD
    0x0e058c98, // SHARE
    0x0e058c9e, // SHARK
    0x0e058ca3, // SHARP
    0x0e058d1c, // SHAVE
    0x0e058d44, // SHAWL
    0x0e059b78, // SHEAR
    0x0e059bf8, // SHEEN
    0x0e059bfa, // SHEEP
    0x0e059bfc, // SHEER
    0x0e059bfe, // SHEET
    0x0e059c79, // SHEIK
    0x0e059cd7, // SHELF
    0x0e059cdd, // SHELL
    0x0e05acf2, // SHIED
    0x0e05ad23, // SHIFT
    0x0e05ae1c, // SHINE
    0x0e05ae30, // SHINY
    0x0e05aea0, // SHIRE
    0x0e05aea6, // SHIRK
    0x0e05aeaf, // SHIRT
    0x0e05c5fc, // SHOAL
    0x0e05c63d, // SHOCK
    0x0e05c7a2, // SHONE
    0x0e05c7c9, // SHOOK
    0x0e05c7d2, // SHOOT
    0x0e05c826, // SHORE
    0x0e05c82f, // SHORN
    0x0e05c835, // SHORT
    0x0e05c898, // SHOUT
    0x0e05c8aa, // SHOVE
    0x0e05c8d4, // SHOWN
    0x0e05c8df, // SHOWY
    0x0e05d34e, // SHREW
    0x0e05d549, // SHRUB
    0x0e05d54e, // SHRUG
    0x0e05dfc3, // SHUCK
    0x0e05e137, // SHUNT
    0x0e05e1d0, // SHUSH
    0x0e05f1fe, // SHYLY
    0x0e062892, // SIEGE
    0x0e062a81, // SIEVE
    0x0e063144, // SIGHT
    0x0e0631d6, // SIGMA
    0x0e0646f1, // SILKY
    0x0e064712, // SILLY
    0x0e064e57, // SINCE
    0x0e064eab, // SINEW
    0x0e064edb, // SINGE
    0x0e065fa6, // SIREN
    0x0e0665c0, // SISSY
    0x0e067b15, // SIXTH
    0x0e067b26, // SIXTY
    0x0e0731fd, // SKATE
    0x0e075223, // SKIER
    0x0e075238, // SKIFF
    0x0e075304, // SKILL
    0x0e075329, // SKIMP
    0x0e0753d2, // SKIRT
    0x0e07860f, // SKULK
    0x0e078610, // SKULL
    0x0e078651, // SKUNK
    0x0e07bc33, // SLACK
    0x0e07bcfc, // SLAIN
    0x0e07bd9a, // SLANG
    0x0e07bda7, // SLANT
    0x0e07be40, // SLASH
    0x0e07be5e, // SLATE
    0x0e07bea0, // SLAVE
    0x0e07cd79, // SLEEK
    0x0e07cd7e, // SLEEP
    0x0e07cd82, // SLEET
    0x0e07ceed, // SLEPT
    0x0e07de35, // SLICE
    0x0e07de3b, // SLICK
    0x0e07de56, // SLIDE
    0x0e07df7f, // SLIME
    0x0e07df93, // SLIMY
    0x0e07dfa2, // SLING
    0x0e07dfa6, // SLINK
    0x0e07f952, // SLOOP
    0x0e07f968, // SLOPE
    0x0e07f9ce, // SLOSH
    0x0e07f9ef, // SLOTH
    0x0e081296, // SLUMP
    0x0e0812ae, // SLUNG
    0x0e0812b2, // SLUNK
    0x0e08133b, // SLURP
    0x0e081354, // SLUSH
    0x0e082382, // SLYLY
    0x0e084894, // SMACK
    0x0e0849be, // SMALL
    0x0e084a8c, // SMART
    0x0e084aa1, // SMASH
    0x0e08595d, // SMEAR
    0x0e085ac2, // SMELL
    0x0e085aca, // SMELT
    0x0e086bbf, // SMILE
    0x0e086c8b, // SMIRK
    0x0e086cc7, // SMITE
    0x0e086cca, // SMITH
    0x0e088422, // SMOCK
    0x0e088524, // SMOKE
    0x0e088538, // SMOKY
    0x0e08864d, // SMOTE
    0x0e08d4f5, // SNACK
    0x0e08d5bc, // SNAIL
    0x0e08d5f7, // SNAKE
    0x0e08d60b, // SNAKY
    0x0e08d6de, // SNARE
    0x0e08d6e5, // SNARL
    0x0e08e5b7, // SNEAK
    0x0e08e642, // SNEER
    0x0e08f718, // SNIDE
    0x0e08f75b, // SNIFF
    0x0e08f8a4, // SNIPE
    0x0e091214, // SNOOP
    0x0e09126c, // SNORE
    0x0e09127b, // SNORT
    0x0e0912de, // SNOUT
    0x0e091325, // SNOWY
    0x0e092a09, // SNUCK
    0x0e092a67, // SNUFF
    0x0e096311, // SOAPY
    0x0e0965e0, // SOBER
    0x0e097b6e, // SOGGY
    0x0e098fe6, // SOLAR
    0x0e0990e0, // SOLID
    0x0e09928e, // SOLVE
    0x0e099868, // SONAR
    0x0e099961, // SONIC
    0x0e099f12, // SOOTH
    0x0e099f23, // SOOTY
    0x0e09aba4, // SORRY
    0x0e09b7ce, // SOUND
    0x0e09b898, // SOUTH
    0x0e09bf35, // SOWER
    0x0e09edb1, // SPACE
    0x0e09edd2, // SPADE
    0x0e09ef22, // SPANK
    0x0e09efa0, // SPARE
    0x0e09efa6, // SPARK
    0x0e09efc9, // SPASM
    0x0e09f04e, // SPAWN
    0x0e09fe79, // SPEAK
    0x0e09fe80, // SPEAR
    0x0e09febb, // SPECK
    0x0e09fef6, // SPEED
    0x0e09ffe5, // SPELL
    0x0e09ffed, // SPELT
    0x0e0a001f, // SPEND
    0x0e0a002f, // SPENT
    0x0e0a00ac, // SPERM
    0x0e0a0fb9, // SPICE
    0x0e0a0fcd, // SPICY
    0x0e0a0ffa, // SPIED
    0x0e0a1002, // SPIEL
    0x0e0a10c1, // SPIKE
    0x0e0a10d5, // SPIKY
    0x0e0a10e9, // SPILL
    0x0e0a10f1, // SPILT
    0x0e0a1124, // SPINE
    0x0e0a1138, // SPINY
    0x0e0a11a8, // SPIRE
    0x0e0a11ea, // SPITE
    0x0e0a1c49, // SPLAT
    0x0e0a1d51, // SPLIT
    0x0e0a2a0c, // SPOIL
    0x0e0a2a47, // SPOKE
    0x0e0a2acc, // SPOOF
    0x0e0a2ad1, // SPOOK
    0x0e0a2ad2, // SPOOL
    0x0e0a2ad4, // SPOON
    0x0e0a2b2e, // SPORE
    0x0e0a2b3d, // SPORT
    0x0e0a2ba0, // SPOUT
    0x0e0a35d4, // SPRAY
    0x0e0a3644, // SPREE
    0x0e0a36ca, // SPRIG
    0x0e0a4436, // SPUNK
    0x0e0a44bd, // SPURN
    0x0e0a44c3, // SPURT
    0x0e0acee3, // SQUAD
    0x0e0acef3, // SQUAT
    0x0e0acfe9, // SQUIB
    0x0e0c1f3b, // STACK
    0x0e0c1f99, // STAFF
    0x0e0c1fb9, // STAGE
    0x0e0c1ffa, // STAID
    0x0e0c2004, // STAIN
    0x0e0c2008, // STAIR
    0x0e0c203d, // STAKE
    0x0e0c205e, // STALE
    0x0e0c2064, // STALK
    0x0e0c2065, // STALL
    0x0e0c208a, // STAMP
    0x0e0c209f, // STAND
    0x0e0c20a6, // STANK
    0x0e0c2124, // STARE
    0x0e0c212a, // STARK
    0x0e0c2133, // START
    0x0e0c2148, // STASH
    0x0e0c2166, // STATE
    0x0e0c21a8, // STAVE
    0x0e0c2ff6, // STEAD
    0x0e0c2ffd, // STEAK
    0x0e0c2ffe, // STEAL
    0x0e0c2fff, // STEAM
    0x0e0c307a, // STEED
    0x0e0c3082, // STEEL
    0x0e0c3086, // STEEP
    0x0e0c3088, // STEER
    0x0e0c3108, // STEIN
    0x0e0c3231, // STERN
    0x0e0c4143, // STICK
    0x0e0c41a1, // STIFF
    0x0e0c426d, // STILL
    0x0e0c4275, // STILT
    0x0e0c42aa, // STING
    0x0e0c42ae, // STINK
    0x0e0c42b7, // STINT
    0x0e0c5ac9, // STOCK
    0x0e0c5b87, // STOIC
    0x0e0c5bcb, // STOKE
    0x0e0c5bec, // STOLE
    0x0e0c5c18, // STOMP
    0x0e0c5c2e, // STONE
    0x0e0c5c42, // STONY
    0x0e0c5c4e, // STOOD
    0x0e0c5c56, // STOOL
    0x0e0c5c5a, // STOOP
    0x0e0c5cb2, // STORE
    0x0e0c5cb8, // STORK
    0x0e0c5cba, // STORM
    0x0e0c5cc6, // STORY
    0x0e0c5d24, // STOUT
    0x0e0c5d36, // STOVE
    0x0e0c674f, // STRAP
    0x0e0c6756, // STRAW
    0x0e0c6758, // STRAY
    0x0e0c6857, // STRIP
    0x0e0c69e7, // STRUT
    0x0e0c744f, // STUCK
    0x0e0c747e, // STUDY
    0x0e0c74ad, // STUFF
    0x0e0c759e, // STUMP
    0x0e0c75b6, // STUNG
    0x0e0c75ba, // STUNK
    0x0e0c75c3, // STUNT
    0x0e0c8676, // STYLE
    0x0e0cae09, // SUAVE
    0x0e0cc4e7, // SUGAR
    0x0e0ccf0b, // SUING
    0x0e0ccfcf, // SUITE
    0x0e0cdb7d, // SULKY
    0x0e0cdb9e, // SULLY
    0x0e0cde5e, // SUMAC
    0x0e0ce462, // SUNNY
    0x0e0cebb4, // SUPER
    0x0e0cf436, // SURER
    0x0e0cf46b, // SURGE
    0x0e0cf524, // SURLY
    0x0e0cf8d1, // SUSHI
    0x0e0dc5a6, // SWAMI
    0x0e0dc5ad, // SWAMP
    0x0e0dc64f, // SWARM
    0x0e0dc66b, // SWASH
    0x0e0dc68c, // SWATH
    0x0e0dd527, // SWEAR
    0x0e0dd529, // SWEAT
    0x0e0dd5a9, // SWEEP
    0x0e0dd5ad, // SWEET
    0x0e0dd68c, // SWELL
    0x0e0dd718, // SWEPT
    0x0e0de6d2, // SWIFT
    0x0e0de790, // SWILL
    0x0e0de7cb, // SWINE
    0x0e0de7cd, // SWING
    0x0e0de856, // SWIRL
    0x0e0de873, // SWISH
    0x0e0e017b, // SWOON
    0x0e0e017d, // SWOOP
    0x0e0e01d4, // SWORD
    0x0e0e01d5, // SWORE
    0x0e0e01de, // SWORN
    0x0e0e1ad9, // SWUNG
    0x0e0f15f2, // SYNOD
    0x0e0f27c8, // SYRUP
    0x0e13d0b7, // TABBY
    0x0e13d1ed, // TABLE
    0x0e13d25a, // TABOO
    0x0e13d5da, // TACIT
    0x0e13d621, // TACKY
    0x0e13e23f, // TAFFY
    0x0e13f005, // TAINT
    0x0e13f758, // TAKEN
    0x0e13f75c, // TAKER
    0x0e13fc8b, // TALLY
    0x0e13fce3, // TALON
    0x0e13ffde, // TAMER
    0x0e14045e, // TANGO
    0x0e140468, // TANGY
    0x0e140ca1, // TAPER
    0x0e140d25, // TAPIR
    0x0e141509, // TARDY
    0x0e14166f, // TAROT
    0x0e141b46, // TASTE
    0x0e141b5a, // TASTY
    0x0e141f9b, // TATTY
    0x0e142311, // TAUNT
    0x0e142b98, // TAWNY
    0x0e15fe0a, // TEACH
    0x0e16000a, // TEARY
    0x0e160017, // TEASE
    0x0e160aff, // TEDDY
    0x0e16113f, // TEETH
    0x0e1632ca, // TEMPO
    0x0e1635a5, // TENET
    0x0e1636ed, // TENOR
    0x0e163764, // TENSE
    0x0e163788, // TENTH
    0x0e163e18, // TEPEE
    0x0e163e9b, // TEPID
    0x0e164843, // TERRA
    0x0e164868, // TERSE
    0x0e164cde, // TESTY
    0x0e17a49b, // THANK
    0x0e17b4a0, // THEFT
    0x0e17b501, // THEIR
    0x0e17b578, // THEME
    0x0e17b61d, // THERE
    0x0e17b63e, // THESE
    0x0e17b65b, // THETA
    0x0e17c538, // THICK
    0x0e17c575, // THIEF
    0x0e17c5b9, // THIGH
    0x0e17c69f, // THING
    0x0e17c6a3, // THINK
    0x0e17c720, // THIRD
    0x0e17e025, // THONG
    0x0e17e0b0, // THORN
    0x0e17e0c8, // THOSE
    0x0e17ebbd, // THREE
    0x0e17ebcf, // THREW
    0x0e17ed04, // THROB
    0x0e17ed19, // THROW
    0x0e17edd5, // THRUM
    0x0e17f985, // THUMB
    0x0e17f993, // THUMP
    0x0e180a8c, // THYME
    0x0e183176, // TIARA
    0x0e18348e, // TIBIA
    0x0e183c13, // TIDAL
    0x0e184960, // TIGER
    0x0e1849c5, // TIGHT
    0x0e185e77, // TILDE
    0x0e1862e6, // TIMER
    0x0e18635c, // TIMID
    0x0e18717e, // TIPSY
    0x0e188025, // TITAN
    0x0e188103, // TITHE
    0x0e188187, // TITLE
    0x0e1b7bf0, // TOAST
    0x0e1b8666, // TODAY
    0x0e1b86c9, // TODDY
    0x0e1ba4a6, // TOKEN
    0x0e1bb0e3, // TONAL
    0x0e1bb19e, // TONGA
    0x0e1bb1e2, // TONIC
    0x0e1bb793, // TOOTH
    0x0e1bb973, // TOPAZ
    0x0e1bba64, // TOPIC
    0x0e1bc225, // TORCH
    0x0e1bc43c, // TORSO
    0x0e1bc482, // TORUS
    0x0e1bca69, // TOTAL
    0x0e1bcaee, // TOTEM
    0x0e1bcee8, // TOUCH
    0x0e1bcf6c, // TOUGH
    0x0e1bd7b0, // TOWEL
    0x0e1bd7b6, // TOWER
    0x0e1bdc6c, // TOXIC
    0x0e1bdc77, // TOXIN
    0x0e1d1ef4, // TRACE
    0x0e1d1efa, // TRACK
    0x0e1d1f03, // TRACT
    0x0e1d1f15, // TRADE
    0x0e1d1fc1, // TRAIL
    0x0e1d1fc3, // TRAIN
    0x0e1d1fc9, // TRAIT
    0x0e1d2049, // TRAMP
    0x0e1d2107, // TRASH
    0x0e1d218f, // TRAWL
    0x0e1d2fb5, // TREAD
    0x0e1d2fc5, // TREAT
    0x0e1d3162, // TREND
    0x0e1d40b9, // TRIAD
    0x0e1d40c1, // TRIAL
    0x0e1d40db, // TRIBE
    0x0e1d40fc, // TRICE
    0x0e1d4102, // TRICK
    0x0e1d413d, // TRIED
    0x0e1d42a9, // TRIPE
    0x0e1d432d, // TRITE
    0x0e1d5bb2, // TROLL
    0x0e1d5c19, // TROOP
    0x0e1d5c2f, // TROPE
    0x0e1d5ce3, // TROUT
    0x0e1d5cf5, // TROVE
    0x0e1d7408, // TRUCE
    0x0e1d740e, // TRUCK
    0x0e1d7457, // TRUER
    0x0e1d7545, // TRULY
    0x0e1d755d, // TRUMP
    0x0e1d7579, // TRUNK
    0x0e1d7626, // TRUSS
    0x0e1d7627, // TRUST
    0x0e1d763c, // TRUTH
    0x0e1d872b, // TRYST
    0x0e1ec81d, // TUBAL
    0x0e1ec8a7, // TUBER
    0x0e1ef3b3, // TULIP
    0x0e1ef40b, // TULLE
    0x0e1ef8bc, // TUMOR
    0x0e1efc28, // TUNIC
    0x0e1f0c51, // TURBO
    0x0e1f1683, // TUTOR
    0x0e1fde46, // TWANG
    0x0e1feda1, // TWEAK
    0x0e1fee1e, // TWEED
    0x0e1fee2e, // TWEET
    0x0e1ffee1, // TWICE
    0x0e20004c, // TWINE
    0x0e2000d7, // TWIRL
    0x0e200100, // TWIST
    0x0e2001a5, // TWIXT
    0x0e211910, // TYING
    0x0e279739, // UDDER
    0x0e2bf600, // ULCER
    0x0e2c3fed, // ULTRA
    0x0e2c7fbc, // UMBRA
    0x0e2d0f9c, // UNCLE
    0x0e2d10d4, // UNCUT
    0x0e2d1303, // UNDER
    0x0e2d1379, // UNDID
    0x0e2d1506, // UNDUE
    0x0e2d1b77, // UNFED
    0x0e2d1c0b, // UNFIT
    0x0e2d2870, // UNIFY
    0x0e2d298e, // UNION
    0x0e2d2a2a, // UNITE
    0x0e2d2a3e, // UNITY
    0x0e2d3591, // UNLIT
    0x0e2d394e, // UNMET
    0x0e2d52d4, // UNSET
    0x0e2d578a, // UNTIE
    0x0e2d5791, // UNTIL
    0x0e2d63c8, // UNWED
    0x0e2d711b, // UNZIP
    0x0e2e5ed1, // UPPER
    0x0e2e6b96, // UPSET
    0x0e2f3b7d, // URBAN
    0x0e2f5ae8, // URINE
    0x0e2fc45a, // USAGE
    0x0e2fe1ec, // USHER
    0x0e2fe74b, // USING
    0x0e3018af, // USUAL
    0x0e301ae4, // USURP
    0x0e307368, // UTILE
    0x0e30a159, // UTTER
    0x0e38195d, // VAGUE
    0x0e382ca1, // VALET
    0x0e382d15, // VALID
    0x0e382de9, // VALOR
    0x0e382ea2, // VALUE
    0x0e382ec3, // VALVE
    0x0e383e19, // VAPID
    0x0e383eed, // VAPOR
    0x0e3853d1, // VAULT
    0x0e385413, // VAUNT
    0x0e3a4856, // VEGAN
    0x0e3a67ea, // VENOM
    0x0e3a68a8, // VENUE
    0x0e3a77de, // VERGE
    0x0e3a796a, // VERSE
    0x0e3a7974, // VERSO
    0x0e3a79cd, // VERVE
    0x0e3c68da, // VICAR
    0x0e3c6d9c, // VIDEO
    0x0e3c7ae0, // VIGIL
    0x0e3c7bac, // VIGOR
    0x0e3c907d, // VILLA
    0x0e3c9ab7, // VINYL
    0x0e3c9d40, // VIOLA
    0x0e3ca0ab, // VIPER
    0x0e3ca8a3, // VIRAL
    0x0e3cab3e, // VIRUS
    0x0e3cadf4, // VISIT
    0x0e3caeb8, // VISOR
    0x0e3caf4c, // VISTA
    0x0e3cb125, // VITAL
    0x0e3cbaa7, // VIVID
    0x0e3cc2af, // VIXEN
    0x0e3fb31a, // VOCAL
    0x0e3fb89a, // VODKA
    0x0e3fc6ab, // VOGUE
    0x0e3fccdb, // VOICE
    0x0e3fce00, // VOILA
    0x0e3fdeb4, // VOMIT
    0x0e3ffbf5, // VOTER
    0x0e3fffea, // VOUCH
    0x0e4008b2, // VOWEL
    0x0e454a12, // VYING
    0x0e4a1fa4, // WACKY
    0x0e4a2b9a, // WAFER
    0x0e4a2fdb, // WAGER
    0x0e4a3121, // WAGON
    0x0e4a3a2d, // WAIST
    0x0e4a3a81, // WAIVE
    0x0e4a4717, // WALTZ
    0x0e4a609c, // WARTY
    0x0e4a64c9, // WASTE
    0x0e4a66dc, // WATCH
    0x0e4a6728, // WATER
    0x0e4a6faa, // WAVER
    0x0e4a7828, // WAXEN
    0x0e4c498d, // WEARY
    0x0e4c49fd, // WEAVE
    0x0e4c54d1, // WEDGE
    0x0e4c58c3, // WEEDY
    0x0e4c6a19, // WEIGH
    0x0e4c6b80, // WEIRD
    0x0e4c7658, // WELCH
    0x0e4c7868, // WELSH
    0x0e4c7eda, // WENCH
    0x0e4decb3, // WHACK
    0x0e4dedd6, // WHALE
    0x0e4dee9d, // WHARF
    0x0e4dfd7e, // WHEAT
    0x0e4dfdfa, // WHEEL
    0x0e4dfee5, // WHELP
    0x0e4dffa0, // WHERE
    0x0e4e0eb8, // WHICH
    0x0e4e0f19, // WHIFF
    0x0e4e0fde, // WHILE
    0x0e4e1020, // WHINE
    0x0e4e1034, // WHINY
    0x0e4e10ab, // WHIRL
    0x0e4e10cb, // WHISK
    0x0e4e10e6, // WHITE
    0x0e4e2964, // WHOLE
    0x0e4e29d2, // WHOOP
    0x0e4e2a4b, // WHOSE
    0x0e4e861c, // WIDEN
    0x0e4e8620, // WIDER
    0x0e4e876f, // WIDOW
    0x0e4e8805, // WIDTH
    0x0e4e8b3a, // WIELD
    0x0e4e9348, // WIGHT
    0x0e4ea916, // WILLY
    0x0e4eaddb, // WIMPY
    0x0e4eb05b, // WINCE
    0x0e4eb05e, // WINCH
    0x0e4eb090, // WINDY
    0x0e4ec5ef, // WISER
    0x0e4ec761, // WISPY
    0x0e4ec9e4, // WITCH
    0x0e4ecc26, // WITTY
    0x0e51ee29, // WOKEN
    0x0e51f627, // WOMAN
    0x0e51f6ab, // WOMEN
    0x0e51ff17, // WOODY
    0x0e51ff31, // WOOER
    0x0e52001f, // WOOLY
    0x0e5201ed, // WOOZY
    0x0e520bda, // WORDY
    0x0e520ccd, // WORLD
    0x0e520da8, // WORRY
    0x0e520db5, // WORSE
    0x0e520dc4, // WORST
    0x0e520dd9, // WORTH
    0x0e521990, // WOULD
    0x0e5219d2, // WOUND
    0x0e521cf4, // WOVEN
    0x0e53687d, // WRACK
    0x0e536aab, // WRATH
    0x0e53793f, // WREAK
    0x0e537981, // WRECK
    0x0e537b9a, // WREST
    0x0e538bec, // WRING
    0x0e538c9e, // WRIST
    0x0e538cb0, // WRITE
    0x0e53a572, // WRONG
    0x0e53a636, // WROTE
    0x0e53bef8, // WRUNG
    0x0e53cfcc, // WRYLY
    0x0e6e503e, // YACHT
    0x0e707a84, // YEARN
    0x0e707aab, // YEAST
    0x0e72bc3c, // YIELD
    0x0e764ad7, // YOUNG
    0x0e764b9e, // YOUTH
    0x0e829739, // ZEBRA
    0x0e82dfe4, // ZESTY
    0x0e8843e9, // ZONAL
};

const unsigned char wordlist_en[0x90b][6] = {
    "ABACK",
    "ABASE",
    "ABATE",
    "ABBEY",
    "ABBOT",
    "ABHOR",
    "ABIDE",
    "ABLED",
    "ABODE",
    "ABORT",
    "ABOUT",
    "ABOVE",
    "ABUSE",
    "ABYSS",
    "ACORN",
    "ACRID",
    "ACTOR",
    "ACUTE",
    "ADAGE",
    "ADAPT",
    "ADEPT",
    "ADMIN",
    "ADMIT",
    "ADOBE",
    "ADOPT",
    "ADORE",
    "ADORN",
    "ADULT",
    "AFFIX",
    "AFIRE",
    "AFOOT",
    "AFOUL",
    "AFTER",
    "AGAIN",
    "AGAPE",
    "AGATE",
    "AGENT",
    "AGILE",
    "AGING",
    "AGLOW",
    "AGONY",
    "AGREE",
    "AHEAD",
    "AIDER",
    "AISLE",
    "ALARM",
    "ALBUM",
    "ALERT",
    "ALGAE",
    "ALIBI",
    "ALIEN",
    "ALIGN",
    "ALIKE",
    "ALIVE",
    "ALLAY",
    "ALLEY",
    "ALLOT",
    "ALLOW",
    "ALLOY",
    "ALOFT",
    "ALONE",
    "ALONG",
    "ALOOF",
    "ALOUD",
    "ALPHA",
    "ALTAR",
    "ALTER",
    "AMASS",
    "AMAZE",
    "AMBER",
    "AMBLE",
    "AMEND",
    "AMISS",
    "AMITY",
    "AMONG",
    "AMPLE",
    "AMPLY",
    "AMUSE",
    "ANGEL",
    "ANGER",
    "ANGLE",
    "ANGRY",
    "ANGST",
    "ANIME",
    "ANKLE",
    "ANNEX",
    "ANNOY",
    "ANNUL",
    "ANODE",
    "ANTIC",
    "ANVIL",
    "AORTA",
    "APART",
    "APHID",
    "APING",
    "APNEA",
    "APPLE",
    "APPLY",
    "APRON",
    "APTLY",
    "ARBOR",
    "ARDOR",
    "ARENA",
    "ARGUE",
    "ARISE",
    "ARMOR",
    "AROMA",
    "AROSE",
    "ARRAY",
    "ARROW",
    "ARSON",
    "ARTSY",
    "ASCOT",
    "ASHEN",
    "ASIDE",
    "ASKEW",
    "ASSAY",
    "ASSET",
    "ATOLL",
    "ATONE",
    "ATTIC",
    "AUDIO",
    "AUDIT",
    "AUGUR",
    "AUNTY",
    "AVAIL",
    "AVERT",
    "AVIAN",
    "AVOID",
    "AWAIT",
    "AWAKE",
    "AWARD",
    "AWARE",
    "AWASH",
    "AWFUL",
    "AWOKE",
    "AXIAL",
    "AXIOM",
    "AXION",
    "AZURE",
    "BACON",
    "BADGE",
    "BADLY",
    "BAGEL",
    "BAGGY",
    "BAKER",
    "BALER",
    "BALMY",
    "BANAL",
    "BANJO",
    "BARGE",
    "BARON",
    "BASAL",
    "BASIC",
    "BASIL",
    "BASIN",
    "BASIS",
    "BASTE",
    "BATCH",
    "BATHE",
    "BATON",
    "BATTY",
    "BAWDY",
    "BAYOU",
    "BEACH",
    "BEADY",
    "BEARD",
    "BEAST",
    "BEECH",
    "BEEFY",
    "BEFIT",
    "BEGAN",
    "BEGAT",
    "BEGET",
    "BEGIN",
    "BEGUN",
    "BEING",
    "BELCH",
    "BELIE",
    "BELLE",
    "BELLY",
    "BELOW",
    "BENCH",
    "BERET",
    "BERRY",
    "BERTH",
    "BESET",
    "BETEL",
    "BEVEL",
    "BEZEL",
    "BIBLE",
    "BICEP",
    "BIDDY",
    "BIGOT",
    "BILGE",
    "BILLY",
    "BINGE",
    "BINGO",
    "BIOME",
    "BIRCH",
    "BIRTH",
    "BISON",
    "BITTY",
    "BLACK",
    "BLADE",
    "BLAME",
    "BLAND",
    "BLANK",
    "BLARE",
    "BLAST",
    "BLAZE",
    "BLEAK",
    "BLEAT",
    "BLEED",
    "BLEEP",
    "BLEND",
    "BLESS",
    "BLIMP",
    "BLIND",
    "BLINK",
    "BLISS",
    "BLITZ",
    "BLOAT",
    "BLOCK",
    "BLOKE",
    "BLOND",
    "BLOOD",
    "BLOOM",
    "BLOWN",
    "BLUER",
    "BLUFF",
    "BLUNT",
    "BLURB",
    "BLURT",
    "BLUSH",
    "BOARD",
    "BOAST",
    "BOBBY",
    "BONEY",
    "BONGO",
    "BONUS",
    "BOOBY",
    "BOOST",
    "BOOTH",
    "BOOTY",
    "BOOZE",
    "BOOZY",
    "BORAX",
    "BORNE",
    "BOSOM",
    "BOSSY",
    "BOTCH",
    "BOUGH",
    "BOULE",
    "BOUND",
    "BOWEL",
    "BOXER",
    "BRACE",
    "BRAID",
    "BRAIN",
    "BRAKE",
    "BRAND",
    "BRASH",
    "BRASS",
    "BRAVE",
    "BRAVO",
    "BRAWL",
    "BRAWN",
    "BREAD",
    "BREAK",
    "BREED",
    "BRIAR",
    "BRIBE",
    "BRICK",
    "BRIDE",
    "BRIEF",
    "BRINE",
    "BRING",
    "BRINK",
    "BRINY",
    "BRISK",
    "BROAD",
    "BROIL",
    "BROKE",
    "BROOD",
    "BROOK",
    "BROOM",
    "BROTH",
    "BROWN",
    "BRUNT",
    "BRUSH",
    "BRUTE",
    "BUDDY",
    "BUDGE",
    "BUGGY",
    "BUGLE",
    "BUILD",
    "BUILT",
    "BULGE",
    "BULKY",
    "BULLY",
    "BUNCH",
    "BUNNY",
    "BURLY",
    "BURNT",
    "BURST",
    "BUSED",
    "BUSHY",
    "BUTCH",
    "BUTTE",
    "BUXOM",
    "BUYER",
    "BYLAW",
    "CABAL",
    "CABBY",
    "CABIN",
    "CABLE",
    "CACAO",
    "CACHE",
    "CACTI",
    "CADDY",
    "CADET",
    "CAGEY",
    "CAIRN",
    "CAMEL",
    "CAMEO",
    "CANAL",
    "CANDY",
    "CANNY",
    "CANOE",
    "CANON",
    "CAPER",
    "CAPUT",
    "CARAT",
    "CARGO",
    "CAROL",
    "CARRY",
    "CARVE",
    "CASTE",
    "CATCH",
    "CATER",
    "CATTY",
    "CAULK",
    "CAUSE",
    "CAVIL",
    "CEASE",
    "CEDAR",
    "CELLO",
    "CHAFE",
    "CHAFF",
    "CHAIN",
    "CHAIR",
    "CHALK",
    "CHAMP",
    "CHANT",
    "CHAOS",
    "CHARD",
    "CHARM",
    "CHART",
    "CHASE",
    "CHASM",
    "CHEAP",
    "CHEAT",
    "CHECK",
    "CHEEK",
    "CHEER",
    "CHESS",
    "CHEST",
    "CHICK",
    "CHIDE",
    "CHIEF",
    "CHILD",
    "CHILI",
    "CHILL",
    "CHIME",
    "CHINA",
    "CHIRP",
    "CHOCK",
    "CHOIR",
    "CHOKE",
    "CHORD",
    "CHORE",
    "CHOSE",
    "CHUCK",
    "CHUMP",
    "CHUNK",
    "CHURN",
    "CHUTE",
    "CIDER",
    "CIGAR",
    "CINCH",
    "CIRCA",
    "CIVIC",
    "CIVIL",
    "CLACK",
    "CLAIM",
    "CLAMP",
    "CLANG",
    "CLANK",
    "CLASH",
    "CLASP",
    "CLASS",
    "CLEAN",
    "CLEAR",
    "CLEAT",
    "CLEFT",
    "CLERK",
    "CLICK",
    "CLIFF",
    "CLIMB",
    "CLING",
    "CLINK",
    "CLOAK",
    "CLOCK",
    "CLONE",
    "CLOSE",
    "CLOTH",
    "CLOUD",
    "CLOUT",
    "CLOVE",
    "CLOWN",
    "CLUCK",
    "CLUED",
    "CLUMP",
    "CLUNG",
    "COACH",
    "COAST",
    "COBRA",
    "COCOA",
    "COLON",
    "COLOR",
    "COMET",
    "COMFY",
    "COMIC",
    "COMMA",
    "CONCH",
    "CONDO",
    "CONIC",
    "COPSE",
    "CORAL",
    "CORER",
    "CORNY",
    "COUCH",
    "COUGH",
    "COULD",
    "COUNT",
    "COUPE",
    "COURT",
    "COVEN",
    "COVER",
    "COVET",
    "COVEY",
    "COWER",
    "COYLY",
    "CRACK",
    "CRAFT",
    "CRAMP",
    "CRANE",
    "CRANK",
    "CRASH",
    "CRASS",
    "CRATE",
    "CRAVE",
    "CRAWL",
    "CRAZE",
    "CRAZY",
    "CREAK",
    "CREAM",
    "CREDO",
    "CREED",
    "CREEK",
    "CREEP",
    "CREME",
    "CREPE",
    "CREPT",
    "CRESS",
    "CREST",
    "CRICK",
    "CRIED",
    "CRIER",
    "CRIME",
    "CRIMP",
    "CRISP",
    "CROAK",
    "CROCK",
    "CRONE",
    "CRONY",
    "CROOK",
    "CROSS",
    "CROUP",
    "CROWD",
    "CROWN",
    "CRUDE",
    "CRUEL",
    "CRUMB",
    "CRUMP",
    "CRUSH",
    "CRUST",
    "CRYPT",
    "CUBIC",
    "CUMIN",
    "CURIO",
    "CURLY",
    "CURRY",
    "CURSE",
    "CURVE",
    "CURVY",
    "CUTIE",
    "CYBER",
    "CYCLE",
    "CYNIC",
    "DADDY",
    "DAILY",
    "DAIRY",
    "DAISY",
    "DALLY",
    "DANCE",
    "DANDY",
    "DATUM",
    "DAUNT",
    "DEALT",
    "DEATH",
    "DEBAR",
    "DEBIT",
    "DEBUG",
    "DEBUT",
    "DECAL",
    "DECAY",
    "DECOR",
    "DECOY",
    "DECRY",
    "DEFER",
    "DEIGN",
    "DEITY",
    "DELAY",
    "DELTA",
    "DELVE",
    "DEMON",
    "DEMUR",
    "DENIM",
    "DENSE",
    "DEPOT",
    "DEPTH",
    "DERBY",
    "DETER",
    "DETOX",
    "DEUCE",
    "DEVIL",
    "DIARY",
    "DICEY",
    "DIGIT",
    "DILLY",
    "DIMLY",
    "DINER",
    "DINGO",
    "DINGY",
    "DIODE",
    "DIRGE",
    "DIRTY",
    "DISCO",
    "DITCH",
    "DITTO",
    "DITTY",
    "DIVER",
    "DIZZY",
    "DODGE",
    "DODGY",
    "DOGMA",
    "DOING",
    "DOLLY",
    "DONOR",
    "DONUT",
    "DOPEY",
    "DOUBT",
    "DOUGH",
    "DOWDY",
    "DOWEL",
    "DOWNY",
    "DOWRY",
    "DOZEN",
    "DRAFT",
    "DRAIN",
    "DRAKE",
    "DRAMA",
    "DRANK",
    "DRAPE",
    "DRAWL",
    "DRAWN",
    "DREAD",
    "DREAM",
    "DRESS",
    "DRIED",
    "DRIER",
    "DRIFT",
    "DRILL",
    "DRINK",
    "DRIVE",
    "DROIT",
    "DROLL",
    "DRONE",
    "DROOL",
    "DROOP",
    "DROSS",
    "DROVE",
    "DROWN",
    "DRUID",
    "DRUNK",
    "DRYER",
    "DRYLY",
    "DUCHY",
    "DULLY",
    "DUMMY",
    "DUMPY",
    "DUNCE",
    "DUSKY",
    "DUSTY",
    "DUTCH",
    "DUVET",
    "DWARF",
    "DWELL",
    "DWELT",
    "DYING",
    "EAGER",
    "EAGLE",
    "EARLY",
    "EARTH",
    "EASEL",
    "EATEN",
    "EATER",
    "EBONY",
    "ECLAT",
    "EDICT",
    "EDIFY",
    "EERIE",
    "EGRET",
    "EIGHT",
    "EJECT",
    "EKING",
    "ELATE",
    "ELBOW",
    "ELDER",
    "ELECT",
    "ELEGY",
    "ELFIN",
    "ELIDE",
    "ELITE",
    "ELOPE",
    "ELUDE",
    "EMAIL",
    "EMBED",
    "EMBER",
    "EMCEE",
    "EMPTY",
    "ENACT",
    "ENDOW",
    "ENEMA",
    "ENEMY",
    "ENJOY",
    "ENNUI",
    "ENSUE",
    "ENTER",
    "ENTRY",
    "ENVOY",
    "EPOCH",
    "EPOXY",
    "EQUAL",
    "EQUIP",
    "ERASE",
    "ERECT",
    "ERODE",
    "ERROR",
    "ERUPT",
    "ESSAY",
    "ESTER",
    "ETHER",
    "ETHIC",
    "ETHOS",
    "ETUDE",
    "EVADE",
    "EVENT",
    "EVERY",
    "EVICT",
    "EVOKE",
    "EXACT",
    "EXALT",
    "EXCEL",
    "EXERT",
    "EXILE",
    "EXIST",
    "EXPEL",
    "EXTOL",
    "EXTRA",
    "EXULT",
    "EYING",
    "FABLE",
    "FACET",
    "FAINT",
    "FAIRY",
    "FAITH",
    "FALSE",
    "FANCY",
    "FANNY",
    "FARCE",
    "FATAL",
    "FATTY",
    "FAULT",
    "FAUNA",
    "FAVOR",
    "FEAST",
    "FECAL",
    "FEIGN",
    "FELLA",
    "FELON",
    "FEMME",
    "FEMUR",
    "FENCE",
    "FERAL",
    "FERRY",
    "FETAL",
    "FETCH",
    "FETID",
    "FETUS",
    "FEVER",
    "FEWER",
    "FIBER",
    "FICUS",
    "FIELD",
    "FIEND",
    "FIERY",
    "FIFTH",
    "FIFTY",
    "FIGHT",
    "FILER",
    "FILET",
    "FILLY",
    "FILMY",
    "FILTH",
    "FINAL",
    "FINCH",
    "FINER",
    "FIRST",
    "FISHY",
    "FIXER",
    "FIZZY",
    "FJORD",
    "FLACK",
    "FLAIL",
    "FLAIR",
    "FLAKE",
    "FLAKY",
    "FLAME",
    "FLANK",
    "FLARE",
    "FLASH",
    "FLASK",
    "FLECK",
    "FLEET",
    "FLESH",
    "FLICK",
    "FLIER",
    "FLING",
    "FLINT",
    "FLIRT",
    "FLOAT",
    "FLOCK",
    "FLOOD",
    "FLOOR",
    "FLORA",
    "FLOSS",
    "FLOUR",
    "FLOUT",
    "FLOWN",
    "FLUFF",
    "FLUID",
    "FLUKE",
    "FLUME",
    "FLUNG",
    "FLUNK",
    "FLUSH",
    "FLUTE",
    "FLYER",
    "FOAMY",
    "FOCAL",
    "FOCUS",
    "FOGGY",
    "FOIST",
    "FOLIO",
    "FOLLY",
    "FORAY",
    "FORCE",
    "FORGE",
    "FORGO",
    "FORTE",
    "FORTH",
    "FORTY",
    "FORUM",
    "FOUND",
    "FOYER",
    "FRAIL",
    "FRAME",
    "FRANK",
    "FRAUD",
    "FREAK",
    "FREED",
    "FREER",
    "FRESH",
    "FRIAR",
    "FRIED",
    "FRILL",
    "FRISK",
    "FRITZ",
    "FROCK",
    "FROND",
    "FRONT",
    "FROST",
    "FROTH",
    "FROWN",
    "FROZE",
    "FRUIT",
    "FUDGE",
    "FUGUE",
    "FULLY",
    "FUNGI",
    "FUNKY",
    "FUNNY",
    "FUROR",
    "FURRY",
    "FUSSY",
    "FUZZY",
    "GAFFE",
    "GAILY",
    "GAMER",
    "GAMMA",
    "GAMUT",
    "GASSY",
    "GAUDY",
    "GAUGE",
    "GAUNT",
    "GAUZE",
    "GAVEL",
    "GAWKY",
    "GAYER",
    "GAYLY",
    "GAZER",
    "GECKO",
    "GEEKY",
    "GEESE",
    "GENIE",
    "GENRE",
    "GHOST",
    "GHOUL",
    "GIANT",
    "GIDDY",
    "GIPSY",
    "GIRLY",
    "GIRTH",
    "GIVEN",
    "GIVER",
    "GLADE",
    "GLAND",
    "GLARE",
    "GLASS",
    "GLAZE",
    "GLEAM",
    "GLEAN",
    "GLIDE",
    "GLINT",
    "GLOAT",
    "GLOBE",
    "GLOOM",
    "GLORY",
    "GLOSS",
    "GLOVE",
    "GLYPH",
    "GNASH",
    "GNOME",
    "GODLY",
    "GOING",
    "GOLEM",
    "GOLLY",
    "GONAD",
    "GONER",
    "GOODY",
    "GOOEY",
    "GOOFY",
    "GOOSE",
    "GORGE",
    "GOUGE",
    "GOURD",
    "GRACE",
    "GRADE",
    "GRAFT",
    "GRAIL",
    "GRAIN",
    "GRAND",
    "GRANT",
    "GRAPE",
    "GRAPH",
    "GRASP",
    "GRASS",
    "GRATE",
    "GRAVE",
    "GRAVY",
    "GRAZE",
    "GREAT",
    "GREED",
    "GREEN",
    "GREET",
    "GRIEF",
    "GRILL",
    "GRIME",
    "GRIMY",
    "GRIND",
    "GRIPE",
    "GROAN",
    "GROIN",
    "GROOM",
    "GROPE",
    "GROSS",
    "GROUP",
    "GROUT",
    "GROVE",
    "GROWL",
    "GROWN",
    "GRUEL",
    "GRUFF",
    "GRUNT",
    "GUARD",
    "GUAVA",
    "GUESS",
    "GUEST",
    "GUIDE",
    "GUILD",
    "GUILE",
    "GUILT",
    "GUISE",
    "GULCH",
    "GULLY",
    "GUMBO",
    "GUMMY",
    "GUPPY",
    "GUSTO",
    "GUSTY",
    "GYPSY",
    "HABIT",
    "HAIRY",
    "HALVE",
    "HANDY",
    "HAPPY",
    "HARDY",
    "HAREM",
    "HARPY",
    "HARRY",
    "HARSH",
    "HASTE",
    "HASTY",
    "HATCH",
    "HATER",
    "HAUNT",
    "HAUTE",
    "HAVEN",
    "HAVOC",
    "HAZEL",
    "HEADY",
    "HEARD",
    "HEART",
    "HEATH",
    "HEAVE",
    "HEAVY",
    "HEDGE",
    "HEFTY",
    "HEIST",
    "HELIX",
    "HELLO",
    "HENCE",
    "HERON",
    "HILLY",
    "HINGE",
    "HIPPO",
    "HIPPY",
    "HITCH",
    "HOARD",
    "HOBBY",
    "HOIST",
    "HOLLY",
    "HOMER",
    "HONEY",
    "HONOR",
    "HORDE",
    "HORNY",
    "HORSE",
    "HOTEL",
    "HOTLY",
    "HOUND",
    "HOUSE",
    "HOVEL",
    "HOVER",
    "HOWDY",
    "HUMAN",
    "HUMID",
    "HUMOR",
    "HUMPH",
    "HUMUS",
    "HUNCH",
    "HUNKY",
    "HURRY",
    "HUSKY",
    "HUSSY",
    "HUTCH",
    "HYDRO",
    "HYENA",
    "HYMEN",
    "HYPER",
    "ICILY",
    "ICING",
    "IDEAL",
    "IDIOM",
    "IDIOT",
    "IDLER",
    "IDYLL",
    "IGLOO",
    "ILIAC",
    "IMAGE",
    "IMBUE",
    "IMPEL",
    "IMPLY",
    "INANE",
    "INBOX",
    "INCUR",
    "INDEX",
    "INEPT",
    "INERT",
    "INFER",
    "INGOT",
    "INLAY",
    "INLET",
    "INNER",
    "INPUT",
    "INTER",
    "INTRO",
    "IONIC",
    "IRATE",
    "IRONY",
    "ISLET",
    "ISSUE",
    "ITCHY",
    "IVORY",
    "JAUNT",
    "JAZZY",
    "JELLY",
    "JERKY",
    "JETTY",
    "JEWEL",
    "JIFFY",
    "JOINT",
    "JOIST",
    "JOKER",
    "JOLLY",
    "JOUST",
    "JUDGE",
    "JUICE",
    "JUICY",
    "JUMBO",
    "JUMPY",
    "JUNTA",
    "JUNTO",
    "JUROR",
    "KAPPA",
    "KARMA",
    "KAYAK",
    "KEBAB",
    "KHAKI",
    "KINKY",
    "KIOSK",
    "KITTY",
    "KNACK",
    "KNAVE",
    "KNEAD",
    "KNEED",
    "KNEEL",
    "KNELT",
    "KNIFE",
    "KNOCK",
    "KNOLL",
    "KNOWN",
    "KOALA",
    "KRILL",
    "LABEL",
    "LABOR",
    "LADEN",
    "LADLE",
    "LAGER",
    "LANCE",
    "LANKY",
    "LAPEL",
    "LAPSE",
    "LARGE",
    "LARVA",
    "LASSO",
    "LATCH",
    "LATER",
    "LATHE",
    "LATTE",
    "LAUGH",
    "LAYER",
    "LEACH",
    "LEAFY",
    "LEAKY",
    "LEANT",
    "LEAPT",
    "LEARN",
    "LEASE",
    "LEASH",
    "LEAST",
    "LEAVE",
    "LEDGE",
    "LEECH",
    "LEERY",
    "LEFTY",
    "LEGAL",
    "LEGGY",
    "LEMON",
    "LEMUR",
    "LEPER",
    "LEVEL",
    "LEVER",
    "LIBEL",
    "LIEGE",
    "LIGHT",
    "LIKEN",
    "LILAC",
    "LIMBO",
    "LIMIT",
    "LINEN",
    "LINER",
    "LINGO",
    "LIPID",
    "LITHE",
    "LIVER",
    "LIVID",
    "LLAMA",
    "LOAMY",
    "LOATH",
    "LOBBY",
    "LOCAL",
    "LOCUS",
    "LODGE",
    "LOFTY",
    "LOGIC",
    "LOGIN",
    "LOOPY",
    "LOOSE",
    "LORRY",
    "LOSER",
    "LOUSE",
    "LOUSY",
    "LOVER",
    "LOWER",
    "LOWLY",
    "LOYAL",
    "LUCID",
    "LUCKY",
    "LUMEN",
    "LUMPY",
    "LUNAR",
    "LUNCH",
    "LUNGE",
    "LUPUS",
    "LURCH",
    "LURID",
    "LUSTY",
    "LYING",
    "LYMPH",
    "LYRIC",
    "MACAW",
    "MACHO",
    "MACRO",
    "MADAM",
    "MADLY",
    "MAFIA",
    "MAGIC",
    "MAGMA",
    "MAIZE",
    "MAJOR",
    "MAKER",
    "MAMBO",
    "MAMMA",
    "MAMMY",
    "MANGA",
    "MANGE",
    "MANGO",
    "MANGY",
    "MANIA",
    "MANIC",
    "MANLY",
    "MANOR",
    "MAPLE",
    "MARCH",
    "MARRY",
    "MARSH",
    "MASON",
    "MASSE",
    "MATCH",
    "MATEY",
    "MAUVE",
    "MAXIM",
    "MAYBE",
    "MAYOR",
    "MEALY",
    "MEANT",
    "MEATY",
    "MECCA",
    "MEDAL",
    "MEDIA",
    "MEDIC",
    "MELEE",
    "MELON",
    "MERCY",
    "MERGE",
    "MERIT",
    "MERRY",
    "METAL",
    "METER",
    "METRO",
    "MICRO",
    "MIDGE",
    "MIDST",
    "MIGHT",
    "MILKY",
    "MIMIC",
    "MINCE",
    "MINER",
    "MINIM",
    "MINOR",
    "MINTY",
    "MINUS",
    "MIRTH",
    "MISER",
    "MISSY",
    "MOCHA",
    "MODAL",
    "MODEL",
    "MODEM",
    "MOGUL",
    "MOIST",
    "MOLAR",
    "MOLDY",
    "MONEY",
    "MONTH",
    "MOODY",
    "MOOSE",
    "MORAL",
    "MORON",
    "MORPH",
    "MOSSY",
    "MOTEL",
    "MOTIF",
    "MOTOR",
    "MOTTO",
    "MOULT",
    "MOUND",
    "MOUNT",
    "MOURN",
    "MOUSE",
    "MOUTH",
    "MOVER",
    "MOVIE",
    "MOWER",
    "MUCKY",
    "MUCUS",
    "MUDDY",
    "MULCH",
    "MUMMY",
    "MUNCH",
    "MURAL",
    "MURKY",
    "MUSHY",
    "MUSIC",
    "MUSKY",
    "MUSTY",
    "MYRRH",
    "NADIR",
    "NAIVE",
    "NANNY",
    "NASAL",
    "NASTY",
    "NATAL",
    "NAVAL",
    "NAVEL",
    "NEEDY",
    "NEIGH",
    "NERDY",
    "NERVE",
    "NEVER",
    "NEWER",
    "NEWLY",
    "NICER",
    "NICHE",
    "NIECE",
    "NIGHT",
    "NINJA",
    "NINNY",
    "NINTH",
    "NOBLE",
    "NOBLY",
    "NOISE",
    "NOISY",
    "NOMAD",
    "NOOSE",
    "NORTH",
    "NOSEY",
    "NOTCH",
    "NOVEL",
    "NUDGE",
    "NURSE",
    "NUTTY",
    "NYLON",
    "NYMPH",
    "OAKEN",
    "OBESE",
    "OCCUR",
    "OCEAN",
    "OCTAL",
    "OCTET",
    "ODDER",
    "ODDLY",
    "OFFAL",
    "OFFER",
    "OFTEN",
    "OLDEN",
    "OLDER",
    "OLIVE",
    "OMBRE",
    "OMEGA",
    "ONION",
    "ONSET",
    "OPERA",
    "OPINE",
    "OPIUM",
    "OPTIC",
    "ORBIT",
    "ORDER",
    "ORGAN",
    "OTHER",
    "OTTER",
    "OUGHT",
    "OUNCE",
    "OUTDO",
    "OUTER",
    "OUTGO",
    "OVARY",
    "OVATE",
    "OVERT",
    "OVINE",
    "OVOID",
    "OWING",
    "OWNER",
    "OXIDE",
    "OZONE",
    "PADDY",
    "PAGAN",
    "PAINT",
    "PALER",
    "PALSY",
    "PANEL",
    "PANIC",
    "PANSY",
    "PAPAL",
    "PAPER",
    "PARER",
    "PARKA",
    "PARRY",
    "PARSE",
    "PARTY",
    "PASTA",
    "PASTE",
    "PASTY",
    "PATCH",
    "PATIO",
    "PATSY",
    "PATTY",
    "PAUSE",
    "PAYEE",
    "PAYER",
    "PEACE",
    "PEACH",
    "PEARL",
    "PECAN",
    "PEDAL",
    "PENAL",
    "PENCE",
    "PENNE",
    "PENNY",
    "PERCH",
    "PERIL",
    "PERKY",
    "PESKY",
    "PESTO",
    "PETAL",
    "PETTY",
    "PHASE",
    "PHONE",
    "PHONY",
    "PHOTO",
    "PIANO",
    "PICKY",
    "PIECE",
    "PIETY",
    "PIGGY",
    "PILOT",
    "PINCH",
    "PINEY",
    "PINKY",
    "PINTO",
    "PIPER",
    "PIQUE",
    "PITCH",
    "PITHY",
    "PIVOT",
    "PIXEL",
    "PIXIE",
    "PIZZA",
    "PLACE",
    "PLAID",
    "PLAIN",
    "PLAIT",
    "PLANE",
    "PLANK",
    "PLANT",
    "PLATE",
    "PLAZA",
    "PLEAD",
    "PLEAT",
    "PLIED",
    "PLIER",
    "PLUCK",
    "PLUMB",
    "PLUME",
    "PLUMP",
    "PLUNK",
    "PLUSH",
    "POESY",
    "POINT",
    "POISE",
    "POKER",
    "POLAR",
    "POLKA",
    "POLYP",
    "POOCH",
    "POPPY",
    "PORCH",
    "POSER",
    "POSIT",
    "POSSE",
    "POUCH",
    "POUND",
    "POUTY",
    "POWER",
    "PRANK",
    "PRAWN",
    "PREEN",
    "PRESS",
    "PRICE",
    "PRICK",
    "PRIDE",
    "PRIED",
    "PRIME",
    "PRIMO",
    "PRINT",
    "PRIOR",
    "PRISM",
    "PRIVY",
    "PRIZE",
    "PROBE",
    "PRONE",
    "PRONG",
    "PROOF",
    "PROSE",
    "PROUD",
    "PROVE",
    "PROWL",
    "PROXY",
    "PRUDE",
    "PRUNE",
    "PSALM",
    "PUBIC",
    "PUDGY",
    "PUFFY",
    "PULPY",
    "PULSE",
    "PUNCH",
    "PUPIL",
    "PUPPY",
    "PUREE",
    "PURER",
    "PURGE",
    "PURSE",
    "PUSHY",
    "PUTTY",
    "PYGMY",
    "QUACK",
    "QUAIL",
    "QUAKE",
    "QUALM",
    "QUARK",
    "QUART",
    "QUASH",
    "QUASI",
    "QUEEN",
    "QUEER",
    "QUELL",
    "QUERY",
    "QUEST",
    "QUEUE",
    "QUICK",
    "QUIET",
    "QUILL",
    "QUILT",
    "QUIRK",
    "QUITE",
    "QUOTA",
    "QUOTE",
    "QUOTH",
    "RABBI",
    "RABID",
    "RACER",
    "RADAR",
    "RADII",
    "RADIO",
    "RAINY",
    "RAISE",
    "RAJAH",
    "RALLY",
    "RALPH",
    "RAMEN",
    "RANCH",
    "RANDY",
    "RANGE",
    "RAPID",
    "RARER",
    "RASPY",
    "RATIO",
    "RATTY",
    "RAVEN",
    "RAYON",
    "RAZOR",
    "REACH",
    "REACT",
    "READY",
    "REALM",
    "REARM",
    "REBAR",
    "REBEL",
    "REBUS",
    "REBUT",
    "RECAP",
    "RECUR",
    "RECUT",
    "REEDY",
    "REFER",
    "REFIT",
    "REGAL",
    "REHAB",
    "REIGN",
    "RELAX",
    "RELAY",
    "RELIC",
    "REMIT",
    "RENAL",
    "RENEW",
    "REPAY",
    "REPEL",
    "REPLY",
    "RERUN",
    "RESET",
    "RESIN",
    "RETCH",
    "RETRO",
    "RETRY",
    "REUSE",
    "REVEL",
    "REVUE",
    "RHINO",
    "RHYME",
    "RIDER",
    "RIDGE",
    "RIFLE",
    "RIGHT",
    "RIGID",
    "RIGOR",
    "RINSE",
    "RIPEN",
    "RIPER",
    "RISEN",
    "RISER",
    "RISKY",
    "RIVAL",
    "RIVER",
    "RIVET",
    "ROACH",
    "ROAST",
    "ROBIN",
    "ROBOT",
    "ROCKY",
    "RODEO",
    "ROGER",
    "ROGUE",
    "ROOMY",
    "ROOST",
    "ROTOR",
    "ROUGE",
    "ROUGH",
    "ROUND",
    "ROUSE",
    "ROUTE",
    "ROVER",
    "ROWDY",
    "ROWER",
    "ROYAL",
    "RUDDY",
    "RUDER",
    "RUGBY",
    "RULER",
    "RUMBA",
    "RUMOR",
    "RUPEE",
    "RURAL",
    "RUSTY",
    "SADLY",
    "SAFER",
    "SAINT",
    "SALAD",
    "SALLY",
    "SALON",
    "SALSA",
    "SALTY",
    "SALVE",
    "SALVO",
    "SANDY",
    "SANER",
    "SAPPY",
    "SASSY",
    "SATIN",
    "SATYR",
    "SAUCE",
    "SAUCY",
    "SAUNA",
    "SAUTE",
    "SAVOR",
    "SAVOY",
    "SAVVY",
    "SCALD",
    "SCALE",
    "SCALP",
    "SCALY",
    "SCAMP",
    "SCANT",
    "SCARE",
    "SCARF",
    "SCARY",
    "SCENE",
    "SCENT",
    "SCION",
    "SCOFF",
    "SCOLD",
    "SCONE",
    "SCOOP",
    "SCOPE",
    "SCORE",
    "SCORN",
    "SCOUR",
    "SCOUT",
    "SCOWL",
    "SCRAM",
    "SCRAP",
    "SCREE",
    "SCREW",
    "SCRUB",
    "SCRUM",
    "SCUBA",
    "SEDAN",
    "SEEDY",
    "SEGUE",
    "SEIZE",
    "SEMEN",
    "SENSE",
    "SEPIA",
    "SERIF",
    "SERUM",
    "SERVE",
    "SETUP",
    "SEVEN",
    "SEVER",
    "SEWER",
    "SHACK",
    "SHADE",
    "SHADY",
    "SHAFT",
    "SHAKE",
    "SHAKY",
    "SHALE",
    "SHALL",
    "SHALT",
    "SHAME",
    "SHANK",
    "SHAPE",
    "SHARD",
    "SHARE",
    "SHARK",
    "SHARP",
    "SHAVE",
    "SHAWL",
    "SHEAR",
    "SHEEN",
    "SHEEP",
    "SHEER",
    "SHEET",
    "SHEIK",
    "SHELF",
    "SHELL",
    "SHIED",
    "SHIFT",
    "SHINE",
    "SHINY",
    "SHIRE",
    "SHIRK",
    "SHIRT",
    "SHOAL",
    "SHOCK",
    "SHONE",
    "SHOOK",
    "SHOOT",
    "SHORE",
    "SHORN",
    "SHORT",
    "SHOUT",
    "SHOVE",
    "SHOWN",
    "SHOWY",
    "SHREW",
    "SHRUB",
    "SHRUG",
    "SHUCK",
    "SHUNT",
    "SHUSH",
    "SHYLY",
    "SIEGE",
    "SIEVE",
    "SIGHT",
    "SIGMA",
    "SILKY",
    "SILLY",
    "SINCE",
    "SINEW",
    "SINGE",
    "SIREN",
    "SISSY",
    "SIXTH",
    "SIXTY",
    "SKATE",
    "SKIER",
    "SKIFF",
    "SKILL",
    "SKIMP",
    "SKIRT",
    "SKULK",
    "SKULL",
    "SKUNK",
    "SLACK",
    "SLAIN",
    "SLANG",
    "SLANT",
    "SLASH",
    "SLATE",
    "SLEEK",
    "SLEEP",
    "SLEET",
    "SLEPT",
    "SLICE",
    "SLICK",
    "SLIDE",
    "SLIME",
    "SLIMY",
    "SLING",
    "SLINK",
    "SLOOP",
    "SLOPE",
    "SLOSH",
    "SLOTH",
    "SLUMP",
    "SLUNG",
    "SLUNK",
    "SLURP",
    "SLUSH",
    "SLYLY",
    "SMACK",
    "SMALL",
    "SMART",
    "SMASH",
    "SMEAR",
    "SMELL",
    "SMELT",
    "SMILE",
    "SMIRK",
    "SMITE",
    "SMITH",
    "SMOCK",
    "SMOKE",
    "SMOKY",
    "SMOTE",
    "SNACK",
    "SNAIL",
    "SNAKE",
    "SNAKY",
    "SNARE",
    "SNARL",
    "SNEAK",
    "SNEER",
    "SNIDE",
    "SNIFF",
    "SNIPE",
    "SNOOP",
    "SNORE",
    "SNORT",
    "SNOUT",
    "SNOWY",
    "SNUCK",
    "SNUFF",
    "SOAPY",
    "SOBER",
    "SOGGY",
    "SOLAR",
    "SOLID",
    "SOLVE",
    "SONAR",
    "SONIC",
    "SOOTH",
    "SOOTY",
    "SORRY",
    "SOUND",
    "SOUTH",
    "SOWER",
    "SPACE",
    "SPADE",
    "SPANK",
    "SPARE",
    "SPARK",
    "SPASM",
    "SPAWN",
    "SPEAK",
    "SPEAR",
    "SPECK",
    "SPEED",
    "SPELL",
    "SPELT",
    "SPEND",
    "SPENT",
    "SPERM",
    "SPICE",
    "SPICY",
    "SPIED",
    "SPIEL",
    "SPIKE",
    "SPIKY",
    "SPILL",
    "SPILT",
    "SPINE",
    "SPINY",
    "SPIRE",
    "SPITE",
    "SPLAT",
    "SPLIT",
    "SPOIL",
    "SPOKE",
    "SPOOF",
    "SPOOK",
    "SPOOL",
    "SPOON",
    "SPORE",
    "SPORT",
    "SPOUT",
    "SPRAY",
    "SPREE",
    "SPRIG",
    "SPUNK",
    "SPURN",
    "SPURT",
    "SQUAD",
    "SQUAT",
    "SQUIB",
    "STACK",
    "STAFF",
    "STAGE",
    "STAID",
    "STAIN",
    "STAIR",
    "STAKE",
    "STALE",
    "STALK",
    "STALL",
    "STAMP",
    "STAND",
    "STANK",
    "STARE",
    "STARK",
    "START",
    "STASH",
    "STATE",
    "STAVE",
    "STEAD",
    "STEAK",
    "STEAL",
    "STEAM",
    "STEED",
    "STEEL",
    "STEEP",
    "STEER",
    "STEIN",
    "STERN",
    "STICK",
    "STIFF",
    "STILL",
    "STILT",
    "STING",
    "STINK",
    "STINT",
    "STOCK",
    "STOIC",
    "STOKE",
    "STOLE",
    "STOMP",
    "STONE",
    "STONY",
    "STOOD",
    "STOOL",
    "STOOP",
    "STORE",
    "STORK",
    "STORM",
    "STORY",
    "STOUT",
    "STOVE",
    "STRAP",
    "STRAW",
    "STRAY",
    "STRIP",
    "STRUT",
    "STUCK",
    "STUDY",
    "STUFF",
    "STUMP",
    "STUNG",
    "STUNK",
    "STUNT",
    "STYLE",
    "SUAVE",
    "SUGAR",
    "SUING",
    "SUITE",
    "SULKY",
    "SULLY",
    "SUMAC",
    "SUNNY",
    "SUPER",
    "SURER",
    "SURGE",
    "SURLY",
    "SUSHI",
    "SWAMI",
    "SWAMP",
    "SWARM",
    "SWASH",
    "SWATH",
    "SWEAR",
    "SWEAT",
    "SWEEP",
    "SWEET",
    "SWELL",
    "SWEPT",
    "SWIFT",
    "SWILL",
    "SWINE",
    "SWING",
    "SWIRL",
    "SWISH",
    "SWOON",
    "SWOOP",
    "SWORD",
    "SWORE",
    "SWORN",
    "SWUNG",
    "SYNOD",
    "SYRUP",
    "TABBY",
    "TABLE",
    "TABOO",
    "TACIT",
    "TACKY",
    "TAFFY",
    "TAINT",
    "TAKEN",
    "TAKER",
    "TALLY",
    "TALON",
    "TAMER",
    "TANGO",
    "TANGY",
    "TAPER",
    "TAPIR",
    "TARDY",
    "TAROT",
    "TASTE",
    "TASTY",
    "TATTY",
    "TAUNT",
    "TAWNY",
    "TEACH",
    "TEARY",
    "TEASE",
    "TEDDY",
    "TEETH",
    "TEMPO",
    "TENET",
    "TENOR",
    "TENSE",
    "TENTH",
    "TEPEE",
    "TEPID",
    "TERRA",
    "TERSE",
    "TESTY",
    "THANK",
    "THEFT",
    "THEIR",
    "THEME",
    "THERE",
    "THESE",
    "THETA",
    "THICK",
    "THIEF",
    "THIGH",
    "THING",
    "THINK",
    "THIRD",
    "THONG",
    "THORN",
    "THOSE",
    "THREE",
    "THREW",
    "THROB",
    "THROW",
    "THRUM",
    "THUMB",
    "THUMP",
    "THYME",
    "TIARA",
    "TIBIA",
    "TIDAL",
    "TIGER",
    "TIGHT",
    "TILDE",
    "TIMER",
    "TIMID",
    "TIPSY",
    "TITAN",
    "TITHE",
    "TITLE",
    "TOAST",
    "TODAY",
    "TODDY",
    "TOKEN",
    "TONAL",
    "TONGA",
    "TONIC",
    "TOOTH",
    "TOPAZ",
    "TOPIC",
    "TORCH",
    "TORSO",
    "TORUS",
    "TOTAL",
    "TOTEM",
    "TOUCH",
    "TOUGH",
    "TOWEL",
    "TOWER",
    "TOXIC",
    "TOXIN",
    "TRACE",
    "TRACK",
    "TRACT",
    "TRADE",
    "TRAIL",
    "TRAIN",
    "TRAIT",
    "TRAMP",
    "TRASH",
    "TRAWL",
    "TREAD",
    "TREAT",
    "TREND",
    "TRIAD",
    "TRIAL",
    "TRIBE",
    "TRICE",
    "TRICK",
    "TRIED",
    "TRIPE",
    "TRITE",
    "TROLL",
    "TROOP",
    "TROPE",
    "TROUT",
    "TROVE",
    "TRUCE",
    "TRUCK",
    "TRUER",
    "TRULY",
    "TRUMP",
    "TRUNK",
    "TRUSS",
    "TRUST",
    "TRUTH",
    "TRYST",
    "TUBAL",
    "TUBER",
    "TULIP",
    "TULLE",
    "TUMOR",
    "TUNIC",
    "TURBO",
    "TUTOR",
    "TWANG",
    "TWEAK",
    "TWEED",
    "TWEET",
    "TWICE",
    "TWINE",
    "TWIRL",
    "TWIST",
    "TWIXT",
    "TYING",
    "UDDER",
    "ULCER",
    "ULTRA",
    "UMBRA",
    "UNCLE",
    "UNCUT",
    "UNDER",
    "UNDID",
    "UNDUE",
    "UNFED",
    "UNFIT",
    "UNIFY",
    "UNION",
    "UNITE",
    "UNITY",
    "UNLIT",
    "UNMET",
    "UNSET",
    "UNTIE",
    "UNTIL",
    "UNWED",
    "UNZIP",
    "UPPER",
    "UPSET",
    "URBAN",
    "URINE",
    "USAGE",
    "USHER",
    "USING",
    "USUAL",
    "USURP",
    "UTILE",
    "UTTER",
    "VAGUE",
    "VALET",
    "VALID",
    "VALOR",
    "VALUE",
    "VALVE",
    "VAPID",
    "VAPOR",
    "VAULT",
    "VAUNT",
    "VEGAN",
    "VENOM",
    "VENUE",
    "VERGE",
    "VERSE",
    "VERSO",
    "VERVE",
    "VICAR",
    "VIDEO",
    "VIGIL",
    "VIGOR",
    "VILLA",
    "VINYL",
    "VIOLA",
    "VIPER",
    "VIRAL",
    "VIRUS",
    "VISIT",
    "VISOR",
    "VISTA",
    "VITAL",
    "VIVID",
    "VIXEN",
    "VOCAL",
    "VODKA",
    "VOGUE",
    "VOICE",
    "VOILA",
    "VOMIT",
    "VOTER",
    "VOUCH",
    "VOWEL",
    "VYING",
    "WACKY",
    "WAFER",
    "WAGER",
    "WAGON",
    "WAIST",
    "WAIVE",
    "WALTZ",
    "WARTY",
    "WASTE",
    "WATCH",
    "WATER",
    "WAVER",
    "WAXEN",
    "WEARY",
    "WEAVE",
    "WEDGE",
    "WEEDY",
    "WEIGH",
    "WEIRD",
    "WELCH",
    "WELSH",
    "WHACK",
    "WHALE",
    "WHARF",
    "WHEAT",
    "WHEEL",
    "WHELP",
    "WHERE",
    "WHICH",
    "WHIFF",
    "WHILE",
    "WHINE",
    "WHINY",
    "WHIRL",
    "WHISK",
    "WHITE",
    "WHOLE",
    "WHOOP",
    "WHOSE",
    "WIDEN",
    "WIDER",
    "WIDOW",
    "WIDTH",
    "WIELD",
    "WIGHT",
    "WILLY",
    "WIMPY",
    "WINCE",
    "WINCH",
    "WINDY",
    "WISER",
    "WISPY",
    "WITCH",
    "WITTY",
    "WOKEN",
    "WOMAN",
    "WOMEN",
    "WOODY",
    "WOOER",
    "WOOLY",
    "WOOZY",
    "WORDY",
    "WORLD",
    "WORRY",
    "WORSE",
    "WORST",
    "WORTH",
    "WOULD",
    "WOUND",
    "WOVEN",
    "WRACK",
    "WRATH",
    "WREAK",
    "WRECK",
    "WREST",
    "WRING",
    "WRIST",
    "WRITE",
    "WRONG",
    "WROTE",
    "WRUNG",
    "WRYLY",
    "YACHT",
    "YEARN",
    "YEAST",
    "YIELD",
    "YOUNG",
    "YOUTH",
    "ZEBRA",
    "ZESTY",
    "ZONAL"
};

const unsigned int wordlist_en_offset[27] = {
    0x000, // A
    0x08d, // B
    0x13a, // C
    0x200, // D
    0x26f, // E
    0x2b7, // F
    0x33f, // G
    0x3b2, // H
    0x3f7, // I
    0x419, // J
    0x42d, // K
    0x441, // L
    0x499, // M
    0x504, // N
    0x529, // O
    0x553, // P
    0x5e0, // Q
    0x5f7, // R
    0x660, // S
    0x7cf, // T
    0x863, // U
    0x884, // V
    0x8af, // W
    0x903, // X
    0x903, // Y
    0x908, // Z
    0x90a  // END
};
