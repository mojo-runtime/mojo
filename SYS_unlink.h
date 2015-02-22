#ifndef SYS_unlink
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_unlink 87
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
