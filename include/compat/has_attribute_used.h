#ifndef has_attribute_used

#if defined(__has_attribute)
#  define has_attribute_used __has_attribute(__used__)
#elif defined(__GNUC__) // TODO: version
#  define has_attribute_used 1
#else
#  error
#endif

#endif
