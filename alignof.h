#ifndef alignof
#  if defined(__cplusplus) && __cplusplus >= 201103L
//
#  elif defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
#    define alignof(x) _Alignof(x)
#  else
#    error
#  endif
#endif
