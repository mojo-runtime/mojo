#ifndef POLLHUP
#  ifdef __linux__
#    define POLLHUP 16
#  else
#    error
#  endif
#endif
