#ifndef x_has_cxx_unicode_literals
#  ifdef __has_feature
#    define x_has_cxx_unicode_literals __has_feature(cxx_unicode_literals)
#  elif defined (__GNUC__)
#    error todo - GCC 4.5
#  else
#    error todo
#  endif
#endif
