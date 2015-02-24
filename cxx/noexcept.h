#ifndef has_cxx_noexcept
#  ifdef __has_feature
#    define has_cxx_noexcept __has_feature(cxx_noexcept)
#  elif defined __GNUC__
#    error todo - GCC 4.6
#  else
#    error todo
#  endif
#endif
