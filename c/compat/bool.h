#ifndef bool

#if !defined(__cplusplus)
#  include "_gnuc/has_version.h"
#  if _gnuc_has_version(3, 0)
#    define bool _Bool
#  else
#    error
#  endif
#endif

#endif
