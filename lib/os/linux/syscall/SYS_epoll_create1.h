#pragma once

#if defined(__arm__)
#  define SYS_epoll_create1 357
#elif defined(__x86_64__)
#  define SYS_epoll_create1 291
#else
#  error
#endif
