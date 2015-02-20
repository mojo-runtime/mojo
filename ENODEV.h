#ifndef c_ENODEV_h_
#define c_ENODEV_h_

#include "_c_define_E.h"

#ifdef __linux__
_c_define_E(NODEV, 19);
#else
#  error
#endif

#endif
