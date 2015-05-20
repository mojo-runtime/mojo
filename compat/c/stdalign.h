#pragma once

#if !defined(__cplusplus)
#  include "c/__alignas.h"
#  include "c/__alignof.h"
#  define alignas __alignas
#  define alignof __alignof
#endif

#define __alignas_is_defined 1
#define __alignof_is_defined 1
