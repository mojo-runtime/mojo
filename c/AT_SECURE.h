#ifndef AT_SECURE
#  ifdef __linux__
#    define AT_SECURE 23
#  else
#    error
#  endif
#endif
