#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

//--------------------------------------------------------------------------------------------------

#if !defined(__S64)
#  if defined(__INT64_TYPE__)
#    define __S64 __INT64_TYPE__
#  endif
#endif

//--------------------------------------------------------------------------------------------------

#if !defined(__S64)
#  error
#endif

//--------------------------------------------------------------------------------------------------

#pragma clang diagnostic pop
