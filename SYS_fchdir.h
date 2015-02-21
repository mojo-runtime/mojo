#ifndef c_SYS_fchdir_h_
#define c_SYS_fchdir_h_

#include "_define/SYS_.h"

#if defined(__linux__) && defined(__x86_64__)
_c_define_SYS_(fchdir, 81);
#else
#  error
#endif

#endif
