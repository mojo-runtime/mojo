#ifndef compiler_has_cxx_user_literals
#  ifdef __has_feature
#    define compiler_has_cxx_user_literals __has_feature(cxx_user_literals)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_cxx_user_literals has_gcc_minor(4, 7)
#  else
#    error todo
#  endif
#endif
