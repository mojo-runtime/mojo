#ifndef compiler_has_cxx_alignof
#  ifdef __has_feature
#    define compiler_has_cxx_alignof __has_feature(cxx_alignof)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_cxx_alignof has_gcc_minor(4, 8)
#  else
#    error todo
#  endif
#endif
