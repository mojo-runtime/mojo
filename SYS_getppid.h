#ifndef SYS_getppid
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_getppid 110
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
