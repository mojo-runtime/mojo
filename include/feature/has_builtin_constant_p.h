#ifndef has_builtin_constant_p

#if defined(__has_builtin)
#  define has_builtin_constant_p __has_builtin(__builtin_constant_p)
#elif defined(__GNUC__) // TODO: version
#  define has_builtin_constant_p 1
#else
#  error
#endif

#endif
