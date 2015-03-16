#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_cpp_attribute_noreturn) && defined(__has_cpp_attribute)
#  define __has_cpp_attribute_noreturn __has_cpp_attribute(noreturn)
#endif

#if !defined(__has_cpp_attribute_noreturn) && defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_cpp_attribute_noreturn __has_gnuc(4, 8)
#endif

#if !defined(__has_cpp_attribute_noreturn)
#  define __has_cpp_attribute_noreturn 0
#endif

#pragma clang diagnostic pop
