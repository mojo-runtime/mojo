#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_cxx_return_type_deduction) && defined(__has_feature)
#  define __has_cxx_return_type_deduction __has_feature(cxx_return_type_deduction)
#endif

#if !defined(__has_cxx_return_type_deduction) && defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_cxx_return_type_deduction __has_gnuc(4, 9)
#endif

#if !defined(__has_cxx_return_type_deduction)
#  define __has_cxx_return_type_deduction 0
#endif

#pragma clang diagnostic pop
