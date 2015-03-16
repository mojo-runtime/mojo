#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_attribute_optnone) && defined(__has_attribute)
#  define __has_attribute_optnone __has_attribute(__optnone__)
#endif

#if !defined(__has_attribute_optnone)
#  define __has_attribute_optnone 0
#endif

#pragma clang diagnostic pop
