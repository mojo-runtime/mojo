#ifndef ENOTTY
#  ifdef __linux__
#    define ENOTTY 25
#  else
#    error
#  endif
#endif
