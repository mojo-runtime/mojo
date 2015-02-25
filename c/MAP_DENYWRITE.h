#ifndef MAP_DENYWRITE
#  ifdef __linux__
#    ifdef __x86_64__
#      define MAP_DENYWRITE 0x800
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
