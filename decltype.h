#ifndef decltype
#  if defined(__cplusplus) && __cplusplus >= 201103L
//
#  elif defined(__GNUC__)
#    define decltype(x) __typeof__(x)
#  else
#    error
#  endif
#endif
