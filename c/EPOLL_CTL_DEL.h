#ifndef EPOLL_CTL_DEL

#if defined(__linux__)
#  define EPOLL_CTL_DEL 2
#else
#  error
#endif

#endif
