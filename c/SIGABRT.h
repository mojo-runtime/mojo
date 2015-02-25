#ifndef SIGABRT
#  ifdef __linux__
#    define SIGABRT 6
#  else
#    error
#  endif
#endif
