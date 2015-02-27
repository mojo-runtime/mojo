#ifndef c_va_list_h_
#define c_va_list_h_

#if !defined(has_builtin_va_list)
#  if defined(__clang__) // __has_builtin(): does not seem to apply
#    define has_builtin_va_list 1
#  elif defined(__GNUC__) // TODO: version
#    define has_builtin_va_list 1
#  else
#    error
#  endif
#endif

#if has_builtin_va_list
#  define va_list __builtin_va_list
#else
#  error
#endif

#endif
