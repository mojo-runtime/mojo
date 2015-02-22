#ifndef x_return_address
#  ifdef __GNUC__
#    define x_return_address __builtin_return_address
#  else
#    error
#  endif
#endif
