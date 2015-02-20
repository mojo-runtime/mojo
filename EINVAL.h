#ifndef c_EINVAL_h_
#define c_EINVAL_h_

#include "_define/E.h"

#ifdef __linux__
_c_define_E(INVAL, 22);
#else
#  error
#endif

#endif
