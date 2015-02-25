#ifndef ECHILD
#  ifdef __linux__
#    define ECHILD 10
#  else
#    error
#  endif
#endif
