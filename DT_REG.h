#ifndef c_DT_REG_h_
#define c_DT_REG_h_

#include "_c_define_DT_.h"

#if defined(__linux__)
_c_define_DT_(REG, 8);
#else
#  error
#endif

#endif
