#ifndef c_AT_BASE_h_
#define c_AT_BASE_h_

#include "_define/AT_.h"

#if defined(__linux__)
_c_define_AT_(BASE, 7);
#else
#  error
#endif

#endif
