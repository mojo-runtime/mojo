#ifndef has_ieee754_double
#define has_ieee754_double                           \
    (__DBL_DIG__        ==    15) &&                 \
    (__DBL_MANT_DIG__   ==    53) &&                 \
    (__DBL_MAX_10_EXP__ ==   308) &&                 \
    (__DBL_MAX_EXP__    ==  1024) &&                 \
    (__DBL_MIN_10_EXP__ ==  -307) &&                 \
    (__DBL_MIN_EXP__    == -1021)
#endif
