#ifndef ENODEV
#  ifdef __linux__
#    define ENODEV 19
#  else
#    error
#  endif
#endif
