#ifndef c_SYS_epoll_create1_h_
#define c_SYS_epoll_create1_h_

#include "_internal/_c_define_SYS_.h"

#if defined(__linux__) && defined(__x86_64__)
_c_define_SYS_(epoll_create1, 291);
#else
#  error
#endif

#endif
