#ifndef EBADF
#  ifdef __linux__
#    define EBADF 9
#  else
#    error
#  endif
#endif
