#include "exp_share_ratio.h"

const u8 sExpShareRatio[] =
{
    [EXP_SHARE_RATIO_50] =  50, // to be backwards compatible the default zero is 50:50 (Battling:Resting)
    [EXP_SHARE_RATIO_67] =  67, // 67:33
    [EXP_SHARE_RATIO_75] =  75, // 75:25
    [EXP_SHARE_RATIO_90] =  90, // 90:10
    [EXP_SHARE_RATIO_10] =  10, // 10:90
    [EXP_SHARE_RATIO_25] =  25, // 25:75
    [EXP_SHARE_RATIO_33] =  33  // 33:67
};