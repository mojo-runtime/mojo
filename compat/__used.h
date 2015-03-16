#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

//--------------------------------------------------------------------------------------------------

#if !defined(__used)
#  if defined(__has_attribute)
#    define __has_attribute_used __has_attribute(used)
#  elif defined(__GNUC__) // Version?
#    define __has_attribute_used 1
#  else
#    error
#  endif
#  if __has_attribute_used
#    define __used __attribute__((__used__))
#  endif
#  undef __has_attribute_used
#endif

//--------------------------------------------------------------------------------------------------

#if !defined(__used)
#  error
#endif

//--------------------------------------------------------------------------------------------------

#pragma clang diagnostic pop
