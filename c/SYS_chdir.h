#ifndef SYS_chdir
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_chdir 80
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
