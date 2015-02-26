#ifndef compiler_has_cxx_variadic_templates
#  ifdef __has_feature
#    define compiler_has_cxx_variadic_templates __has_feature(cxx_variadic_templates)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_cxx_variadic_templates compiler_has_gnuc_minor(4, 3)
#  else
#    error todo
#  endif
#endif
