#ifndef c_SYS_symlink_h_
#define c_SYS_symlink_h_

#include "_define/SYS_.h"

#if defined(__linux__) && defined(__x86_64__)
_c_define_SYS_(symlink, 88);
#else
#  error
#endif

#endif
