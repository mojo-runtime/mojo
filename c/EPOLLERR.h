#ifndef EPOLLERR
#  ifdef __linux__
#    include "POLLERR.h"
#    define EPOLLERR POLLERR
#  else
#    error
#  endif
#endif
