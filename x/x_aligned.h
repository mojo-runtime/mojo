#ifndef x_aligned
#  ifdef __GNUC__
#    define x_aligned(x) __attribute__((__aligned__(x)))
#  else
#    error
#  endif
#endif
