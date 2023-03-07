#ifndef GUARD_EXP_SHARE_RATIO_H
#define GUARD_EXP_SHARE_RATIO_H

#include "gba/gba.h"

// when a pokemon has a EXP SHARE hold item it get's an exp share even when it was not fighting
// originally it is 50:50  Battling:Resting

enum ExpShareRatio {
    EXP_SHARE_RATIO_50=0, // to be backwards compatible the default zero 50:50
    EXP_SHARE_RATIO_67,   // 67:33
    EXP_SHARE_RATIO_75,   // 75:25
    EXP_SHARE_RATIO_90,   // 90:10
    EXP_SHARE_RATIO_10,   // 10:90
    EXP_SHARE_RATIO_25,   // 25:75
    EXP_SHARE_RATIO_33,   // 33:67
};

extern const u8 sExpShareRatio[];

#endif //GUARD_EXP_SHARE_RATIO_H
