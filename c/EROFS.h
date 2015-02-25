#ifndef EROFS
#  ifdef __linux__
#    define EROFS 30
#  else
#    error
#  endif
#endif
