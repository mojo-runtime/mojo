#ifndef has_cxx_alignas
#  ifdef __has_extension
#    define has_cxx_alignas __has_extension(cxx_alignas)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_cxx_alignas has_gcc_minor(4, 8)
#  else
#    error todo
#  endif
#endif
