#ifndef has_builtin_va_start
#  ifdef __GNUC__ /* __has_builtin: false negative */
#    define has_builtin_va_start 1 /* assuming */
#  else
#    error todo
#  endif
#endif
