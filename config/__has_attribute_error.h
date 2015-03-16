#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_attribute_error) && defined(__has_attribute)
#  define __has_attribute_error __has_attribute(__error__)
#endif

#if !defined(__has_attribute_error) && defined(__GNUC__)
#  define __has_attribute_error 1 // Version?
#endif

#if !defined(__has_attribute_error)
#  define __has_attribute_error 0
#endif

#pragma clang diagnostic pop
