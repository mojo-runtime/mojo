#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_attribute_noreturn) && defined(__has_attribute)
#  define __has_attribute_noreturn __has_attribute(__noreturn__)
#endif

#if !defined(__has_attribute_noreturn) && defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_attribute_noreturn __has_gnuc(2, 5)
#endif

#if !defined(__has_attribute_noreturn)
#  define __has_attribute_noreturn 0
#endif

#pragma clang diagnostic pop
