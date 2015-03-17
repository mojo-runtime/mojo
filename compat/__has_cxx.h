#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_cxx) && defined(__cplusplus)
#  define __has_cxx(x)   __has_cxx_(x)()
#  define __has_cxx_(x)  __has_cxx_ ## x
#  define __has_cxx_11() ((__cplusplus) >= 201103L)
#endif

#if !defined(__has_cxx)
#  define __has_cxx(x) 0
#endif

#pragma clang diagnostic pop
