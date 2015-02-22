#ifndef SIGILL
#  ifdef __linux__
#    define SIGILL 4
#  else
#    error
#  endif
#endif
