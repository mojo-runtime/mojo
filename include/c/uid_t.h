#pragma once

#if defined(__linux__)
typedef unsigned int uid_t;
#elif defined(__FreeBSD__)
#  include "uint32_t.h"
typedef uint32_t uid_t;
#else
#  error
#endif
