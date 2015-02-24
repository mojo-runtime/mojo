#ifndef has_cxx_relaxed_constexpr
#  ifdef __has_extension
#    define has_cxx_relaxed_constexpr __has_extension(cxx_relaxed_constexpr)
#  elif defined __GNUC__
#    include "has/gcc/major.h"
#    define has_cxx_relaxed_constexpr has_gcc_major(5)
#  else
#    error todo
#  endif
#endif
