#ifndef CLD_STOPPED
#  ifdef __linux__
#    define CLD_STOPPED 5
#  else
#    error
#  endif
#endif
