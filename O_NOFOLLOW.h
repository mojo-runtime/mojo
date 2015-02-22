#ifndef O_NOFOLLOW
#  ifdef __linux__
#    ifdef __x86_64__
#      define O_NOFOLLOW 0400000
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
