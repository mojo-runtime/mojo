#ifndef compiler_has_cxx_nullptr
#  ifdef __has_feature
#    define compiler_has_cxx_nullptr __has_feature(cxx_nullptr)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_cxx_nullptr has_gcc_minor(4, 6)
#  else
#    error todo
#  endif
#endif
