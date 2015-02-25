#ifndef SYS_exit_group
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_exit_group 231
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
