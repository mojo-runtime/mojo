#ifndef EAGAIN
#  ifdef __linux__
#    ifdef __alpha__
#      define EAGAIN 35
#    else
#      define EAGAIN 11
#    endif
#  else
#    error
#  endif
#endif
