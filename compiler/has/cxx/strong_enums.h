#ifndef compiler_has_cxx_strong_enums
#  ifdef __has_feature
#    define compiler_has_cxx_strong_enums __has_feature(cxx_strong_enums)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_cxx_strong_enums has_gcc_minor(4, 4)
#  else
#    error todo
#  endif
#endif
