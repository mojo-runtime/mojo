#ifndef EPOLLERR

#if defined(__linux__)
#  include "POLLERR.h"
#  define EPOLLERR POLLERR
#else
#  error
#endif

#endif
