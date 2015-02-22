#ifndef SYS_chown
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_chown 92
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
