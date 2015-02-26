#ifndef compiler_has_c_boolean_type
#  ifdef __GNUC__
#    include "compiler/has/gnuc/major.h"
#    define compiler_has_c_boolean_type compiler_has_gnuc_major(3)
#  else
#    error todo
#  endif
#endif
