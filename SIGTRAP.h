#ifndef SIGTRAP
#  ifdef __linux__
#    define SIGTRAP 5
#  else
#    error
#  endif
#endif
