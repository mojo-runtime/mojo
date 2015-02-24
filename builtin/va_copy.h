#ifndef has_builtin_va_copy
#  ifdef __GNUC__ /* __has_builtin: false negative */
#    define has_builtin_va_copy 1 /* assuming */
#  else
#    error todo
#  endif
#endif
