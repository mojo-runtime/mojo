#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_attribute_nothrow) && defined(__has_attribute)
#  define __has_attribute_nothrow __has_attribute(__nothrow__)
#endif

#if !defined(__has_attribute_nothrow) && defined(__GNUC__)
#  define __has_attribute_nothrow 1 // Version?
#endif

#if !defined(__has_attribute_nothrow)
#  define __has_attribute_nothrow 0
#endif

#pragma clang diagnostic pop
