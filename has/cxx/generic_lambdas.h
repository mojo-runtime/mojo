#ifndef has_cxx_generic_lambdas
#  ifdef __has_feature
#    define has_cxx_generic_lambdas __has_feature(cxx_generic_lambdas)
#  elif defined __GNUC__
#    include "has/gnuc/minor.h"
#    define has_cxx_generic_lambdas has_gnuc_minor(4, 9)
#  else
#    error todo
#  endif
#endif
