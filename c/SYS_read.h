#ifndef SYS_read
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_read 0
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
