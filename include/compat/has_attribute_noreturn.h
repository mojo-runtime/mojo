#ifndef has_attribute_noreturn

#if defined(__has_attribute)
#  define has_attribute_noreturn (__has_attribute(__noreturn__))
#elif defined(__GNUC__)
#  include "_gnuc/has_version!.h"
#  define has_attribute_noreturn _gnuc_has_version(2, 5)
#else
#  error
#endif

#endif
