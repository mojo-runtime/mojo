#ifndef SIGHUP
#  ifdef __linux__
#    define SIGHUP 1
#  else
#    error
#  endif
#endif
