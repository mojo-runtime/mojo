#ifndef has_gnuc_major
#  ifdef __GNUC__
#    define has_gnuc_major(x) (__GNUC__ >= (x))
#  else
#    define has_gnuc_major(x) 0
#  endif
#endif
