#ifndef c_AT_PLATFORM_h_
#define c_AT_PLATFORM_h_

#include "_define/AT_.h"

#if defined(__linux__)
_c_define_AT_(PLATFORM, 15);
#else
#  error
#endif

#endif
