#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__has_builtin)
#  define __has_builtin_memset __has_builtin(__builtin_memset)
#elif defined(__GNUC__)
#  define __has_builtin_memset 1 // Version?
#else
#  error
#endif

#pragma clang diagnostic pop
