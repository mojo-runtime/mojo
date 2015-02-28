#ifndef nullptr

#include "feature/has_cxx_nullptr.h"

#if !has_cxx_nullptr
#  define nullptr 0
#endif

#endif
