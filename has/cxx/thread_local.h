#ifndef x_has_cxx_thread_local
#  ifdef __has_feature
#    define x_has_cxx_thread_local __has_feature(cxx_thread_local)
#  elif defined (__GNUC__)
#    error todo - GCC 4.8
#  else
#    error todo
#  endif
#endif
