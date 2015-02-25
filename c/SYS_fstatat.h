#ifndef SYS_fstatat
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_fstatat 262
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
