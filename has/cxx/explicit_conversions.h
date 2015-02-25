#ifndef compiler_has_cxx_explicit_conversions
#  ifdef __has_feature
#    define compiler_has_cxx_explicit_conversions __has_feature(cxx_explicit_conversions)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_cxx_explicit_conversions has_gcc_minor(4, 5)
#  else
#    error todo
#  endif
#endif
