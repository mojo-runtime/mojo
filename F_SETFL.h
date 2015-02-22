#ifndef c_F_SETFL_h_
#define c_F_SETFL_h_

#include "_internal/_c_define_F_.h"

#ifdef __linux__
_c_define_F_(SETFL, 4);
#else
#  error
#endif

#endif
