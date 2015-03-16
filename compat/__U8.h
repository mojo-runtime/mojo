#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

//--------------------------------------------------------------------------------------------------

#if !defined(__U8)
#  if defined(__UINT8_TYPE__)
#    define __U8 __UINT8_TYPE__
#  endif
#endif

//--------------------------------------------------------------------------------------------------

#if !defined(__U8)
#  error
#endif

//--------------------------------------------------------------------------------------------------

#pragma clang diagnostic pop
