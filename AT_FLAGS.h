#ifndef c_AT_FLAGS_h_
#define c_AT_FLAGS_h_

#include "_internal/_c_define_AT_.h"

#if defined(__linux__)
_c_define_AT_(FLAGS, 8);
#else
#  error
#endif

#endif
