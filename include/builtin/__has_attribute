#pragma once

#if !defined(__has_attribute) && defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_attribute(x)            __has_attribute_(x)()
#  define __has_attribute_(x)           __has_attribute_ ## x
#  define __has_attribute_const()       1 // Version?
#  define __has_attribute_error()       1 // Version?
#  define __has_attribute_mode()        1 // Version?
#  define __has_attribute_noreturn()    __has_gnuc(2, 5)
#  define __has_attribute_nothrow()     1 // Version?
#  define __has_attribute_optimize()    1 // Version?
#  define __has_attribute_optnone()     0
#  define __has_attribute_unavailable() 0
#  define __has_attribute_unused()      1 // Version?
#  define __has_attribute_used()        1 // Version?
#endif

#if !defined(__has_attribute)
#  error
#endif
