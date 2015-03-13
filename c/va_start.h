#ifndef va_start

#if defined(__GNUC__) // Assuming
#  define va_start __builtin_va_start
#else
#  error
#endif

#endif
