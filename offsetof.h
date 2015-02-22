#ifndef offsetof
#  ifdef __GNUC__
#    define offsetof __builtin_offsetof
#  else
#    error
#  endif
#endif
