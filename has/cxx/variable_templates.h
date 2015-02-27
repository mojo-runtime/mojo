#ifndef has_cxx_variable_templates
#  ifdef __has_feature
#    define has_cxx_variable_templates __has_feature(cxx_variable_templates)
#  elif defined __GNUC__
#    include "has/gnuc/major.h"
#    define has_cxx_variable_templates has_gcc_major(5)
#  else
#    error todo
#  endif
#endif
