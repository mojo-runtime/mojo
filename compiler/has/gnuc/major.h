#ifndef compiler_has_gnuc_major
#  ifdef __GNUC__
#    define compiler_has_gnuc_major(x) (__GNUC__ >= (x))
#  else
#    define compiler_has_gnuc_major(x) 0
#  endif
#endif
