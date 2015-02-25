#ifndef SYS_getdents
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_getdents 78
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
