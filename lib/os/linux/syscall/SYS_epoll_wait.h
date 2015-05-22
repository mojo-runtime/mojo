#pragma once

#if defined(__arm__)
#  define SYS_epoll_wait 252
#elif defined(__x86_64__)
#  define SYS_epoll_wait 232
#else
#  error
#endif
