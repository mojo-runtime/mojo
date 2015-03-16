#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_attribute_optimize) && defined(__has_attribute)
#  define __has_attribute_optimize __has_attribute(__optimize__)
#endif

#if !defined(__has_attribute_optimize) && defined(__GNUC__)
#  define __has_attribute_optimize 1 // Version?
#endif

#pragma clang diagnostic pop
