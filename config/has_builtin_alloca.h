#if !defined(has_builtin_alloca)
#  if defined(__has_builtin)
#    define has_builtin_alloca (__has_builtin(__builtin_alloca))
#  elif defined(__GNUC__) // TODO: version
#    define has_builtin_alloca 1
#  else
#    error
#  endif
#endif
