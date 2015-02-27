#ifndef has_cxx_delegating_constructors
#  ifdef __has_feature
#    define has_cxx_delegating_constructors __has_feature(cxx_delegating_constructors)
#  elif defined __GNUC__
#    include "has/gnuc/minor.h"
#    define has_cxx_delegating_constructors has_gnuc_minor(4, 7)
#  else
#    error todo
#  endif
#endif
