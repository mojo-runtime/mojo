#ifndef CLD_KILLED
#  ifdef __linux__
#    define CLD_KILLED 2
#  else
#    error
#  endif
#endif
