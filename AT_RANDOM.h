#ifndef AT_RANDOM
#  ifdef __linux__
#    define AT_RANDOM 25
#  else
#    error
#  endif
#endif
