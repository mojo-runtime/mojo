#ifndef has_builtin_offsetof

#if defined(__clang__)
// Workaround: __has_builtin(__builtin_offsetof) → false negative (3.6.0)
#  define has_builtin_offsetof 1
#elif defined(__GNUC__) // TODO: version
#  define has_builtin_offsetof 1
#else
#  error
#endif

#endif
