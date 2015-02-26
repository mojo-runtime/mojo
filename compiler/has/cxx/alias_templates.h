#ifndef compiler_has_cxx_alias_templates
#  ifdef __has_feature
#    define compiler_has_cxx_alias_templates __has_feature(cxx_alias_templates)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_cxx_alias_templates compiler_has_gnuc_minor(4, 7)
#  else
#    error todo
#  endif
#endif
