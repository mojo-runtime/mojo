#ifndef SYS_mremap
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_mremap 25
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
