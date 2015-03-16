#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_cxx11) && defined(__cplusplus)
#  define __has_cxx11 ((__cplusplus) >= 201103L)
#endif

#if !defined(__has_cxx11)
#  define __has_cxx11 0
#endif

#pragma clang diagnostic pop
