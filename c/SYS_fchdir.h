#ifndef SYS_fchdir
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_fchdir 81
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
