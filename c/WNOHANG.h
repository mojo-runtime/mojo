#ifndef WNOHANG
#  ifdef __linux__
#    define WNOHANG 1
#  else
#    error
#  endif
#endif
