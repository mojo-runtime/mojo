#ifndef platform_has_integer_64
#  ifdef __x86_64__
#    define platform_has_integer_64 1
#  else
#    error
#  endif
#endif
