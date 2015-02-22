#ifndef c_TCSETSF_h_
#define c_TCSETSF_h_

#include "_internal/_c_define_ioctl.h"

#ifdef __linux__
_c_define_ioctl(TCSETSF, 0x5404);
#else
#  error
#endif

#endif
