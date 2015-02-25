#ifndef compiler_has_cxx_lambdas
#  ifdef __has_feature
#    define compiler_has_cxx_lambdas __has_feature(cxx_lambdas)
#  elif defined __GNUC__
#    include "compiler/has/_gnuc/minor.h"
#    define compiler_has_cxx_lambdas _compiler_has_gnuc_minor(4, 5)
#  else
#    error todo
#  endif
#endif
