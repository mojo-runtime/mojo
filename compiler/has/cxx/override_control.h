#ifndef compiler_has_cxx_override_control
#  ifdef __has_feature
#    define compiler_has_cxx_override_control __has_feature(cxx_override_control)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_cxx_override_control has_gcc_minor(4, 7)
#  else
#    error todo
#  endif
#endif
