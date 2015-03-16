#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_builtin_alloca) && defined(__has_builtin)
#  define __has_builtin_alloca __has_builtin(__builtin_alloca)
#endif

#if !defined(__has_builtin_alloca) && defined(__GNUC__)
#  define __has_builtin_alloca 1 // Version?
#endif

#if !defined(__has_builtin_alloca)
#  define __has_builtin_alloca 0
#endif

#pragma clang diagnostic pop
