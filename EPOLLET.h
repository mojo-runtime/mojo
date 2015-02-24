#ifndef EPOLLET
#  ifdef __linux__
#    include "_internal/_c_static_cast.h"
#    define EPOLLET _c_static_cast(int, 1u << 31)
#  else
#    error
#  endif
#endif
