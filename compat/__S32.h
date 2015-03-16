#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

//--------------------------------------------------------------------------------------------------

#if !defined(__S32)
#  if defined(__INT32_TYPE__)
#    define __S32 __INT32_TYPE__
#  endif
#endif

//--------------------------------------------------------------------------------------------------

#if !defined(__S32)
#  error
#endif

//--------------------------------------------------------------------------------------------------

#pragma clang diagnostic pop
