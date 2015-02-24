#ifndef has_cxx_attributes
#  ifdef __has_extension
#    define has_cxx_attributes __has_extension(cxx_attributes)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_cxx_attributes has_gcc_minor(4, 8)
#  else
#    error todo
#  endif
#endif
