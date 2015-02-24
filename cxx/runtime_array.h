// Note that this feature did not make the C++14 standard.
#ifndef has_cxx_runtime_array
#  ifdef __has_feature
#    define has_cxx_runtime_array __has_feature(cxx_runtime_array)
#  elif defined (__GNUC__)
#    error todo - GCC 4.9 (N3639)
#  else
#    error todo
#  endif
#endif
