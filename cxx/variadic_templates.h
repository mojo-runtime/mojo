#ifndef has_cxx_variadic_templates
#  ifdef __has_extension
#    define has_cxx_variadic_templates __has_extension(cxx_variadic_templates)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_cxx_variadic_templates has_gcc_minor(4, 3)
#  else
#    error todo
#  endif
#endif
