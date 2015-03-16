#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

//--------------------------------------------------------------------------------------------------

#if !defined(__noreturn)
#  if defined(__has_cpp_attribute)
#    define __has_cpp_attribute_noreturn __has_cpp_attribute(noreturn)
#  elif defined(__GNUC__)
#    include "__has_gnuc.h"
#    define __has_cpp_attribute_noreturn __has_gnuc(4, 8)
#  else
#    error
#  endif
#  if __has_cpp_attribute_noreturn
#    define __noreturn [[noreturn]]
#  endif
#  undef __has_cpp_attribute_noreturn
#endif

//--------------------------------------------------------------------------------------------------

#if !defined(__noreturn)
#  if defined(__has_feature)
#    define __has_c_noreturn __has_feature(c_noreturn)
#  elif defined(__GNUC__)
#    include "__has_gnuc.h"
#    define __has_c_noreturn __has_gnuc(4, 7)
#  else
#    error
#  endif
#  if __has_c_noreturn
#    define __noreturn _Noreturn
#  endif
#  undef __has_c_noreturn
#endif

//--------------------------------------------------------------------------------------------------

#if !defined(__noreturn)
#  if defined(__has_attribute)
#    define __has_attribute_noreturn __has_attribute(noreturn)
#  elif defined(__GNUC__)
#    include "__has_gnuc.h"
#    define __has_attribute_noreturn __has_gnuc(2, 5)
#  else
#    error
#  endif
#  if __has_attribute_noreturn
#    define __noreturn __attribute__((__noreturn__))
#  endif
#  undef __has_attribute_noreturn
#endif

//--------------------------------------------------------------------------------------------------

#if !defined(__noreturn)
#  define __noreturn
#endif

//--------------------------------------------------------------------------------------------------

#pragma clang diagnostic pop
