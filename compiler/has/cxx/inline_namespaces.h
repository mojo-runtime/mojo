#ifndef compiler_has_cxx_inline_namespaces
#  ifdef __has_feature
#    define compiler_has_cxx_inline_namespaces __has_feature(cxx_inline_namespaces)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_cxx_inline_namespaces has_gcc_minor(4, 4)
#  else
#    error todo
#  endif
#endif
