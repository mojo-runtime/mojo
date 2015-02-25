#ifndef SYS_clock_getres
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_clock_getres 229
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
