#ifndef has_cxx_range_for
#  ifdef __has_extension
#    define has_cxx_range_for __has_extension(cxx_range_for)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_cxx_range_for has_gcc_minor(4, 6)
#  else
#    error todo
#  endif
#endif
