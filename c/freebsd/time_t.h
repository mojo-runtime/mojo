#pragma once

#if defined(__x86_64__)
#  include <std/int64_t.h>
typedef int64_t time_t;
#else
#  error
#endif
