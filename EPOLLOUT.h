#ifndef EPOLLOUT
#  ifdef __linux__
#    include "POLLOUT.h"
#    define EPOLLOUT POLLOUT
#  else
#    error
#  endif
#endif
