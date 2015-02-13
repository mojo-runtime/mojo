#ifndef static_assert
#  if defined(__cplusplus) && __cplusplus >= 201103L
//
#  elif defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
#    define static_assert(x, message) _Static_assert(x, message)
#  else
#    error
#  endif
#endif
