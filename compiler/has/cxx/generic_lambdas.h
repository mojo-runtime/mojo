#ifndef compiler_has_cxx_generic_lambdas
#  ifdef __has_feature
#    define compiler_has_cxx_generic_lambdas __has_feature(cxx_generic_lambdas)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_cxx_generic_lambdas compiler_has_gnuc_minor(4, 9)
#  else
#    error todo
#  endif
#endif
