#ifndef compiler_has_cxx_trailing_return
#  ifdef __has_feature
#    define compiler_has_cxx_trailing_return __has_feature(cxx_trailing_return)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_cxx_trailing_return compiler_has_gnuc_minor(4, 4)
#  else
#    error todo
#  endif
#endif
