#ifndef EWOULDBLOCK
#  ifdef __linux__
#    include "EAGAIN.h"
#    define EWOULDBLOCK EAGAIN
#  else
#    error
#  endif
#endif
