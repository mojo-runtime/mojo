#ifndef SYS_open
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_open 2
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
