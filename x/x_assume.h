#ifndef x_assume
#  ifdef __has_builtin
#    if __has_builtin(__builtin_assume)
#      define x_assume __builtin_assume
#    endif
#  endif
#  ifndef x_assume
#    define x_assume(condition)
#  endif
#endif
