#ifndef has_cxx_binary_literals
#  ifdef __has_feature
#    define has_cxx_binary_literals __has_feature(cxx_binary_literals)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_cxx_binary_literals has_gcc_minor(4, 9)
#  else
#    error todo
#  endif
#endif
