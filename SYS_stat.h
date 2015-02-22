#ifndef SYS_stat
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_stat 4
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
