#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__has_attribute)
#  define __has_attribute_nothrow __has_attribute(nothrow)
#elif defined(__GNUC__)
#  define __has_attribute_nothrow ((__GNUC__ > 3) || ((__GNUC__ == 3) && (__GNUC_MINOR__ >= 3)))
#else
#  error
#endif

#pragma clang diagnostic pop
