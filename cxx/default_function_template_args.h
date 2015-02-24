#ifndef has_cxx_default_function_template_args
#  ifdef __has_feature
#    define has_cxx_default_function_template_args __has_feature(cxx_default_function_template_args)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_cxx_default_function_template_args has_gcc_minor(4, 3)
#  else
#    error todo
#  endif
#endif
