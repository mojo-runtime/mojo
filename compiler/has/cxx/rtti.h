#ifndef compiler_has_cxx_rtti
#  ifdef __has_feature
#    define compiler_has_cxx_rtti __has_feature(cxx_rtti)
#  elif defined __GNUC__
#    if defined (__GXX_RTTI)
#      define compiler_has_cxx_rtti 1
#    else
#      define compiler_has_cxx_rtti 0
#    endif
#  else
#    error todo
#  endif
#endif
