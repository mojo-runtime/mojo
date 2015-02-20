#ifndef c_TCSETSW_h_
#define c_TCSETSW_h_

#include "_c_define_TC.h"

#ifdef __linux__
_c_define_TC(SETSW, 0x5403);
#else
#  error
#endif

#endif
