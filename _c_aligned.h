#ifndef _c_aligned
#  ifdef __GNUC__
#    define _c_aligned(x) __attribute__((__aligned__(x)))
#  else
#    error
#  endif
#endif
