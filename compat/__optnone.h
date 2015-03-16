#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

//--------------------------------------------------------------------------------------------------

#if !defined(__optnone)
#  if defined(__has_attribute)
#    define __has_attribute_optnone __has_attribute(optnone)
#  elif defined(__GNUC__)
#    define __has_attribute_optnone 0
#  else
#    error
#  endif
#  if __has_attribute_optnone
#    define __optnone __attribute__((__optnone__))
#  endif
#  undef __has_attribute_optnone
#endif

//--------------------------------------------------------------------------------------------------

#if !defined(__optnone)
#  if defined(__has_attribute)
#    define __has_attribute_optimize __has_attribute(optimize)
#  elif defined(__GNUC__) // Version?
#    define __has_attribute_optimize 1
#  else
#    error
#  endif
#  if __has_attribute_optimize
#    define __optnone __attribute__((__optimize__(0)))
#  endif
#  undef __has_attribute_optimize
#endif

//--------------------------------------------------------------------------------------------------

#if !defined(__optnone)
#  error
#endif

//--------------------------------------------------------------------------------------------------

#pragma clang diagnostic pop
