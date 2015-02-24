#ifndef has_cxx_aggregate_nsdmi
#  ifdef __has_extension
#    define has_cxx_aggregate_nsdmi __has_extension(cxx_aggregate_nsdmi)
#  elif defined __GNUC__
#    include "has/gcc/major.h"
#    define has_cxx_aggregate_nsdmi has_gcc_major(5)
#  else
#    error todo
#  endif
#endif
