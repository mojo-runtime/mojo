#ifndef c_SYS_tgkill_h_
#define c_SYS_tgkill_h_

#include "_c_define_SYS_.h"

#if defined(__linux__) && defined(__x86_64__)
_c_define_SYS_(tgkill, 234);
#else
#  error
#endif

#endif
