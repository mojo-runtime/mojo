#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_builtin_memcpy) && defined(__has_builtin)
#  define __has_builtin_memcpy __has_builtin(__builtin_memcpy)
#endif

#if !defined(__has_builtin_memcpy) && defined(__GNUC__)
#  define __has_builtin_memcpy 1 // Version?
#endif

#if !defined(__has_builtin_memcpy)
#  define __has_builtin_memcpy 0
#endif

#pragma clang diagnostic pop
