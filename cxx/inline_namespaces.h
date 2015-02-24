#ifndef has_cxx_inline_namespaces
#  ifdef __has_extension
#    define has_cxx_inline_namespaces __has_extension(cxx_inline_namespaces)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_cxx_inline_namespaces has_gcc_minor(4, 4)
#  else
#    error todo
#  endif
#endif
