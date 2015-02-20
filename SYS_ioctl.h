#ifndef c_SYS_ioctl_h_
#define c_SYS_ioctl_h_

#include "_c_define_SYS_.h"

#if defined(__linux__) && defined(__x86_64__)
_c_define_SYS_(ioctl, 16);
#else
#  error
#endif

#endif
