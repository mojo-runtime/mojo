#ifndef DT_BLK
#  ifdef __linux__
#    define DT_BLK 6
#  else
#    error
#  endif
#endif
