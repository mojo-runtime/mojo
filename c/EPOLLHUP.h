#ifndef EPOLLHUP

#if defined(__linux__)
#  include "POLLHUP.h"
#  define EPOLLHUP POLLHUP
#else
#  error
#endif

#endif
