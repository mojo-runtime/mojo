#ifndef NORETURN

#include "feature/has_attribute_noreturn.h"

#if has_attribute_noreturn
#  define NORETURN __attribute__((__noreturn__))
#else
#  error
#endif

#endif
