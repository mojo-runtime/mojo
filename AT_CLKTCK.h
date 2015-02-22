#ifndef AT_CLKTCK
#  ifdef __linux__
#    define AT_CLKTCK 17
#  else
#    error
#  endif
#endif
