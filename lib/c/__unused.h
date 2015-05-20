#pragma once

#if defined(__has_attribute)
#  define __has_attribute_unused __has_attribute(unused)
#elif defined(__GNUC__)
#  define __has_attribute_unused ((__GNUC__ >= 3) || ((__GNUC__ == 3) && (__GNUC_MINOR__ >= 3)))
#else
#  error
#endif

#if __has_attribute_unused
#  define __unused __attribute__((__unused__))
#else
#  error
#endif
