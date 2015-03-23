#pragma once

#if defined(__linux__)
// #ifdef CONFIG_LBDAF
//   typedef u64 blkcnt_t
// #else
typedef unsigned long blkcnt_t;
#elif defined(__FreeBSD__)
#  include "int64_t.h"
typedef int64_t blkcnt_t;
#else
#  error
#endif
