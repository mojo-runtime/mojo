#ifndef SYS_chmod
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_chmod 90
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
