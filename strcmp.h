#ifndef c_strcmp_h_
#define c_strcmp_h_

#if !defined(has_builtin_strcmp)
#  if defined(__has_builtin)
#    define has_builtin_strcmp __has_builtin(__builtin_strcmp)
#  elif defined(__GNUC__) // TODO: version
#    define has_builtin_strcmp
#  else
#    error
#  endif
#endif

#if has_builtin_strcmp
#  define strcmp __builtin_strcmp
#else
#  error
#endif

#endif
