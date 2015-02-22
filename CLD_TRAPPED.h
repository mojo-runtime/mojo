#ifndef CLD_TRAPPED
#  ifdef __linux__
#    define CLD_TRAPPED 4
#  else
#    error
#  endif
#endif
