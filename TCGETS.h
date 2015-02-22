#ifndef c_TCGETS_h_
#define c_TCGETS_h_

#include "_internal/_c_define_ioctl.h"

#ifdef __linux__
_c_define_ioctl(TCGETS, 0x5401);
#else
#  error
#endif

#endif
