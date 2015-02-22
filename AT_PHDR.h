#ifndef AT_PHDR
#  ifdef __linux__
#    define AT_PHDR 3
#  else
#    error
#  endif
#endif
