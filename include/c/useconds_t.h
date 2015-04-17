#pragma once

#if defined(__linux__)
#  include "uint32_t.h"
typedef uint32_t useconds_t;
#elif defined(__FreeBSD__)
typedef unsigned int useconds_t;
#else
#  error
#endif
