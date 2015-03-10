#ifndef has_c_boolean_type

#if defined(__GNUC__)
#  define has_c_boolean_type (__GNUC__ >= 3)
#else
#  error
#endif

#endif
