#ifndef has_c_noreturn
#  ifdef __has_feature
#    define has_c_noreturn __has_feature(c_noreturn)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_c_noreturn has_gcc_minor(4, 7)
#  else
#    error todo
#  endif
#endif
