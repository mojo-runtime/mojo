#ifndef has_cxx_nonstatic_member_init
#  ifdef __has_feature
#    define has_cxx_nonstatic_member_init __has_feature(cxx_nonstatic_member_init)
#  elif defined (__GNUC__)
#    error todo - GCC 4.7
#  else
#    error todo
#  endif
#endif
