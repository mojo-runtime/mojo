#ifndef has_builtin_va_end
#  ifdef __GNUC__ /* __has_builtin: false negative */
#    define has_builtin_va_end 1 /* assuming */
#  else
#    error todo
#  endif
#endif
