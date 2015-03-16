#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_c99) && defined(__STDC_VERSION__)
#  define __has_c99 ((__STDC_VERSION__) >= 199901L)
#endif

#if !defined(__has_c99)
#  define __has_c99 0
#endif

#pragma clang diagnostic pop
