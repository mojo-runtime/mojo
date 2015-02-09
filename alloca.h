#ifndef alloca
#  ifdef __GNUC__
#    define alloca(size) __builtin_alloca(size)
#  else
#    error
#  endif
#endif
