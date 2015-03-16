#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

//--------------------------------------------------------------------------------------------------

#if !defined(__nothrow)
#  if defined(__has_attribute)
#    define __has_attribute_nothrow __has_attribute(nothrow)
#  elif defined(__GNUC__) // Version?
#    define __has_attribute_nothrow 1
#  else
#    error
#  endif
#  if __has_attribute_nothrow
#    define __nothrow __attribute__((__nothrow__))
#  endif
#  undef __has_attribute_nothrow
#endif

//--------------------------------------------------------------------------------------------------

#if !defined(__nothrow)
#  error
#endif

//--------------------------------------------------------------------------------------------------

#pragma clang diagnostic pop
