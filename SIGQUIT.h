#ifndef SIGQUIT
#  ifdef __linux__
#    define SIGQUIT 3
#  else
#    error
#  endif
#endif
