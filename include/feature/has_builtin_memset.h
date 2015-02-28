#ifndef has_builtin_memset

#if defined(__has_builtin)
#  define has_builtin_memset __has_builtin(__builtin_memset)
#elif defined(__GNUC__) // TODO: version
#  define has_builtin_memset 1
#else
#  error
#endif

#endif
