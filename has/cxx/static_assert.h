#ifndef has_cxx_static_assert
#  ifdef __has_feature
#    define has_cxx_static_assert __has_feature(cxx_static_assert)
#  elif defined __GNUC__
#    include "has/gnuc/minor.h"
#    define has_cxx_static_assert has_gnuc_minor(4, 3)
#  else
#    error todo
#  endif
#endif