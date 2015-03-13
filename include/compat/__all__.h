#include "has_64_bit_integer_types.h"

#include "has_c_alignas.h"
#include "has_c_alignof.h"
#include "has_c_boolean_type.h"
#include "has_c_noreturn.h"
#include "has_c_static_assert.h"

#include "has_cxx_alignas.h"
#include "has_cxx_alignof.h"
#include "has_cxx_exceptions.h"
#include "has_cxx_rtti.h"
#include "has_cxx_static_assert.h"

#include "has_ieee754_double.h"
#include "has_ieee754_float.h"

#include "_Bool.h"
#include "_Noreturn.h"

#include "_has_clang_minor.h"

#include "__has_builtin.h"

#include "__INT8_TYPE__.h"
#include "__INT16_TYPE__.h"
#include "__INT32_TYPE__.h"
#include "__INT64_TYPE__.h"

#include "__POINTER_WIDTH__.h"

#include "__SIZE_TYPE__.h"

#include "__UINT8_TYPE__.h"
#include "__UINT16_TYPE__.h"
#include "__UINT32_TYPE__.h"
#include "__UINT64_TYPE__.h"

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
