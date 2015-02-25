#ifndef EPOLLONESHOT
#  ifdef __linux__
#    define EPOLLONESHOT (1 << 30)
#  else
#    error
#  endif
#endif
