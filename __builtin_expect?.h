#ifndef __builtin_expect
#  ifndef __GNUC__
#    define __builtin_expect(x, y) (x)
#  endif
#endif
