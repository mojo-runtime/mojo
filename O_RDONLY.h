#ifndef O_RDONLY
#  ifdef __linux__
#    define O_RDONLY 0
#  else
#    error
#  endif
#endif
