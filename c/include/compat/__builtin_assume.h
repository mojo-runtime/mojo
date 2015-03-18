#pragma once

#include "__has_builtin.h"

#if !__has_builtin(__builtin_assume)
#  define __builtin_assume(x)
#endif
