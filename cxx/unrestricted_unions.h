#ifndef has_cxx_unrestricted_unions
#  ifdef __has_extension
#    define has_cxx_unrestricted_unions __has_extension(cxx_unrestricted_unions)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_cxx_unrestricted_unions has_gcc_minor(4, 6)
#  else
#    error todo
#  endif
#endif
