#ifndef compiler_has_c_static_assert
#  ifdef __has_feature
#    define compiler_has_c_static_assert __has_feature(c_static_assert)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_c_static_assert compiler_has_gnuc_minor(4, 6)
#  else
#    error todo
#  endif
#endif
