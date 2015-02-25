#ifndef SYS_geteuid
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_geteuid 107
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
