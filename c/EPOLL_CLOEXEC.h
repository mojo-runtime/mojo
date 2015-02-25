#ifndef EPOLL_CLOEXEC
#  ifdef __linux__
#    include "O_CLOEXEC.h"
#    define EPOLL_CLOEXEC O_CLOEXEC
#  else
#    error
#  endif
#endif
