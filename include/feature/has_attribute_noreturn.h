#ifndef has_attribute_noreturn

#if defined(__has_attribute)
#  define has_attribute_noreturn (__has_attribute(__noreturn__))
#elif defined(__GNUC__)
#  include "_has_gnuc_minor.h"
#  define has_attribute_noreturn _has_gnuc_minor(2, 5)
#else
#  error
#endif

#endif
