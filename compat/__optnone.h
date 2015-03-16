#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__optnone)
#  include "config/__has_attribute_optnone.h"
#  if __has_attribute_optnone
#    define __optnone __attribute__((__optnone__))
#  endif
#endif

#if !defined(__optnone)
#  include "config/__has_attribute_optimize.h"
#  if __has_attribute_optimize
#    define __optnone __attribute__((__optimize__(0)))
#  endif
#endif

#if !defined(__optnone)
#  error
#endif

#pragma clang diagnostic pop
