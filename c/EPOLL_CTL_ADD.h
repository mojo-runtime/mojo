#ifndef EPOLL_CTL_ADD

#if defined(__linux__)
#  define EPOLL_CTL_ADD 1
#else
#  error
#endif

#endif
