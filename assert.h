#ifndef _c__assert_h
#define _c__assert_h

#ifdef NDEBUG
#  include "c/__compiler/__builtin_assume?.h"
#  define assert(x) __builtin_assume(x) // FIXME: clang (false-ly?) reports `-Wassume`
#else
#  include "c/__c_DIE.h"
#  include "c/__c++/__c_STATIC_CAST.h"
#  define assert(x) ((x) ? __c_STATIC_CAST(void, 0) : __c_DIE("assertion failed", #x))
#endif

#endif
