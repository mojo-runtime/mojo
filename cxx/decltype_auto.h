#ifndef has_cxx_decltype_auto
#  ifdef __has_extension
#    define has_cxx_decltype_auto __has_extension(cxx_decltype_auto)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_cxx_decltype_auto has_gcc_minor(4, 9)
#  else
#    error todo
#  endif
#endif
