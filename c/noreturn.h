#ifndef has_c_noreturn
#  ifdef __has_extension
#    define has_c_noreturn __has_extension(c_noreturn)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_c_noreturn has_gcc_minor(4, 7)
#  else
#    error todo
#  endif
#endif
