#ifndef c_SYS_getcwd_h_
#define c_SYS_getcwd_h_

#include "_c_define_SYS_.h"

#if defined(__linux__) && defined(__x86_64__)
_c_define_SYS_(getcwd, 79);
#else
#  error
#endif

#endif
