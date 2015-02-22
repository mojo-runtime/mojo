#ifndef O_CREAT
#  ifdef __linux__
#    if __x86_64__
#      define O_CREAT 0100
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
