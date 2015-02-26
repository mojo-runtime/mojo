#ifndef has_cxx_relaxed_constexpr
#  ifdef __has_feature
#    define has_cxx_relaxed_constexpr __has_feature(cxx_relaxed_constexpr)
#  elif defined __GNUC__
#    include "has/gnuc/major.h"
#    define has_cxx_relaxed_constexpr has_gcc_major(5)
#  else
#    error todo
#  endif
#endif
