#ifndef SYS_mmap
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_mmap 9
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
