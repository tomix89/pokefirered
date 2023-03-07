#include "exp_gain_modifier.h"

const u8 sExpGainModifier[] =
{
    [EXP_GAIN_MOD_1x] =    10, // to be backwards compatible the default zero is 1.0x
    [EXP_GAIN_MOD_1_2x] =  12, // 1.2x
    [EXP_GAIN_MOD_1_5x] =  15, // 1.5x
    [EXP_GAIN_MOD_2x] =    20, // 2.0x 
    [EXP_GAIN_MOD_2_5x] =  25, // 2.5x
    [EXP_GAIN_MOD_3x] =    30, // 3.0x
    [EXP_GAIN_MOD_0_5x] =   5, // 0.5x
    [EXP_GAIN_MOD_0_8x] =   8  // 0.8x 
};