#ifndef has_builtin_unreachable

#if defined(__has_builtin)
#  define has_builtin_unreachable __has_builtin(__builtin_unreachable)
#elif defined(__GNUC__) // TODO: version
#  define has_builtin_unreachable 1
#else
#  error
#endif

#endif
