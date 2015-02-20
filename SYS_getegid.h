#ifndef c_SYS_getegid_h_
#define c_SYS_getegid_h_

#include "_c_define_SYS_.h"

#if defined(__linux__) && defined(__x86_64__)
_c_define_SYS_(getegid, 108);
#else
#  error
#endif

#endif
