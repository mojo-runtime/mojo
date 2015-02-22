#ifndef c_SYS_epoll_ctl_h_
#define c_SYS_epoll_ctl_h_

#include "_internal/_c_define_SYS_.h"

#if defined(__linux__) && defined(__x86_64__)
_c_define_SYS_(epoll_ctl, 233);
#else
#  error
#endif

#endif
