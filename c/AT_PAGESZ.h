#ifndef AT_PAGESZ
#  ifdef __linux__
#    define AT_PAGESZ 6
#  else
#    error
#  endif
#endif
