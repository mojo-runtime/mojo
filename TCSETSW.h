#ifndef c_TCSETSW_h_
#define c_TCSETSW_h_

#include "_internal/_c_define_ioctl.h"

#ifdef __linux__
_c_define_ioctl(TCSETSW, 0x5403);
#else
#  error
#endif

#endif
