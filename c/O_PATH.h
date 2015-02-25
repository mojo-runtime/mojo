#ifndef O_PATH
#  ifdef __linux__
#    ifdef __x86_64__
#      define O_PATH 010000000
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
