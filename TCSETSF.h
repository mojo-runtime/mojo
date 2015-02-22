#ifndef TCSETSF
#  ifdef __linux__
#    define TCSETSF 0x5404
#  else
#    error
#  endif
#endif
