#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_cxx_decltype) && defined(__has_feature)
#  define __has_cxx_decltype __has_feature(cxx_decltype)
#endif

#if !defined(__has_cxx_decltype) && defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_cxx_decltype __has_gnuc(4, 3)
#endif

#if !defined(__has_cxx_decltype)
#  define __has_cxx_decltype 0
#endif

#pragma clang diagnostic pop
