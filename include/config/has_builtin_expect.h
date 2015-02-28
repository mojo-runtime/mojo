#if !defined(has_builtin_expect)
#  if defined(__has_builtin)
#    define has_builtin_expect __has_builtin(__builtin_expect)
#  elif defined(__GNUC__)
#    define has_builtin_expect (__GNUC__ >= 3)
#  else
#    error
#  endif
#endif
