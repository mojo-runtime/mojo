#ifndef has_c_boolean_type
#  ifdef __GNUC__
#    include "has/gnuc/major.h"
#    define has_c_boolean_type has_gnuc_major(3)
#  else
#    error todo
#  endif
#endif
