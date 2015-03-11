#ifndef has_builtin_va_end

#if defined(__clang__) // __has_builtin(): does not seem to apply
#  define has_builtin_va_end 1
#elif defined(__GNUC__) // TODO: version
#  define has_builtin_va_end 1
#else
#  error
#endif

#endif
