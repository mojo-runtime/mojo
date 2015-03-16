#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_builtin_unreachable) && defined(__has_builtin)
#  define __has_builtin_unreachable __has_builtin(__builtin_unreachable)
#endif

#if !defined(__has_builtin_unreachable) && defined(__GNUC__)
#  define __has_builtin_unreachable 1 // Version?
#endif

#if !defined(__has_builtin_unreachable)
#  define __has_builtin_unreachable 0
#endif

#pragma clang diagnostic pop
