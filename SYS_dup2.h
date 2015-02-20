#ifndef c_SYS_dup2_h_
#define c_SYS_dup2_h_

#include "_define/SYS_.h"

#if defined(__linux__) && defined(__x86_64__)
_c_define_SYS_(dup2, 33);
#else
#  error
#endif

#endif
