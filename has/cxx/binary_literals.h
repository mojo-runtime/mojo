#ifndef has_cxx_binary_literals
#  ifdef __has_feature
#    define has_cxx_binary_literals __has_feature(cxx_binary_literals)
#  elif defined __GNUC__
#    include "has/gnuc/minor.h"
#    define has_cxx_binary_literals has_gnuc_minor(4, 9)
#  else
#    error todo
#  endif
#endif
