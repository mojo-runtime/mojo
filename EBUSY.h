#ifndef EBUSY
#  ifdef __linux__
#    define EBUSY 16
#  else
#    error
#  endif
#endif
