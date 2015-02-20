#ifndef c_AT_HWCAP2_h_
#define c_AT_HWCAP2_h_

#include "_c_define_AT_.h"

#if defined(__linux__)
_c_define_AT_(HWCAP2, 26);
#else
#  error
#endif

#endif
