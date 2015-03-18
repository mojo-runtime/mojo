#pragma once

#if !defined(__has_builtin) && defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_builtin(x)                      __has_builtin_(x)()
#  define __has_builtin_(x)                     __has_builtin_ ## x
#  define __has_builtin___builtin_alloca()      1 // Version?
#  define __has_builtin___builtin_assume()      0
#  define __has_builtin___builtin_expect()      __has_gnuc(3, 0)
#  define __has_builtin___builtin_memcmp()      1 // Version?
#  define __has_builtin___builtin_memcpy()      1 // Version?
#  define __has_builtin___builtin_memset()      1 // Version?
#  define __has_builtin___builtin_offsetof()    1 // Version?
#  define __has_builtin___builtin_strcmp()      1 // Version?
#  define __has_builtin___builtin_strlen()      1 // Version?
#  define __has_builtin___builtin_unreachable() 1 // Version?
#endif

#if !defined(__has_builtin)
#  error
#endif
