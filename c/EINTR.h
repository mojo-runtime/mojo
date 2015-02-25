#ifndef EINTR
#  ifdef __linux__
#    define EINTR 4
#  else
#    error
#  endif
#endif
