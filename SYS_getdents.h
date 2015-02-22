#ifndef c_SYS_getdents_h_
#define c_SYS_getdents_h_

#include "_internal/_c_define_SYS_.h"

#if defined(__linux__) && defined(__x86_64__)
_c_define_SYS_(getdents, 78);
#else
#  error
#endif

#endif
