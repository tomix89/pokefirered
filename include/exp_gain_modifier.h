#ifndef GUARD_EXP_GAIN_MODIFIER_H
#define GUARD_EXP_GAIN_MODIFIER_H

#include "gba/gba.h"

enum ExpGainModifier {
    EXP_GAIN_MOD_1x=0, // to be backwards compatible the default zero is 1.0x
    EXP_GAIN_MOD_1_2x, // 1.2x
    EXP_GAIN_MOD_1_5x, // 1.5x
    EXP_GAIN_MOD_2x,   // 2.0x 
    EXP_GAIN_MOD_2_5x, // 2.5x
    EXP_GAIN_MOD_3x,   // 3.0x
    EXP_GAIN_MOD_0_5x, // 0.5x
    EXP_GAIN_MOD_0_8x  // 0.8x 
};

extern const u8 sExpGainModifier[];

#endif //GUARD_EXP_GAIN_MODIFIER_H
