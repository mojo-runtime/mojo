#ifndef compiler_has_cxx_decltype
#  ifdef __has_feature
#    define compiler_has_cxx_decltype __has_feature(cxx_decltype)
#  elif defined __GNUC__
#    include "compiler/has/gcc/patch.h"
#    define compiler_has_cxx_decltype has_gcc_patch(4, 8, 1)
#  else
#    error todo
#  endif
#endif