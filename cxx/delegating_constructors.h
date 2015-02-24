#ifndef has_cxx_delegating_constructors
#  ifdef __has_feature
#    define has_cxx_delegating_constructors __has_feature(cxx_delegating_constructors)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_cxx_delegating_constructors has_gcc_minor(4, 7)
#  else
#    error todo
#  endif
#endif
