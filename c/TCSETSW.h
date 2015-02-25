#ifndef TCSETSW
#  ifdef __linux__
#    define TCSETSW 0x5403
#  else
#    error
#  endif
#endif
