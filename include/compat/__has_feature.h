#ifndef __has_feature

#if defined(__GNUC__)
#  include "_gnuc/has_feature!.h"
#  define __has_feature(x) _gnuc_has_feature(x)
#else
#  error
#endif

#endif
