#ifndef SIGCHLD
#  ifdef __linux__
#    ifdef __x86_64__
#      define SIGCHLD 17
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
