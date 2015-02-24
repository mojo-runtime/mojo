#ifndef has_cxx_decltype
#  ifdef __has_extension
#    define has_cxx_decltype __has_extension(cxx_decltype)
#  elif defined __GNUC__
#    include "has/gcc/patch.h"
#    define has_cxx_decltype has_gcc_patch(4, 8, 1)
#  else
#    error todo
#  endif
#endif
