#ifndef has_attribute_error

#if defined(__has_attribute)
#  define has_attribute_error (__has_attribute(__error__))
#elif defined(__GNUC__) // TODO: version
#  define has_attribute_error 1
#else
#  error
#endif

#endif
