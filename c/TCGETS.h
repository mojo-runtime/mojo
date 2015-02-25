#ifndef TCGETS
#  ifdef __linux__
#    define TCGETS 0x5401
#  else
#    error
#  endif
#endif
