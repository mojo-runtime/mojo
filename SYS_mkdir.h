#ifndef SYS_mkdir
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_mkdir 83
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
