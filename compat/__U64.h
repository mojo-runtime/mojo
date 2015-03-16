#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

//--------------------------------------------------------------------------------------------------

#if !defined(__U64)
#  if defined(__UINT64_TYPE__)
#    define __U64 __UINT64_TYPE__
#  endif
#endif

//--------------------------------------------------------------------------------------------------

#if !defined(__U64)
#  error
#endif

//--------------------------------------------------------------------------------------------------

#pragma clang diagnostic pop
