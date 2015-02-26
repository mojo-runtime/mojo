#ifndef compiler_has_cxx_binary_literals
#  ifdef __has_feature
#    define compiler_has_cxx_binary_literals __has_feature(cxx_binary_literals)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_cxx_binary_literals compiler_has_gnuc_minor(4, 9)
#  else
#    error todo
#  endif
#endif
