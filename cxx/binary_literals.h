#ifndef has_cxx_binary_literals
#  ifdef __has_extension
#    define has_cxx_binary_literals __has_extension(cxx_binary_literals)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_cxx_binary_literals has_gcc_minor(4, 9)
#  else
#    error todo
#  endif
#endif
