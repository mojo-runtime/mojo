#pragma once

#if defined(__linux__)
typedef /* __kernel_gid32 */ unsigned int gid_t;
#elif defined(__FreeBSD__)
#  include "uint32_t.h"
typedef uint32_t gid_t;
#else
#  error
#endif
