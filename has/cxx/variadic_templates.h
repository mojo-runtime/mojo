#ifndef compiler_has_cxx_variadic_templates
#  ifdef __has_feature
#    define compiler_has_cxx_variadic_templates __has_feature(cxx_variadic_templates)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_cxx_variadic_templates has_gcc_minor(4, 3)
#  else
#    error todo
#  endif
#endif
