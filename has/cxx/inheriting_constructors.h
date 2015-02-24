#ifndef x_has_cxx_inheriting_constructors
#  ifdef __has_feature
#    define x_has_cxx_inheriting_constructors __has_feature(cxx_inheriting_constructors)
#  elif defined (__GNUC__)
#    error todo - GCC 4.8
#  else
#    error todo
#  endif
#endif
