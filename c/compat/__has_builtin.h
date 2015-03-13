#ifndef __has_builtin

#if defined(__GNUC__)
#  include "_gnuc/has_builtin!.h"
#  define __has_builtin(x) _gnuc_has_builtin(x)
#else
#  error
#endif

#endif
