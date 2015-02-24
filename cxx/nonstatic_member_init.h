#ifndef has_cxx_nonstatic_member_init
#  ifdef __has_extension
#    define has_cxx_nonstatic_member_init __has_extension(cxx_nonstatic_member_init)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_cxx_nonstatic_member_init has_gcc_minor(4, 7)
#  else
#    error todo
#  endif
#endif
