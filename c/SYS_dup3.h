#ifndef SYS_dup3
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_dup3 292
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
