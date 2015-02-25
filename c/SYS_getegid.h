#ifndef SYS_getegid
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_getegid 108
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
