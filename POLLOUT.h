#ifndef POLLOUT
#  ifdef __linux__
#    define POLLOUT 4
#  else
#    error
#  endif
#endif
