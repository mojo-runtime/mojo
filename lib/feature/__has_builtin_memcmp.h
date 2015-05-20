#pragma once

#if defined(__has_builtin)
#  define __has_builtin_memcmp __has_builtin(__builtin_memcmp)
#elif defined(__GNUC__)
#  define __has_builtin_memcmp 1 // Version?
#else
#  error
#endif
