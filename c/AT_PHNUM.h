#ifndef AT_PHNUM
#  ifdef __linux__
#    define AT_PHNUM 5
#  else
#    error
#  endif
#endif
