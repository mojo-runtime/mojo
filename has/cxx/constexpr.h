#ifndef has_cxx_constexpr
#  ifdef __has_feature
#    define has_cxx_constexpr __has_feature(cxx_constexpr)
#  elif defined __GNUC__
#    include "has/gnuc/minor.h"
#    define has_cxx_constexpr has_gnuc_minor(4, 6)
#  else
#    error todo
#  endif
#endif
