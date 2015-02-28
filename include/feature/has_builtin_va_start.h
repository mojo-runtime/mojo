#ifndef has_builtin_va_start

#if defined(__clang__) // __has_builtin(): does not seem to apply
#  define has_builtin_va_start 1
#elif defined(__GNUC__) // TODO: version
#  define has_builtin_va_start 1
#else
#  error
#endif

#endif
