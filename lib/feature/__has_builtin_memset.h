#pragma once

#if defined(__has_builtin)
#  define __has_builtin_memset __has_builtin(__builtin_memset)
#elif defined(__GNUC__)
#  define __has_builtin_memset 1 // Version?
#else
#  error
#endif
