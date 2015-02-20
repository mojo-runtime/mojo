#ifndef c_SYS_uname_h_
#define c_SYS_uname_h_

#include "_define/SYS_.h"

#if defined(__linux__) && defined(__x86_64__)
_c_define_SYS_(uname, 63);
#else
#  error
#endif

#endif
