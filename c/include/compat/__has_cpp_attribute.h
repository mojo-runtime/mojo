#pragma once

#if !defined(__has_cpp_attribute) && defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_cpp_attribute(x)         __has_cpp_attribute_(x)()
#  define __has_cpp_attribute_(x)        __has_cpp_attribute_ ## x
#  define __has_cpp_attribute_noreturn() __has_gnuc(4, 8)
#endif

#if !defined(__has_cpp_attribute)
#  error
#endif
