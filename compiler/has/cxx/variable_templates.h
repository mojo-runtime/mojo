#ifndef compiler_has_cxx_variable_templates
#  ifdef __has_feature
#    define compiler_has_cxx_variable_templates __has_feature(cxx_variable_templates)
#  elif defined __GNUC__
#    include "compiler/has/_gnuc/major.h"
#    define compiler_has_cxx_variable_templates has_gcc_major(5)
#  else
#    error todo
#  endif
#endif
