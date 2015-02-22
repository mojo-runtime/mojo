#ifndef x_unreachable
#  ifdef __GNUC__
#    define x_unreachable __builtin_unreachable
#  else
#    error
#  endif
#endif
