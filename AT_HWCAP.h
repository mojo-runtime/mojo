#ifndef c_AT_HWCAP_h_
#define c_AT_HWCAP_h_

#include "_c_AT_.h"

#if defined(__linux__)
_c_AT_(HWCAP, 16);
#else
#  error
#endif

#endif
