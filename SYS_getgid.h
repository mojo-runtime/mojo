#ifndef SYS_getgid
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_getgid 104
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
