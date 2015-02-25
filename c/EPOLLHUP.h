#ifndef EPOLLHUP
#  ifdef __linux__
#    include "POLLHUP.h"
#    define EPOLLHUP POLLHUP
#  else
#    error
#  endif
#endif
