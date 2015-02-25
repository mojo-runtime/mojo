#ifndef SYS_dup
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_dup 32
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
