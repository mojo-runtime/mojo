#ifndef SYS_gettid
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_gettid 186
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
