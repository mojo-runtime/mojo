#ifndef SYS_getuid
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_getuid 102
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
