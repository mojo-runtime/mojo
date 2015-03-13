#ifndef noreturn

#include "compat/__has_feature.h"

#if defined(__cplusplus)
#  if __has_feature(cxx_attributes)
//   Defining `noreturn` breaks `[[noreturn]]`, of course.
//  In this case the standard says we're free to be a no-op, I think;
//   Who knows, who cares, I'm not buying it.
#  else
#    error
#  endif
#else
#  if __has_feature(c_noreturn)
#    define noreturn _Noreturn
#  else
#    error
#  endif
#endif

#endif
