#ifndef c_EXDEV_h_
#define c_EXDEV_h_

#include "_c_define_E.h"

#ifdef __linux__
_c_define_E(XDEV, 18);
#else
#  error
#endif

#endif
