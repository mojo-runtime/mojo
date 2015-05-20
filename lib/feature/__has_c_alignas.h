#pragma once

#if defined(__has_feature)
#  define __has_c_alignas __has_feature(c_alignas)
#elif defined(__GNUC__)
#  define __has_c_alignas ((__GNUC__ >= 5) || ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 7)))
#else
#  error
#endif
