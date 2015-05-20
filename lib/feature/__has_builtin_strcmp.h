#pragma once

#if defined(__has_builtin)
#  define __has_builtin_strcmp __has_builtin(__builtin_strcmp)
#elif defined(__GNUC__)
#  define __has_builtin_strcmp 1 // Version?
#else
#  error
#endif
