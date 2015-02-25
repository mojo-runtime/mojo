#ifndef compiler_has_cxx_nonstatic_member_init
#  ifdef __has_feature
#    define compiler_has_cxx_nonstatic_member_init __has_feature(cxx_nonstatic_member_init)
#  elif defined __GNUC__
#    include "compiler/has/gcc/minor.h"
#    define compiler_has_cxx_nonstatic_member_init has_gcc_minor(4, 7)
#  else
#    error todo
#  endif
#endif
