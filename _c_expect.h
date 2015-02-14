#ifndef _c_expect
#  ifdef __GNUC__
#    define _c_expect(x, y) __builtin_expect(x, y)
#  else
#    error todo
#  endif
#endif
