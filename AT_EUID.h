#ifndef c_AT_EUID_h_
#define c_AT_EUID_h_

#include "_c_AT_.h"

#if defined(__linux__)
_c_AT_(EUID, 12);
#else
#  error
#endif

#endif
