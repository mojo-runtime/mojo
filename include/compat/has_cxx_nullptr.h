#ifndef has_cxx_nullptr

#if defined(__has_feature)
#  define has_cxx_nullptr __has_feature(cxx_nullptr)
#elif defined(__GNUC__)
#  include "_gnuc/has_version!.h"
#  define has_cxx_nullptr _gnuc_has_version(4, 6)
#else
#  error
#endif

#endif
