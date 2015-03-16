#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_attribute_const) && defined(__has_attribute)
#  define __has_attribute_const __has_attribute(__const__)
#endif

#if !defined(__has_attribute_const) && defined(__GNUC__)
#  define __has_attribute_const 1 // Version?
#endif

#if !defined(__has_attribute_const)
#  define __has_attribute_const 0
#endif

#pragma clang diagnostic pop
