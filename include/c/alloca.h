#pragma once

#include "feature/__has_builtin_alloca.h"
#include "size_t.h"

#if __has_builtin_alloca
#  define alloca(size) __builtin_alloca(size)
#else
#  error
#endif
