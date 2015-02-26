#ifndef compiler_has_cxx_nonstatic_member_init
#  ifdef __has_feature
#    define compiler_has_cxx_nonstatic_member_init __has_feature(cxx_nonstatic_member_init)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_cxx_nonstatic_member_init compiler_has_gnuc_minor(4, 7)
#  else
#    error todo
#  endif
#endif
