#ifndef compiler_has_cxx_local_type_template_args
#  ifdef __has_feature
#    define compiler_has_cxx_local_type_template_args __has_feature(cxx_local_type_template_args)
#  elif defined __GNUC__
#    include "compiler/has/_gnuc/minor.h"
#    define compiler_has_cxx_local_type_template_args _compiler_has_gnuc_minor(4, 5)
#  else
#    error todo
#  endif
#endif
