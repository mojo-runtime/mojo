#ifndef c_AT_ENTRY_h_
#define c_AT_ENTRY_h_

#include "_internal/_c_define_AT_.h"

#if defined(__linux__)
_c_define_AT_(ENTRY, 9);
#else
#  error
#endif

#endif
