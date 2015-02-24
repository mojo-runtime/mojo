#ifndef x_has_cxx_variable_templates
#  ifdef __has_feature
#    define x_has_cxx_variable_templates __has_feature(cxx_variable_templates)
#  elif defined (__GNUC__)
#    error todo - GCC 5
#  else
#    error todo
#  endif
#endif
