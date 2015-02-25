#ifndef compiler_has_builtin_va_arg
#  ifdef __GNUC__ /* __has_builtin: false negative */
#    define compiler_has_builtin_va_arg 1 /* assuming */
#  else
#    error todo
#  endif
#endif
