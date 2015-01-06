#ifndef _c__assert_h
#define _c__assert_h

#ifdef NDEBUG
#  include "c/__compiler/__builtin_assume?.h"
#  define assert(x) __builtin_assume(x) // FIXME: clang (false-ly?) reports `-Wassume`
#else
#  include "c/_die.h"
#  include "c/__internal/__c_STATIC_CAST.h"
#  define assert(x) ((x) ? __c_STATIC_CAST(void, 0) : _die("assertion failed", #x, __FILE__, __LINE__, __FUNCTION__))
#endif

#endif
