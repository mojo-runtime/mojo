#ifndef compiler_has_cxx_unrestricted_unions
#  ifdef __has_feature
#    define compiler_has_cxx_unrestricted_unions __has_feature(cxx_unrestricted_unions)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_cxx_unrestricted_unions compiler_has_gnuc_minor(4, 6)
#  else
#    error todo
#  endif
#endif
