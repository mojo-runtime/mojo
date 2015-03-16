#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_attribute_mode) && defined(__has_attribute)
#  define __has_attribute_mode __has_attribute(__mode__)
#endif

#if !defined(__has_attribute_mode) && defined(__GNUC__)
#  define __has_attribute_mode 1 // Version?
#endif

#if !defined(__has_attribute_mode)
#  define __has_attribute_mode 0
#endif

#pragma clang diagnostic pop
