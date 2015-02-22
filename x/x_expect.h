#ifndef x_expect
#  ifdef __GNUC__
#    define x_expect __builtin_expect
#  else
#    error
#  endif
#endif
