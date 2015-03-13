#ifndef has_c_static_assert

#if defined(__has_feature)
#  define has_c_static_assert __has_feature(c_static_assert)
#elif defined(__GNUC__)
#  include "_gnuc/has_version!.h"
#  define has_c_static_assert _gnuc_has_version(4, 6)
#else
#  error
#endif

#endif
