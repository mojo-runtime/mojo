#ifndef c_EINVAL_h_
#define c_EINVAL_h_

#include "_internal/_c_define_E.h"

#ifdef __linux__
_c_define_E(INVAL, 22);
#else
#  error
#endif

#endif
