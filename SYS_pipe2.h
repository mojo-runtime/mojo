#ifndef SYS_pipe2
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_pipe2 293
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
