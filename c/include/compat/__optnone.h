#pragma once

#include "__has_attribute.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__optnone) && __has_attribute(optnone)
#  define __optnone __attribute__((__optnone__))
#endif

#if !defined(__optnone) && __has_attribute(optimize)
#  define __optnone __attribute__((__optimize__(0)))
#endif

#if !defined(__optnone)
#  error
#endif

#pragma clang diagnostic pop
