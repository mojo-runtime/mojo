#ifndef has_cxx_explicit_conversions
#  ifdef __has_extension
#    define has_cxx_explicit_conversions __has_extension(cxx_explicit_conversions)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_cxx_explicit_conversions has_gcc_minor(4, 5)
#  else
#    error todo
#  endif
#endif
