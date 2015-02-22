#ifndef c_DT_UNKNOWN_h_
#define c_DT_UNKNOWN_h_

#include "_internal/_c_define_DT_.h"

#if defined(__linux__)
_c_define_DT_(UNKNOWN, 0);
#else
#  error
#endif

#endif
