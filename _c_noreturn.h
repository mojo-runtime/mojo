#ifndef _c_noreturn
#  if defined(__cplusplus) && __cplusplus >= 201103L
#    define _c_noreturn [[noreturn]]
#  elif defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
#    define _c_noreturn _Noreturn
#  elif defined(__GNUC__)
#    define _c_noreturn __attribute__((__noreturn__))
#  else
#    error
#  endif
#endif
