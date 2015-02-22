#ifndef SYS_rmdir
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_rmdir 94
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
