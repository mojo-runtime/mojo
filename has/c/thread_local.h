#ifndef x_has_c_thread_local
#  ifdef __has_feature
#    define x_has_c_thread_local __has_feature(c_thread_local)
#  elif defined (__GNUC__)
#    error todo - GCC 4.9
#  else
#    error todo
#  endif
#endif
