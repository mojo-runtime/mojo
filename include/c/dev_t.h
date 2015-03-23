#pragma once

#if defined(__linux__)
#  include "uint32_t.h"
typedef uint32_t dev_t; // XXX: this differs from `stat::st_dev`
#elif defined(__FreeBSD__)
#  include "uint32_t.h"
typedef uint32_t dev_t;
#else
#  error
#endif
