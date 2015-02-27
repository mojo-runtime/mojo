#ifndef c_va_copy_h_
#define c_va_copy_h_

#if !defined(has_builtin_va_copy)
#  if defined(__clang__) // __has_builtin(): does not seem to apply
#    define has_builtin_va_copy 1
#  elif defined(__GNUC__) // TODO: version
#    define has_builtin_va_copy 1
#  else
#    error
#  endif
#endif

#if has_builtin_va_copy
#  define va_copy __builtin_va_copy
#else
#  error
#endif

#endif
