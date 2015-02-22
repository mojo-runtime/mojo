#ifndef SYS_clock_nanosleep
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_clock_nanosleep 230
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
