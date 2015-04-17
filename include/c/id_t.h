#pragma once

#if defined(__linux__)
#  include "uint32_t.h"
typedef uint32_t id_t;
#elif defined(__FreeBSD__)
#  include "int64_t.h"
typedef int64_t id_t;
#else
#  error
#endif
