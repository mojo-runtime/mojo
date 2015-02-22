#ifndef c_AT_NOTELF_h_
#define c_AT_NOTELF_h_

#include "_internal/_c_define_AT_.h"

#if defined(__linux__)
_c_define_AT_(NOTELF, 10);
#else
#  error
#endif

#endif
