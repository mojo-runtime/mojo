#ifndef compiler_has_cxx_return_type_deduction
#  ifdef __has_feature
#    define compiler_has_cxx_return_type_deduction __has_feature(cxx_return_type_deduction)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_cxx_return_type_deduction compiler_has_gnuc_minor(4, 4)
#  else
#    error todo
#  endif
#endif
