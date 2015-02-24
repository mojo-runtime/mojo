#ifndef has_cxx_rtti
#  ifdef __has_feature
#    define has_cxx_rtti __has_feature(cxx_rtti)
#  elif defined (__GNUC__)
#    if defined (__GXX_RTTI)
#      define has_cxx_rtti 1
#    else
#      define has_cxx_rtti 0
#    endif
#  else
#    error todo
#  endif
#endif
