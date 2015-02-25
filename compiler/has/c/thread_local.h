#ifndef compiler_has_c_thread_local
#  ifdef __has_feature
#    define compiler_has_c_thread_local __has_feature(c_thread_local)
#  elif defined __GNUC__
#    include "compiler/has/_gnuc/minor.h"
#    define compiler_has_c_thread_local _compiler_has_gnuc_minor(4, 9)
#  else
#    error todo
#  endif
#endif
