#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

//--------------------------------------------------------------------------------------------------

#if !defined(__unavailable)
#  if defined(__has_attribute)
#    define __has_attribute_unavailable __has_attribute(unavailable)
#  elif defined(__GNUC__)
#    define __has_attribute_unavailable 0
#  else
#    error
#  endif
#  if __has_attribute_unavailable
#    define __unavailable(x) __attribute__((__unavailable__(x)))
#  endif
#  undef __has_attribute_unavailable
#endif

//--------------------------------------------------------------------------------------------------

#if !defined(__unavailable)
#  if defined(__has_attribute)
#    define __has_attribute_error __has_attribute(error)
#  elif defined(__GNUC__) // Version?
#    define __has_attribute_error 1
#  else
#    error
#  endif
#  if __has_attribute_error
#    define __unavailable(x) __attribute__((__error__(x)))
#  endif
#  undef __has_attribute_error
#endif

//--------------------------------------------------------------------------------------------------

#if !defined(__unavailable)
#  error
#endif

//--------------------------------------------------------------------------------------------------

#pragma clang diagnostic pop
