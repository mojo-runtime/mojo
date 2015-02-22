#ifndef SYS_execve
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_execve 59
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
