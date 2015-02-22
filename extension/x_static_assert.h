#ifndef x_static_assert
#  if defined(__cplusplus) && __cplusplus >= 201103L
#    define x_static_assert static_assert
#  elif defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
#    define x_static_assert _Static_assert
#  else
#    error
#  endif
#endif
