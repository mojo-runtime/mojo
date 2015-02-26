#ifndef has_cxx_reference_qualified_functions
#  ifdef __has_feature
#    define has_cxx_reference_qualified_functions __has_feature(cxx_reference_qualified_functions)
#  elif defined __GNUC__
#    include "has/_gnuc/patch.h"
#    define has_cxx_reference_qualified_functions has_gcc_patch(4, 8, 1)
#  else
#    error todo
#  endif
#endif
