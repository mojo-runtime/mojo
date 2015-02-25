#ifndef WNOWAIT
#  ifdef __linux__
#    define WNOWAIT 0x1000000
#  else
#    error
#  endif
#endif
