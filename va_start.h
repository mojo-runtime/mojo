#ifndef c_va_start_h_
#define c_va_start_h_

#if !defined(has_builtin_va_start)
#  if defined(__clang__) // __has_builtin(): does not seem to apply
#    define has_builtin_va_start 1
#  elif defined(__GNUC__) // TODO: version
#    define has_builtin_va_start 1
#  else
#    error
#  endif
#endif

#if has_builtin_va_start
#  define va_start __builtin_va_start
#else
#  error
#endif

#endif
