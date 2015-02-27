#if !defined(has_builtin_strcmp)
#  if defined(__has_builtin)
#    define has_builtin_strcmp (__has_builtin(__builtin_strcmp))
#  elif defined(__GNUC__) // TODO: version
#    define has_builtin_strcmp 1
#  else
#    error
#  endif
#endif
