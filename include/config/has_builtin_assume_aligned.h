#ifndef has_builtin_assume_aligned

#if defined(__has_builtin)
#  define has_builtin_assume_aligned __has_builtin(__builtin_assume_aligned)
#elif defined(__GNUC__) // TODO: version
#  define has_builtin_assume_aligned 1
#else
#  error
#endif

#endif
