#ifndef c_attribute_noreturn_h_
#define c_attribute_noreturn_h_

#include "config/has_attribute_noreturn.h"

#if has_attribute_noreturn
#  define attribute_noreturn __attribute__((__noreturn__))
#else
#  error
#endif

#endif
