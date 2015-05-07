#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__has_extension)
#  define __has_is_base_of __has_extension(is_base_of)
#elif defined(__GNUC__)
#  define __has_is_base_of 1 // Version?
#else
#  error
#endif

#pragma clang diagnostic pop
