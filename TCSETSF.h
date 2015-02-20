#ifndef c_TCSETSF_h_
#define c_TCSETSF_h_

#include "_c_define_TC.h"

#ifdef __linux__
_c_define_TC(SETSF, 0x5404);
#else
#  error
#endif

#endif
