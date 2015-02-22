#ifndef SYS_getcwd
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_getcwd 79
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
