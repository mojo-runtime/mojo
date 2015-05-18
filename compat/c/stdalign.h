#pragma once

#if !defined(__cplusplus)
#  include "config/__alignas.h"
#  include "config/__alignof.h"
#  define alignas __alignas
#  define alignof __alignof
#endif

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#define __alignas_is_defined 1
#define __alignof_is_defined 1
#pragma clang diagnostic pop
