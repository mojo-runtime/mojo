#ifndef SIGKILL
#  ifdef __linux__
#    define SIGKILL 9
#  else
#    error
#  endif
#endif
