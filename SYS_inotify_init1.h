#ifndef c_SYS_inotify_init1_h_
#define c_SYS_inotify_init1_h_

#include "_internal/_c_define_SYS_.h"

#if defined(__linux__) && defined(__x86_64__)
_c_define_SYS_(inotify_init1, 294);
#else
#  error
#endif

#endif
