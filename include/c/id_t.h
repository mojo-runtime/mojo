#pragma once

#if defined(__linux__)
typedef uint32_t id_t;
#elif defined(__FreeBSD__)
#  include "uint64_t.h"
typedef int64_t id_t;
#else
#  error
#endif
