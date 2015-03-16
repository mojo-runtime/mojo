#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_cxx_nullptr) && defined(__has_feature)
#  define __has_cxx_nullptr __has_feature(cxx_nullptr)
#endif

#if !defined(__has_cxx_nullptr) && defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_cxx_nullptr __has_gnuc(4, 6)
#endif

#if !defined(__has_cxx_nullptr)
#  define __has_cxx_nullptr 0
#endif

#pragma clang diagnostic pop
