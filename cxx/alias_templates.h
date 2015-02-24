#ifndef has_cxx_alias_templates
#  ifdef __has_extension
#    define has_cxx_alias_templates __has_extension(cxx_alias_templates)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_cxx_alias_templates has_gcc_minor(4, 7)
#  else
#    error todo
#  endif
#endif
