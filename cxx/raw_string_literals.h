#ifndef has_cxx_raw_string_literals
#  ifdef __has_feature
#    define has_cxx_raw_string_literals __has_feature(cxx_raw_string_literals)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_cxx_raw_string_literals has_gcc_minor(4, 5)
#  else
#    error todo
#  endif
#endif
