#ifndef has_cxx_nullptr
#  ifdef __has_extension
#    define has_cxx_nullptr __has_extension(cxx_nullptr)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_cxx_nullptr has_gcc_minor(4, 6)
#  else
#    error todo
#  endif
#endif
