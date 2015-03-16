#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

//--------------------------------------------------------------------------------------------------

#if !defined(__U32)
#  if defined(__UINT32_TYPE__)
#    define __U32 __UINT32_TYPE__
#  endif
#endif

//--------------------------------------------------------------------------------------------------

#if !defined(__U32)
#  error
#endif

//--------------------------------------------------------------------------------------------------

#pragma clang diagnostic pop
