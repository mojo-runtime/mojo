#ifndef MAP_SHARED
#  ifdef __linux__
#    define MAP_SHARED 1
#  else
#    error
#  endif
#endif
