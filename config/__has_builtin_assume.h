#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_builtin_assume) && defined(__has_builtin)
#  define __has_builtin_assume __has_builtin(__builtin_assume)
#endif

#if !defined(__has_builtin_assume)
#  define __has_builtin_assume 0
#endif

#pragma clang diagnostic pop
