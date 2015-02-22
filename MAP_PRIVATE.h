#ifndef MAP_PRIVATE
#  ifdef __linux__
#    define MAP_PRIVATE 2
#  else
#    error
#  endif
#endif
