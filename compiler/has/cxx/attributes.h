#ifndef compiler_has_cxx_attributes
#  ifdef __has_feature
#    define compiler_has_cxx_attributes __has_feature(cxx_attributes)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_cxx_attributes compiler_has_gnuc_minor(4, 8)
#  else
#    error todo
#  endif
#endif
