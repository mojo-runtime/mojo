#ifndef compiler_has_cxx_relaxed_constexpr
#  ifdef __has_feature
#    define compiler_has_cxx_relaxed_constexpr __has_feature(cxx_relaxed_constexpr)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/major.h"
#    define compiler_has_cxx_relaxed_constexpr compiler_has_gcc_major(5)
#  else
#    error todo
#  endif
#endif
