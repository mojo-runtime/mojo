#pragma once

#include "config/__has_builtin_offsetof.h"

#if __has_builtin_offsetof
#  define offsetof(T, member) __builtin_offsetof(T, member)
#else
#  error
#endif
