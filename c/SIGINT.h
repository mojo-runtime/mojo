#ifndef SIGINT
#  ifdef __linux__
#    define SIGINT 2
#  else
#    error
#  endif
#endif
