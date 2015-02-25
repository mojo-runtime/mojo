#ifndef O_NONBLOCK
#  ifdef __linux__
#    ifdef __x86_64__
#      define O_NONBLOCK 04000
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
