#ifndef has_cxx_alignas

#if defined(__has_feature)
#  define has_cxx_alignas __has_feature(cxx_alignas)
#elif defined(__GNUC__)
#  include "_gnuc/has_version!.h"
#  define has_cxx_alignas _gnuc_has_version(4, 8)
#else
#  error
#endif

#endif
