#ifndef compiler_has_cxx_alignas
#  ifdef __has_feature
#    define compiler_has_cxx_alignas __has_feature(cxx_alignas)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_cxx_alignas has_gcc_minor(4, 8)
#  else
#    error todo
#  endif
#endif
