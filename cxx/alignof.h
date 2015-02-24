#ifndef has_cxx_alignof
#  ifdef __has_extension
#    define has_cxx_alignof __has_extension(cxx_alignof)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_cxx_alignof has_gcc_minor(4, 8)
#  else
#    error todo
#  endif
#endif
