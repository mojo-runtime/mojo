#ifndef has_cxx_exceptions

#if defined(__has_feature)
#  define has_cxx_exceptions __has_feature(cxx_exceptions)
#elif defined(__GNUC__)
#  if defined(__EXCEPTIONS)
#    define has_cxx_exception 1
#  else
#    define has_cxx_exception 0
#  endif
#else
#  error
#endif

#endif
