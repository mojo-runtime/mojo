#ifndef c_SYS_fstatat_h_
#define c_SYS_fstatat_h_

#include "_c_define_SYS_.h"

#if defined(__linux__) && defined(__x86_64__)
_c_define_SYS_(fstatat, 262);
#else
#  error
#endif

#endif
