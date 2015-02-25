#ifndef compiler_has_cxx_attributes
#  ifdef __has_feature
#    define compiler_has_cxx_attributes __has_feature(cxx_attributes)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_cxx_attributes has_gcc_minor(4, 8)
#  else
#    error todo
#  endif
#endif
