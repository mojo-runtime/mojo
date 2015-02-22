#ifndef CLD_EXITED
#  ifdef __linux__
#    define CLD_EXITED 1
#  else
#    error
#  endif
#endif
