#ifndef has_cxx_static_assert

#if defined(__has_feature)
#  define has_cxx_static_assert __has_feature(cxx_static_assert)
#elif defined(__GNUC__)
#  include "_has_gnuc_minor.h"
#  define has_cxx_static_assert _has_gnuc_minor(4, 3)
#else
#  error
#endif

#endif
