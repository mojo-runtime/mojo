#ifndef POLLPRI
#  ifdef __linux__
#    define POLLPRI 2
#  else
#    error
#  endif
#endif
