#ifndef SYS_munmap
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_munmap 11
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
