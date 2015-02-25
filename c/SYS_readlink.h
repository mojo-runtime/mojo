#ifndef SYS_readlink
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_readlink 89
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
