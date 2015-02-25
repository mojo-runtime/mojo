#ifndef O_WRONLY
#  ifdef __linux__
#    define O_WRONLY 1
#  else
#    error
#  endif
#endif
