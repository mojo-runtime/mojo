#ifndef has_c_alignas

#if defined(__has_feature)
#  define has_c_alignas __has_feature(c_alignas)
#elif defined(__GNUC__)
#  include "_gnuc/has_version!.h"
#  define has_c_alignas _gnuc_has_version(4, 7)
#else
#  error
#endif

#endif
