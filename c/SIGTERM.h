#ifndef SIGTERM
#  ifdef __linux__
#    define SIGTERM 15
#  else
#    error
#  endif
#endif
