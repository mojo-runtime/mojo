#ifndef EPOLLIN
#  ifdef __linux__
#    include "POLLIN.h"
#    define EPOLLIN POLLIN
#  else
#    error
#  endif
#endif
