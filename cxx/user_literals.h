#ifndef has_cxx_user_literals
#  ifdef __has_feature
#    define has_cxx_user_literals __has_feature(cxx_user_literals)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_cxx_user_literals has_gcc_minor(4, 7)
#  else
#    error todo
#  endif
#endif
