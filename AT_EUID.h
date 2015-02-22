#ifndef c_AT_EUID_h_
#define c_AT_EUID_h_

#include "_internal/_c_define_AT_.h"

#if defined(__linux__)
_c_define_AT_(EUID, 12);
#else
#  error
#endif

#endif
