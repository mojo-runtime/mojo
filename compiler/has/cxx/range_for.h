#ifndef compiler_has_cxx_range_for
#  ifdef __has_feature
#    define compiler_has_cxx_range_for __has_feature(cxx_range_for)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_cxx_range_for has_gcc_minor(4, 6)
#  else
#    error todo
#  endif
#endif
