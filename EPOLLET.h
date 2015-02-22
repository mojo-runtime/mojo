#ifndef EPOLLET
#  ifdef __linux__
#    include "extension/x_static_cast.h"
#    define EPOLLET x_static_cast(int, 1u << 31)
#  else
#    error
#  endif
#endif
