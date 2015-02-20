#ifndef c_SYS_getgid_h_
#define c_SYS_getgid_h_

#include "_c_define_SYS_.h"

#if defined(__linux__) && defined(__x86_64__)
_c_define_SYS_(getgid, 104);
#else
#  error
#endif

#endif
