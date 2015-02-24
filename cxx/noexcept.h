#ifndef has_cxx_noexcept
#  ifdef __has_extension
#    define has_cxx_noexcept __has_extension(cxx_noexcept)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_cxx_noexcept has_gcc_minor(4, 6)
#  else
#    error todo
#  endif
#endif
