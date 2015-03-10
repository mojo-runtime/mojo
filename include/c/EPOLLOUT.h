#ifndef EPOLLOUT

#if defined(__linux__)
#  include "POLLOUT.h"
#  define EPOLLOUT POLLOUT
#else
#  error
#endif

#endif
