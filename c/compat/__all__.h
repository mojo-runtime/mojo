#include "alignas.h"
#include "alignof.h"
#include "bool.h"
#include "false.h"
#include "static_assert.h"
#include "true.h"

#include "_Noreturn.h"

#if __has_builtin(__builtin_addressof) || !defined(__cplusplus)
#  include "__builtin_addressof.h"
#else
#  warning "__builtin_addressof: not implemented"
#endif
#include "__builtin_assume.h"
#include "__builtin_assume_aligned.h"
#include "__builtin_bswap32.h"
#include "__builtin_bswap64.h"
#include "__builtin_constant_p.h"
#include "__builtin_expect.h"
#include "__builtin_unreachable.h"

#include "__optnone__.h"
#include "__unavailable__.h"
#include "__unused__.h"
#include "__used__.h"
