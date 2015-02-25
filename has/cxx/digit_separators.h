#ifndef compiler_has_cxx_digit_separators
#  ifdef __has_feature
#    define compiler_has_cxx_digit_separators __has_feature(cxx_digit_separators)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_cxx_digit_separators has_gcc_minor(4, 9) // XXX: N3797?
#  else
#    error todo
#  endif
#endif
