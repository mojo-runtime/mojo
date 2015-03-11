#include "has_64_bit_integer_types.h"

#include "has_attribute_error.h"
#include "has_attribute_noreturn.h"
#include "has_attribute_nothrow.h"
#include "has_attribute_optimize.h"
#include "has_attribute_optnone.h"
#include "has_attribute_unavailable_with_message.h"
#include "has_attribute_unused.h"
#include "has_attribute_used.h"

#include "has_builtin_addressof.h"
#include "has_builtin_alloca.h"
#include "has_builtin_assume.h"
#include "has_builtin_assume_aligned.h"
#include "has_builtin_bswap32.h"
#include "has_builtin_bswap64.h"
#include "has_builtin_constant_p.h"
#include "has_builtin_expect.h"
#include "has_builtin_memcmp.h"
#include "has_builtin_memcpy.h"
#include "has_builtin_memset.h"
#include "has_builtin_offsetof.h"
#include "has_builtin_strcmp.h"
#include "has_builtin_strlen.h"
#include "has_builtin_unreachable.h"
#include "has_builtin_va_arg.h"
#include "has_builtin_va_copy.h"
#include "has_builtin_va_end.h"
#include "has_builtin_va_list.h"
#include "has_builtin_va_start.h"

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

#include "x_nothrow.h"
#include "x_reinterpret_cast.h"
#include "x_static_cast.h"

#include "_Bool.h"
#include "_Noreturn.h"

#include "_has_clang_minor.h"
#include "_has_gnuc_minor.h"

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

#if has_builtin_addressof || !defined(__cplusplus)
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
