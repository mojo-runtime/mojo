#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_attribute_unused) && defined(__has_attribute)
#  define __has_attribute_unused __has_attribute(__unused__)
#endif

#if !defined(__has_attribute_unused) && defined(__GNUC__)
#  define __has_attribute_unused 1 // Version?
#endif

#if !defined(__has_attribute_unused)
#  define __has_attribute_unused 0
#endif

#pragma clang diagnostic pop
