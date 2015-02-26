#ifndef compiler_has_cxx_delegating_constructors
#  ifdef __has_feature
#    define compiler_has_cxx_delegating_constructors __has_feature(cxx_delegating_constructors)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_cxx_delegating_constructors compiler_has_gnuc_minor(4, 7)
#  else
#    error todo
#  endif
#endif
