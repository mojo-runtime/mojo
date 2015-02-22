#ifndef POLLIN
#  ifdef __linux__
#    define POLLIN 1
#  else
#    error
#  endif
#endif
