#ifndef x_has_cxx_exceptions
#  ifdef __has_feature
#    define x_has_cxx_exceptions __has_feature(cxx_exceptions)
#  elif defined (__GNUC__)
#    if defined (__EXCEPTIONS)
#      define x_has_cxx_exception 1
#    else
#      define x_has_cxx_exception 0
#    endif
#  else
#    error todo
#  endif
#endif
