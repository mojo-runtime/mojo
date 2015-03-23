#pragma once

#if defined(__linux__)
typedef int pid_t;
#elif defined(__FreeBSD__)
#  include "int32_t.h"
typedef int32_t pid_t;
#else
#  error
#endif
