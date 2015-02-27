#if !defined(has_builtin_assume)
#  if defined(__has_builtin)
#    define has_builtin_assume __has_builtin(__builtin_assume)
#  elif defined(__GNUC__) // TODO: version
#    define has_builtin_assume 0
#  else
#    error
#  endif
#endif
