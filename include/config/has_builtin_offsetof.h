#ifndef has_builtin_offsetof

#if defined(__clang__)
// Workaround: false negative (3.6.0)
// if defined(__has_builtin)
//   define has_builtin_offsetof __has_builtin(__builtin_offsetof)
#  define has_builtin_offsetof 1
#elif defined(__GNUC__) // TODO: version
#  define has_builtin_offsetof 1
#else
#  error
#endif

#endif
