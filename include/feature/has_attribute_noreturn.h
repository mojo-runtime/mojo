#ifndef has_attribute_noreturn

#if defined(__has_attribute)
#  define has_attribute_noreturn (__has_attribute(__noreturn__))
#elif defined(__GNUC__) // TODO: version
#  define has_attribute_noreturn 1
#else
#  error
#endif

#endif
