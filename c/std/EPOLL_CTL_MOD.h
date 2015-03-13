#ifndef EPOLL_CTL_MOD

#if defined(__linux__)
#  define EPOLL_CTL_MOD 3
#else
#  error
#endif

#endif
