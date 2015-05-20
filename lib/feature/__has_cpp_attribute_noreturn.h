#pragma once

#if defined(__has_cpp_attribute)
#  define __has_cpp_attribute_noreturn __has_cpp_attribute(noreturn)
#elif defined(__GNUC__)
#  define __has_cpp_attribute_noreturn ((__GNUC__ > 4) || ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 8)))
#else
#  error
#endif
