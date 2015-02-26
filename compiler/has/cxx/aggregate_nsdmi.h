#ifndef compiler_has_cxx_aggregate_nsdmi
#  ifdef __has_feature
#    define compiler_has_cxx_aggregate_nsdmi __has_feature(cxx_aggregate_nsdmi)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/major.h"
#    define compiler_has_cxx_aggregate_nsdmi compiler_has_gcc_major(5)
#  else
#    error todo
#  endif
#endif
