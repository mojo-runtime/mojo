#ifndef O_EXCL
#  ifdef __linux__
#    ifdef __x86_64__
#      define O_EXCL 0200
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
