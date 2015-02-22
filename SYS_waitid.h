#ifndef SYS_waitid
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_waitid 247
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
