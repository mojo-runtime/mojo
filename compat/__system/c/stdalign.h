#pragma once

#if !defined(__cplusplus)
#  include "compat/__alignas.h"
#  include "compat/__alignof.h"
#  define alignas __alignas
#  define alignof __alignof
#endif

#define __alignas_is_defined 1
#define __alignof_is_defined 1
