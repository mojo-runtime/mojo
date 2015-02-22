#ifndef SIGALRM
#  ifdef __linux__
#    define SIGALRM 14
#  else
#    error
#  endif
#endif
