#ifndef has_cxx_alias_templates
#  ifdef __has_feature
#    define has_cxx_alias_templates __has_feature(cxx_alias_templates)
#  elif defined (__GNUC__)
#    error todo - GCC 4.7
#  else
#    error todo
#  endif
#endif
