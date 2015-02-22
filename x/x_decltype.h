#ifndef x_decltype
#  if defined(__cplusplus) && __cplusplus >= 201103L
#    define x_decltype decltype
#  elif defined(__GNUC__)
#    define x_decltype __typeof__
#  else
#    error
#  endif
#endif
