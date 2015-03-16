#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_attribute_unavailable) && defined(__has_attribute)
#  define __has_attribute_unavailable __has_attribute(__unavailable__)
#endif

#if !defined(__has_attribute_unavailable)
#  define __has_attribute_unavailable 0
#endif

#pragma clang diagnostic pop
