#ifndef has_cxx_strong_enums
#  ifdef __has_extension
#    define has_cxx_strong_enums __has_extension(cxx_strong_enums)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_cxx_strong_enums has_gcc_minor(4, 4)
#  else
#    error todo
#  endif
#endif
