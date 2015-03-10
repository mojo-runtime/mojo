#ifndef has_builtin_memcpy

#if defined(__has_builtin)
#  define has_builtin_memcpy __has_builtin(__builtin_memcpy)
#elif defined(__GNUC__) // TODO: version
#  define has_builtin_memcpy 1
#else
#  error
#endif

#endif
