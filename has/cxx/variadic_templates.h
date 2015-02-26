#ifndef has_cxx_variadic_templates
#  ifdef __has_feature
#    define has_cxx_variadic_templates __has_feature(cxx_variadic_templates)
#  elif defined __GNUC__
#    include "has/_gnuc/minor.h"
#    define has_cxx_variadic_templates _has_gnuc_minor(4, 3)
#  else
#    error todo
#  endif
#endif
