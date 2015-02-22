#ifndef AT_EUID
#  ifdef __linux__
#    define AT_EUID 12
#  else
#    error
#  endif
#endif
