#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_cxx_alignas) && defined(__has_feature)
#  define __has_cxx_alignas __has_feature(cxx_alignas)
#endif

#if !defined(__has_cxx_alignas) && defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_cxx_alignas __has_gnuc(4, 7)
#endif

#if !defined(__has_cxx_alignas)
#  define __has_cxx_alignas 0
#endif

#pragma clang diagnostic pop
