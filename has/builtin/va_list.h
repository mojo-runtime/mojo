#ifndef has_builtin_va_list
#  ifdef __GNUC__ /* __has_builtin: false negative */
#    define has_builtin_va_list 1 /* assuming */
#  else
#    error todo
#  endif
#endif
