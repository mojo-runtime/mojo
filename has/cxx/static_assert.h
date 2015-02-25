#ifndef compiler_has_cxx_static_assert
#  ifdef __has_feature
#    define compiler_has_cxx_static_assert __has_feature(cxx_static_assert)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_cxx_static_assert has_gcc_minor(4, 3)
#  else
#    error todo
#  endif
#endif
