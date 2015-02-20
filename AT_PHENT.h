#ifndef c_AT_PHENT_h_
#define c_AT_PHENT_h_

#include "_c_define_AT_.h"

#if defined(__linux__)
_c_define_AT_(PHENT, 4);
#else
#  error
#endif

#endif
