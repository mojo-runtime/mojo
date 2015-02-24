#ifndef has_cxx_lambdas
#  ifdef __has_extension
#    define has_cxx_lambdas __has_extension(cxx_lambdas)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_cxx_lambdas has_gcc_minor(4, 5)
#  else
#    error todo
#  endif
#endif
