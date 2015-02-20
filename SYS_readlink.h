#ifndef c_SYS_readlink_h_
#define c_SYS_readlink_h_

#include "_c_define_SYS_.h"

#if defined(__linux__) && defined(__x86_64__)
_c_define_SYS_(readlink, 89);
#else
#  error
#endif

#endif
