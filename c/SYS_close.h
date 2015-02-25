#ifndef SYS_close
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_close 3
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
