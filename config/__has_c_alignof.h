#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_c_alignof) && defined(__has_feature)
#  define __has_c_alignof __has_feature(c_alignof)
#endif

#if !defined(__has_c_alignof) && defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_c_alignof __has_gnuc(4, 7)
#endif

#if !defined(__has_c_alignof)
#  define __has_c_alignof 0
#endif

#pragma clang diagnostic pop
