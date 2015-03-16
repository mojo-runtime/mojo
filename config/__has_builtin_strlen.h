#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_builtin_strlen) && defined(__has_builtin)
#  define __has_builtin_strlen __has_builtin(__builtin_strlen)
#endif

#if !defined(__has_builtin_strlen) && defined(__GNUC__)
#  define __has_builtin_strlen 1 // Version?
#endif

#if !defined(__has_builtin_strlen)
#  define __has_builtin_strlen 0
#endif

#pragma clang diagnostic pop
