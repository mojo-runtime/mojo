#ifndef compiler_has_cxx_decltype_auto
#  ifdef __has_feature
#    define compiler_has_cxx_decltype_auto __has_feature(cxx_decltype_auto)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_cxx_decltype_auto has_gcc_minor(4, 9)
#  else
#    error todo
#  endif
#endif
