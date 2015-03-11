#ifndef has_attribute_unused

#if defined(__has_attribute)
#  define has_attribute_unused __has_attribute(__unused__)
#elif defined(__GNUC__) // TODO: version
#  define has_attribute_unused 1
#else
#  error
#endif

#endif
