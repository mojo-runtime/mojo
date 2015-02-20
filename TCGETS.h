#ifndef c_TCGETS_h_
#define c_TCGETS_h_

#include "_c_define_TC.h"

#ifdef __linux__
_c_define_TC(GETS, 0x5401);
#else
#  error
#endif

#endif
