#pragma once

#if defined(__arm__)
#  define __NR_epoll_ctl 251
#elif defined(__x86_64__)
#  define __NR_epoll_ctl 233
#else
#  error
#endif

#error
