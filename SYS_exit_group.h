#ifndef c_SYS_exit_group_h_
#define c_SYS_exit_group_h_

#include "_define/SYS_.h"

#if defined(__linux__) && defined(__x86_64__)
_c_define_SYS_(exit_group, 231);
#else
#  error
#endif

#endif
