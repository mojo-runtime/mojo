#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_builtin_strcmp) && defined(__has_builtin)
#  define __has_builtin_strcmp __has_builtin(__builtin_strcmp)
#endif

#if !defined(__has_builtin_strcmp) && defined(__GNUC__)
#  define __has_builtin_strcmp 1 // Version?
#endif

#if !defined(__has_builtin_strcmp)
#  define __has_builtin_strcmp 0
#endif

#pragma clang diagnostic pop
