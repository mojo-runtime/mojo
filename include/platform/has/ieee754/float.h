#ifndef platform_has_ieee754_float
#define platform_has_ieee754_float                   \
    (__FLT_DIG__        ==    6) &&                  \
    (__FLT_MANT_DIG__   ==   24) &&                  \
    (__FLT_MAX_10_EXP__ ==   38) &&                  \
    (__FLT_MAX_EXP__    ==  128) &&                  \
    (__FLT_MIN_10_EXP__ ==  -37) &&                  \
    (__FLT_MIN_EXP__    == -125)
#endif
