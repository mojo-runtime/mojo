#ifndef SYS_pause
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_pause 34
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
