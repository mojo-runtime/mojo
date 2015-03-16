#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_attribute_used) && defined(__has_attribute)
#  define __has_attribute_used __has_attribute(__used__)
#endif

#if !defined(__has_attribute_used) && defined(__GNUC__)
#  define __has_attribute_used 1 // Version?
#endif

#if !defined(__has_attribute_used)
#  define __has_attribute_used 0
#endif

#pragma clang diagnostic pop
