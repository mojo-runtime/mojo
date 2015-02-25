#ifndef compiler_has_cxx_inheriting_constructors
#  ifdef __has_feature
#    define compiler_has_cxx_inheriting_constructors __has_feature(cxx_inheriting_constructors)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_cxx_inheriting_constructors has_gcc_minor(4, 8)
#  else
#    error todo
#  endif
#endif
