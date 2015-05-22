#pragma once

#if defined(__arm__)
#  define SYS_epoll_ctl 251
#elif defined(__x86_64__)
#  define SYS_epoll_ctl 233
#else
#  error
#endif
