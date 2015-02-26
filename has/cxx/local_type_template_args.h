#ifndef has_cxx_local_type_template_args
#  ifdef __has_feature
#    define has_cxx_local_type_template_args __has_feature(cxx_local_type_template_args)
#  elif defined __GNUC__
#    include "has/_gnuc/minor.h"
#    define has_cxx_local_type_template_args _has_gnuc_minor(4, 5)
#  else
#    error todo
#  endif
#endif
