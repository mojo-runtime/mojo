#ifndef compiler_has_cxx_rvalue_references
#  ifdef __has_feature
#    define compiler_has_cxx_rvalue_references __has_feature(cxx_rvalue_references)
#  elif defined __GNUC__
#    include "compiler/has/gcc/patch.h"
#    define compiler_has_cxx_rvalue_references has_gcc_patch(4, 8, 1)
#  else
#    error todo
#  endif
#endif
