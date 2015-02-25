#ifndef EACCES
#  ifdef __linux__
#    define EACCES 13
#  else
#    error
#  endif
#endif
