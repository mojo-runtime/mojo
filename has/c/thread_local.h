#ifndef has_c_thread_local
#  ifdef __has_feature
#    define has_c_thread_local __has_feature(c_thread_local)
#  elif defined __GNUC__
#    include "has/_gnuc/minor.h"
#    define has_c_thread_local _has_gnuc_minor(4, 9)
#  else
#    error todo
#  endif
#endif
