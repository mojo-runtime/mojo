#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_builtin_memset) && defined(__has_builtin)
#  define __has_builtin_memset __has_builtin(__builtin_memset)
#endif

#if !defined(__has_builtin_memset) && defined(__GNUC__)
#  define __has_builtin_memset 1 // Version?
#endif

#if !defined(__has_builtin_memset)
#  define __has_builtin_memset 0
#endif

#pragma clang diagnostic pop
