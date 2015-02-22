#ifndef x_noreturn
#  if defined(__cplusplus) && __cplusplus >= 201103L
#    define x_noreturn [[noreturn]]
#  elif defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
#    define x_noreturn _Noreturn
#  elif defined(__GNUC__)
#    define x_noreturn __attribute__((__noreturn__))
#  else
#    error
#  endif
#endif
