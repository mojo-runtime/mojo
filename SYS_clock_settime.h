#ifndef SYS_clock_settime
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_clock_settime 227
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
