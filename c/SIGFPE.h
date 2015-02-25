#ifndef SIGFPE
#  ifdef __linux__
#    define SIGFPE 8
#  else
#    error
#  endif
#endif
