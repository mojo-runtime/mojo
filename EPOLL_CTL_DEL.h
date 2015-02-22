#ifndef EPOLL_CTL_DEL
#  ifdef __linux__
#    define EPOLL_CTL_DEL 2
#  else
#    error
#  endif
#endif
