#ifndef _gnuc_has_builtin

#include "has_version!.h"

#define _gnuc_has_builtin___builtin_addressof      0 // clang
#define _gnuc_has_builtin___builtin_alloca         1 // version?
#define _gnuc_has_builtin___builtin_assume         0 // clang
#define _gnuc_has_builtin___builtin_assume_aligned 1 // version?
#define _gnuc_has_builtin___builtin_bswap32        _gnuc_has_version(4, 3)
#define _gnuc_has_builtin___builtin_bswap64        _gnuc_has_version(4, 3)
#define _gnuc_has_builtin___builtin_constant_p     1 // version?
#define _gnuc_has_builtin___builtin_expect         _gnuc_has_version(3, 0)
#define _gnuc_has_builtin___builtin_memcmp         1 // version?
#define _gnuc_has_builtin___builtin_memcpy         1 // version?
#define _gnuc_has_builtin___builtin_memset         1 // version?
#define _gnuc_has_builtin___builtin_offsetof       1 // version?
#define _gnuc_has_builtin___builtin_strcmp         1 // version?
#define _gnuc_has_builtin___builtin_strlen         1 // version?
#define _gnuc_has_builtin___builtin_unreachable    1 // version?
#define _gnuc_has_builtin___builtin_va_arg         1 // version?
#define _gnuc_has_builtin___builtin_va_copy        1 // version?
#define _gnuc_has_builtin___builtin_va_end         1 // version?
#define _gnuc_has_builtin___builtin_va_list        1 // version?
#define _gnuc_has_builtin___builtin_va_start       1 // version?

#define _gnuc_has_builtin(x) _gnuc_has_builtin_ ## x

#endif
