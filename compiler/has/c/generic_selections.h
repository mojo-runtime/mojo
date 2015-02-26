#ifndef compiler_has_c_generic_selections
#  ifdef __has_feature
#    define compiler_has_c_generic_selections __has_feature(c_generic_selections)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_c_generic_selections compiler_has_gnuc_minor(4, 9)
#  else
#    error todo
#  endif
#endif
