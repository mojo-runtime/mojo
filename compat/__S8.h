#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

//--------------------------------------------------------------------------------------------------

#if !defined(__S8)
#  if defined(__INT8_TYPE__)
#    define __S8 __INT8_TYPE__
#  endif
#endif

//--------------------------------------------------------------------------------------------------

#if !defined(__S8)
#  error
#endif

//--------------------------------------------------------------------------------------------------

#pragma clang diagnostic pop
