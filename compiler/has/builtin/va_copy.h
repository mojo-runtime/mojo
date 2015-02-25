#ifndef compiler_has_builtin_va_copy
#  ifdef __GNUC__ /* __has_builtin: false negative */
#    define compiler_has_builtin_va_copy 1 /* assuming */
#  else
#    error todo
#  endif
#endif
