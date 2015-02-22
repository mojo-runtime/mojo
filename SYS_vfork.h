#ifndef SYS_vfork
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_vfork 58
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
