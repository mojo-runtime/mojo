#ifndef has_cxx_rvalue_references
#  ifdef __has_feature
#    define has_cxx_rvalue_references __has_feature(cxx_rvalue_references)
#  elif defined __GNUC__
#    include "has/gnuc/patch.h"
#    define has_cxx_rvalue_references has_gcc_patch(4, 8, 1)
#  else
#    error todo
#  endif
#endif
