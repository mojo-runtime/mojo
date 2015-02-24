#ifndef has_c_static_assert
#  ifdef __has_extension
#    define has_c_static_assert __has_extension(c_static_assert)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_c_static_assert has_gcc_minor(4, 6)
#  else
#    error todo
#  endif
#endif
