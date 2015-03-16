#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

//--------------------------------------------------------------------------------------------------

#if !defined(__S16)
#  if defined(__INT16_TYPE__)
#    define __S16 __INT16_TYPE__
#  endif
#endif

//--------------------------------------------------------------------------------------------------

#if !defined(__S16)
#  error
#endif

//--------------------------------------------------------------------------------------------------

#pragma clang diagnostic pop
