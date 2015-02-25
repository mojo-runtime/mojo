#ifndef P_PID
#  ifdef __linux__
#    define P_PID 1
#  else
#    error
#  endif
#endif
