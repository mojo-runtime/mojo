#ifndef c_AT_PHDR_h_
#define c_AT_PHDR_h_

#include "_define/AT_.h"

#if defined(__linux__)
_c_define_AT_(PHDR, 3);
#else
#  error
#endif

#endif
