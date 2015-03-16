#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_builtin_expect) && defined(__has_builtin)
#  define __has_builtin_expect __has_builtin(__builtin_expect)
#endif

#if !defined(__has_builtin_expect) && defined(__GNUC__)
#  define __has_builtin_expect ((__GNUC__) >= 3)
#endif

#if !defined(__has_builtin_expect)
#  define __has_builtin_expect 0
#endif

#pragma clang diagnostic pop
