#ifndef c_DT_DIR_h_
#define c_DT_DIR_h_

#include "_c_define_DT_.h"

#if defined(__linux__)
_c_define_DT_(DIR, 4);
#else
#  error
#endif

#endif
