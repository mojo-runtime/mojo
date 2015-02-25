#ifndef DT_SOCK
#  ifdef __linux__
#    define DT_SOCK 12
#  else
#    error
#  endif
#endif
