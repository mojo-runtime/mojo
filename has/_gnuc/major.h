#ifndef _has_gnuc_major
#  ifdef __GNUC__
#    define _has_gnuc_major(x) (__GNUC__ >= (x))
#  else
#    define _has_gnuc_major(x) 0
#  endif
#endif
