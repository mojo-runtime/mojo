#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_builtin_memcmp) && defined(__has_builtin)
#  define __has_builtin_memcmp __has_builtin(__builtin_memcmp)
#endif

#if !defined(__has_builtin_memcmp) && defined(__GNUC__)
#  define __has_builtin_memcmp 1 // Version?
#endif

#if !defined(__has_builtin_memcmp)
#  define __has_builtin_memcmp 0
#endif

#pragma clang diagnostic pop
