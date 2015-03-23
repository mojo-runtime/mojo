#pragma once

#if defined(__FreeBSD__)
#  include "uint32_t.h"
typedef uint32_t fflags_t;
#else
#  error
#endif
