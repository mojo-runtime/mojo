#ifndef x_packed
#  ifdef __GNUC__
#    define x_aligned(x) __attribute__((__aligned__(x)))
#  else
#    error
#  endif
#endif
