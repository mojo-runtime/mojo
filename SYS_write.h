#ifndef SYS_write
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_write 1
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
