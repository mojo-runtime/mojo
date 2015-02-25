#ifndef EPOLLWAKEUP
#  ifdef __linux__
#    define EPOLLWAKEUP (1 << 29)
#  else
#    error
#  endif
#endif
