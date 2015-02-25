#ifndef SYS_clock_gettime
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_clock_gettime 228
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
