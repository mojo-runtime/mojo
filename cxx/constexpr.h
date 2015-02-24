#ifndef has_cxx_constexpr
#  ifdef __has_extension
#    define has_cxx_constexpr __has_extension(cxx_constexpr)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_cxx_constexpr has_gcc_minor(4, 6)
#  else
#    error todo
#  endif
#endif
