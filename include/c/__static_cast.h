#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__cplusplus)
#  define __static_cast(T, x) static_cast<T>(x)
#else
#  define __static_cast(T, x) ((T)(x))
#endif

#pragma clang diagnostic pop
