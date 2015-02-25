#ifndef compiler_has_cxx_alias_templates
#  ifdef __has_feature
#    define compiler_has_cxx_alias_templates __has_feature(cxx_alias_templates)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_cxx_alias_templates has_gcc_minor(4, 7)
#  else
#    error todo
#  endif
#endif
