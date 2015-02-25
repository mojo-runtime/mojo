#ifndef O_RDWR
#  ifdef __linux__
#    define O_RDWR 2
#  else
#    error
#  endif
#endif
