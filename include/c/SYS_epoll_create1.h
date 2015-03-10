#ifndef SYS_epoll_create1

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_epoll_create1 291
#  else
#    error
#  endif
#else
#  error
#endif

#endif
