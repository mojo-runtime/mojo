#ifndef has_cxx_override_control
#  ifdef __has_extension
#    define has_cxx_override_control __has_extension(cxx_override_control)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_cxx_override_control has_gcc_minor(4, 7)
#  else
#    error todo
#  endif
#endif
