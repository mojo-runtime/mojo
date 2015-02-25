#ifndef SYS_getpid
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_getpid 39
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
