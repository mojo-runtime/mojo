#ifndef c_ERANGE_h_
#define c_ERANGE_h_

#include "_internal/_c_define_E.h"

#ifdef __linux__
_c_define_E(RANGE, 34);
#else
#  error
#endif

#endif
