#ifndef c_SYS_getpid_h_
#define c_SYS_getpid_h_

#include "_internal/_c_define_SYS_.h"

#if defined(__linux__) && defined(__x86_64__)
_c_define_SYS_(getpid, 39);
#else
#  error
#endif

#endif
