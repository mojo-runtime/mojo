#pragma once

#if defined(__linux__)
#  include "uint32_t.h"
typedef uint32_t nlink_t;
#elif defined(__FreeBSD__)
#  include "uint16_t.h"
typedef uint16_t nlink_t;
#else
#  error
#endif
