#ifndef c_va_arg_h_
#define c_va_arg_h_

#if !defined(has_builtin_va_arg)
#  if defined(__clang_) // __has_builtin(): does not seem to apply
#    define has_builtin_va_arg 1
#  elif defined(__GNUC__) // TODO: version
#    define has_builtin_va_arg 1
#  else
#    error
#  endif
#endif

#if has_builtin_va_arg
#  define va_arg __builtin_va_arg
#else
#  error
#endif

#endif
