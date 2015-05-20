#pragma once

#if defined(__has_feature)
#  define __has_cxx_alignof __has_feature(cxx_alignof)
#elif defined(__GNUC__)
#  define __has_cxx_alignof ((__GNUC__ >= 5) || ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 8)))
#else
#  error
#endif
