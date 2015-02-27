#ifndef has_c_atomic
#  ifdef __has_feature
#    define has_c_atomic __has_feature(c_atomic)
#  elif defined __GNUC__
#    include "has/gnuc/minor.h"
#    define has_c_atomic has_gnuc_minor(4, 9)
#  else
#    error todo
#  endif
#endif
