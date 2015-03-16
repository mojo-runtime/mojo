#pragma once

#include "config/__has_builtin_offsetof.h"

#if __has_builtin_offsetof
#  define offsetof __builtin_offsetof
#else
#  error
#endif
