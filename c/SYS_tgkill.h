#ifndef SYS_tgkill
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_tgkill 234
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
