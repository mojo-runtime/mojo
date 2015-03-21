// -*- C -*-

#pragma once

#if defined(__linux__)
#  include "uint32_t.h"
// Note that this does not exist in the kernel source.
   typedef uint32_t id_t;
#elif defined(__FreeBSD__)
#  include "uint64_t.h"
// @see sys/sys/_types.h"
   typedef int64_t id_t;
#else
#  error
#endif
