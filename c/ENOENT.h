#ifndef ENOENT
#  ifdef __linux__
#    define ENOENT 2
#  else
#    error
#  endif
#endif
