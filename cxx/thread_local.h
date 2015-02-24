#ifndef has_cxx_thread_local
#  ifdef __has_feature
#    define has_cxx_thread_local __has_feature(cxx_thread_local)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_cxx_thread_local has_gcc_minor(4, 8)
#  else
#    error todo
#  endif
#endif
