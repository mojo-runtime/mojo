#ifndef c_AT_SECURE_h_
#define c_AT_SECURE_h_

#include "_internal/_c_define_AT_.h"

#if defined(__linux__)
_c_define_AT_(SECURE, 23);
#else
#  error
#endif

#endif
