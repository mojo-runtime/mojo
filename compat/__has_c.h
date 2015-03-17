#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_c) && defined(__STDC_VERSION__)
#  define __has_c(x)   __has_c_(x)()
#  define __has_c_(x)  __has_c_ ## x
#  define __has_c_99() ((__STDC_VERSION__) >= 199901L)
#  define __has_c_11() ((__STDC_VERSION__) >= 201112L)
#endif

#if !defined(__has_c)
#  define __has_c(x) 0
#endif

#pragma clang diagnostic pop
