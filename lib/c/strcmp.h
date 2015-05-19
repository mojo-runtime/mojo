#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__has_builtin)
#  define __has_builtin_strcmp __has_builtin(__builtin_strcmp)
#elif defined(__GNUC__)
#  define __has_builtin_strcmp 1 // Version?
#else
#  error
#endif

#pragma clang diagnostic pop

static inline
int
strcmp(const char* s1, const char* s2)
{
#if __has_builtin_strcmp
    return __builtin_strcmp(s1, s2);
#else
#  error
#endif
}
