#ifndef SYS_dup2
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_dup2 33
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
