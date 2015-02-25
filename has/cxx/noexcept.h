#ifndef compiler_has_cxx_noexcept
#  ifdef __has_feature
#    define compiler_has_cxx_noexcept __has_feature(cxx_noexcept)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_cxx_noexcept has_gcc_minor(4, 6)
#  else
#    error todo
#  endif
#endif
