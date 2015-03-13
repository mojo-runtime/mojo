#ifndef _gnuc_has_feature

#include "has_version!.h"

#define _gnuc_has_feature_c_alignas         _gnuc_has_version(4, 7)
#define _gnuc_has_feature_c_alignof         _gnuc_has_version(4, 7)
#define _gnuc_has_feature_c_static_assert   _gnuc_has_version(4, 6)
#define _gnuc_has_feature_cxx_alignas       _gnuc_has_version(4, 8)
#define _gnuc_has_feature_cxx_alignof       _gnuc_has_version(4, 8)
#define _gnuc_has_feature_cxx_nullptr       _gnuc_has_version(4, 6)
#define _gnuc_has_feature_cxx_static_assert _gnuc_has_version(4, 3)

#if defined(__EXCEPTIONS)
#  define _gnuc_has_feature_cxx_exceptions 1
#else
#  define _gnuc_has_feature_cxx_exceptions 0
#endif

#if defined(__GXX_RTTI)
#  define _gnuc_has_feature_cxx_rtti 1
#else
#  define _gnuc_has_feature_cxx_rtti 0
#endif

#define _gnuc_has_feature(x) _gnuc_has_feature_ ## x

#endif
