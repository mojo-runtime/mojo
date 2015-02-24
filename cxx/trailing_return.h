#ifndef has_cxx_trailing_return
#  ifdef __has_feature
#    define has_cxx_trailing_return __has_feature(cxx_trailing_return)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_cxx_trailing_return has_gcc_minor(4, 4)
#  else
#    error todo
#  endif
#endif
