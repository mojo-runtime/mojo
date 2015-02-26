#ifndef has_cxx_auto_type
#  ifdef __has_feature
#    define has_cxx_auto_type __has_feature(cxx_auto_type)
#  elif defined __GNUC__
#    include "has/gnuc/minor.h"
#    define has_cxx_auto_type has_gnuc_minor(4, 4)
#  else
#    error todo
#  endif
#endif
