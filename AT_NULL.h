#ifndef c_AT_NULL_h_
#define c_AT_NULL_h_

#include "_internal/_c_define_AT_.h"

#ifdef __linux__
_c_define_AT_(NULL, 0);
#else
#  error
#endif

#endif
