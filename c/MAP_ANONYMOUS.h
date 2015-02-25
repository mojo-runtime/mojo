#ifndef MAP_ANONYMOUS
#  ifdef __linux__
#    ifdef __x86_64__
#      define MAP_ANONYMOUS 0x20
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
