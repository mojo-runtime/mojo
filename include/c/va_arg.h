#ifndef va_arg

#if defined(__GNUC__) // Assuming
#  define va_arg __builtin_va_arg
#else
#  error
#endif

#endif
