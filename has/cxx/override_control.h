#ifndef has_cxx_override_control
#  ifdef __has_feature
#    define has_cxx_override_control __has_feature(cxx_override_control)
#  elif defined __GNUC__
#    include "has/gnuc/minor.h"
#    define has_cxx_override_control has_gnuc_minor(4, 7)
#  else
#    error todo
#  endif
#endif
