#ifndef compiler_has_cxx_constexpr
#  ifdef __has_feature
#    define compiler_has_cxx_constexpr __has_feature(cxx_constexpr)
#  elif defined __GNUC__
#    include "compiler/has/_gnuc/minor.h"
#    define compiler_has_cxx_constexpr _compiler_has_gnuc_minor(4, 6)
#  else
#    error todo
#  endif
#endif
