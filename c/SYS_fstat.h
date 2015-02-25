#ifndef SYS_fstat
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_fstat 5
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
