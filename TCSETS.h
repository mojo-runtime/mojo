#ifndef c_TCSETS_h_
#define c_TCSETS_h_

#include "_internal/_c_define_ioctl.h"

#ifdef __linux__
_c_define_ioctl(TCSETS, 0x5402);
#else
#  error
#endif

#endif
