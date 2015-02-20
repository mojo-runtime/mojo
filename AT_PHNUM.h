#ifndef c_AT_PHNUM_h_
#define c_AT_PHNUM_h_

#include "_define/AT_.h"

#if defined(__linux__)
_c_define_AT_(PHNUM, 5);
#else
#  error
#endif

#endif
