#ifndef AT_HWCAP
#  ifdef __linux__
#    define AT_HWCAP 16
#  else
#    error
#  endif
#endif
