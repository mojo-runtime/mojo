#ifndef compiler_has_cxx_lambdas
#  ifdef __has_feature
#    define compiler_has_cxx_lambdas __has_feature(cxx_lambdas)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_cxx_lambdas has_gcc_minor(4, 5)
#  else
#    error todo
#  endif
#endif
