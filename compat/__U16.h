#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

//--------------------------------------------------------------------------------------------------

#if !defined(__U16)
#  if defined(__UINT16_TYPE__)
#    define __U16 __UINT16_TYPE__
#  endif
#endif

//--------------------------------------------------------------------------------------------------

#if !defined(__U16)
#  error
#endif

//--------------------------------------------------------------------------------------------------

#pragma clang diagnostic pop
