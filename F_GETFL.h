#ifndef c_F_GETFL_h_
#define c_F_GETFL_h_

#include "_define/F_.h"

#ifdef __linux__
_c_define_F_(GETFL, 3);
#else
#  error
#endif

#endif
