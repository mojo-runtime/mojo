#ifndef c_SYS_execve_h_
#define c_SYS_execve_h_

#include "_c_define_SYS_.h"

#if defined(__linux__) && defined(__x86_64__)
_c_define_SYS_(execve, 59);
#else
#  error
#endif

#endif
