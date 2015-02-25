#ifndef SYS_kill
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_kill 62
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
