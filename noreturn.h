#ifndef noreturn
#  if defined(__cplusplus) && __cplusplus >= 201103L
#    define noreturn \
    _Pragma("clang diagnostic push") \
    _Pragma("clang diagnostic ignored \"-Wdisabled-macro-expansion\"") \
    [[noreturn]] \
    _Pragma("clang diagnostic pop")
#  elif defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
#    define noreturn _Noreturn
#  elif defined(__GNUC__)
#    define noreturn __attribute__((__noreturn__))
#  else
#    error
#  endif
#endif
