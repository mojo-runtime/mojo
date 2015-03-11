#ifndef has_attribute_optimize

#if defined(__has_attribute)
#  define has_attribute_optimize __has_attribute(__optimize__)
#elif defined(__GNUC__) // TODO: version
#  define has_attribute_optimize 1
#else
#  error
#endif

#endif
