#ifndef has_attribute_mode

#if defined(__has_attribute)
#  define has_attribute_mode (__has_attribute(__mode__))
#elif defined(__GNUC__) // TODO: version
#  define has_attribute_mode 1
#else
#  error
#endif

#endif
