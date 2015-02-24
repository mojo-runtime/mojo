#ifndef has_cxx_auto_type
#  ifdef __has_feature
#    define has_cxx_auto_type __has_feature(cxx_auto_type)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_cxx_auto_type has_gcc_minor(4, 4)
#  else
#    error todo
#  endif
#endif
