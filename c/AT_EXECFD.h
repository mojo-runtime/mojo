#ifndef AT_EXECFD
#  ifdef __linux__
#    define AT_EXECFD 2
#  else
#    error
#  endif
#endif
