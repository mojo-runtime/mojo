#ifndef EPERM
#  ifdef __linux__
#    define EPERM 1
#  else
#    error
#  endif
#endif
