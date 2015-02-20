#ifndef c_SYS_inotify_rm_watch_h_
#define c_SYS_inotify_rm_watch_h_

#include "_define/SYS_.h"

#if defined(__linux__) && defined(__x86_64__)
_c_define_SYS_(inotify_rm_watch, 255);
#else
#  error
#endif

#endif
