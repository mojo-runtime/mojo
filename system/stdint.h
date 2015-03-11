#ifndef _stdint_h_
#define _stdint_h_

// Structure and comments follow:
// http://pubs.opengroup.org/onlinepubs/009695399/basedefs/stdint.h.html

//------------------------------------------------------------------------------------------------//
// Integer Types
// * Exact-width integer types

#include "c/int8_t.h"
#include "c/int16_t.h"
#include "c/int32_t.h"

#include "c/uint8_t.h"
#include "c/uint16_t.h"
#include "c/uint32_t.h"

// "If an implementation provides integer types with width 64 that meet these requirements,
// then the following types are required:"

#include "compat/has_64_bit_integer_types.h"

#if has_64_bit_integer_types
#  include "c/int64_t.h"
#  include "c/uint64_t.h"
#endif

//------------------------------------------------------------------------------------------------//
// * Minimum-width integer types

#include "c/int_least8_t.h"
#include "c/int_least16_t.h"
#include "c/int_least32_t.h"
#if has_64_bit_integer_types
#  include "c/int_least64_t.h"
#endif

#include "c/uint_least8_t.h"
#include "c/uint_least16_t.h"
#include "c/uint_least32_t.h"
#if has_64_bit_integer_types
#  include "c/uint_least64_t.h"
#endif

//------------------------------------------------------------------------------------------------//
// * Fastest minimum-width integer types

#include "c/int_fast8_t.h"
#include "c/int_fast16_t.h"
#include "c/int_fast32_t.h"
#if has_64_bit_integer_types
#  include "c/int_fast64_t.h"
#endif

#include "c/uint_fast8_t.h"
#include "c/uint_fast16_t.h"
#include "c/uint_fast32_t.h"
#if has_64_bit_integer_types
#  include "c/uint_fast64_t.h"
#endif

//------------------------------------------------------------------------------------------------//
// * Integer types capable of holding object pointers

#include "c/intptr_t.h"
#include "c/uintptr_t.h"

//------------------------------------------------------------------------------------------------//
// * Greatest-width integer types

#include "c/intmax_t.h"
#include "c/uintmax_t.h"

//------------------------------------------------------------------------------------------------//
// Limits of Specified-Width Integer Types

// XXX: NOT respecting this, as these are constants:
//
// "The following macros specify the minimum and maximum limits of the types declared in
// the <stdint.h> header.  Each macro names corresponds to a similar type name in Integer Types.
//
// Each instance of any defined macro shall be replaced by a constant expression
// suitable for use in `#if` preprocessing directoriesc."

// * Limits of exact-width integer types
//  - Minimum values of exact-width signed integer types:

#include "c/INT8_MAX.h"
#include "c/INT16_MAX.h"
#include "c/INT32_MAX.h"
#if has_64_bit_integer_types
#  include "c/INT64_MAX.h"
#endif

//------------------------------------------------------------------------------------------------//
//  - Maximum values of exact-width signed integer types:

#include "c/INT8_MIN.h"
#include "c/INT16_MIN.h"
#include "c/INT32_MIN.h"
#if has_64_bit_integer_types
#  include "c/INT64_MIN.h"
#endif

//------------------------------------------------------------------------------------------------//
//  - Maximum values of exact-width unsigned integer types:

#include "c/UINT8_MAX.h"
#include "c/UINT16_MAX.h"
#include "c/UINT32_MAX.h"
#if has_64_bit_integer_types
#  include "c/UINT64_MAX.h"
#endif

//------------------------------------------------------------------------------------------------//
// * Limits of minimum-width integer types
//  - Minimum values of minimum-width signed integer types:

#include "c/INT_LEAST8_MIN.h"
#include "c/INT_LEAST16_MIN.h"
#include "c/INT_LEAST32_MIN.h"
#if has_64_bit_integer_types
#  include "c/INT_LEAST64_MIN.h"
#endif

//------------------------------------------------------------------------------------------------//
//  - Maximum values of minimum-width signed integer types:

#include "c/INT_LEAST8_MAX.h"
#include "c/INT_LEAST16_MAX.h"
#include "c/INT_LEAST32_MAX.h"
#if has_64_bit_integer_types
#  include "c/INT_LEAST64_MAX.h"
#endif

//------------------------------------------------------------------------------------------------//
//  - Maximum values of minimum-width unsigned integer types:

#include "c/UINT_LEAST8_MAX.h"
#include "c/UINT_LEAST16_MAX.h"
#include "c/UINT_LEAST32_MAX.h"
#if has_64_bit_integer_types
#  include "c/UINT_LEAST64_MAX.h"
#endif

//------------------------------------------------------------------------------------------------//
// * Limits of fastest minimum-width integer types
//  - Minimum values of fastest minimum-width signed integer types:

#include "c/INT_FAST8_MIN.h"
#include "c/INT_FAST16_MIN.h"
#include "c/INT_FAST32_MIN.h"
#if has_64_bit_integer_types
#  include "c/INT_FAST64_MIN.h"
#endif

//------------------------------------------------------------------------------------------------//
//  - Maximum values of fastest minimum-width signed integer types:

#include "c/INT_FAST8_MAX.h"
#include "c/INT_FAST16_MAX.h"
#include "c/INT_FAST32_MAX.h"
#if has_64_bit_integer_types
#  include "c/INT_FAST64_MAX.h"
#endif

//------------------------------------------------------------------------------------------------//
//  - Maximum values of fastest minimum-width unsigned integer types:

#include "c/UINT_FAST8_MAX.h"
#include "c/UINT_FAST16_MAX.h"
#include "c/UINT_FAST32_MAX.h"
#if has_64_bit_integer_types
#  include "c/UINT_FAST64_MAX.h"
#endif

//------------------------------------------------------------------------------------------------//
// * Limits of integer types capable of holding object pointers
//  - Minimum value of pointer-holding signed integer type:

#include "c/INTPTR_MIN.h"

//------------------------------------------------------------------------------------------------//
//  - Maximum value of pointer-holding signed integer type:

#include "c/INTPTR_MAX.h"

//------------------------------------------------------------------------------------------------//
//  - Maximum value of pointer-holding unsigned integer type:

#include "c/UINTPTR_MAX.h"

//------------------------------------------------------------------------------------------------//
// * Limits of greatest-width integer types
//  - Minimum value of greatest-width signed integer type:

#include "c/INTMAX_MIN.h"

//------------------------------------------------------------------------------------------------//
//  - Maximum value of greatest-width signed integer type:

#include "c/INTMAX_MAX.h"

//------------------------------------------------------------------------------------------------//
//  - Maximum value of greatest-width unsigned integer type:

#include "c/UINTMAX_MAX.h"

//------------------------------------------------------------------------------------------------//
// Limits of Other Integer Types
// * Limits of ptrdiff_t:

#include "c/PTRDIFF_MIN.h"
#include "c/PTRDIFF_MAX.h"

//------------------------------------------------------------------------------------------------//
// * Limits of sig_atomic_t:

#include "c/SIG_ATOMIC_MIN.h"
#include "c/SIG_ATOMIC_MAX.h"

//------------------------------------------------------------------------------------------------//
// * Limit of size_t:

#include "c/SIZE_MAX.h"

//------------------------------------------------------------------------------------------------//
// * Limits of wchar_t:

#include "c/WCHAR_MIN.h"
#include "c/WCHAR_MAX.h"

//------------------------------------------------------------------------------------------------//
// * Limits of wint_t:

#include "c/WINT_MIN.h"
#include "c/WINT_MAX.h"

//------------------------------------------------------------------------------------------------//
// Macros for Integer Constant Expressions
// * Macros for minimum-width integer constant expressions

#include "c/INT8_C.h"
#include "c/INT16_C.h"
#include "c/INT32_C.h"
#if has_64_bit_integer_types
#  include "c/INT64_C.h"
#endif

#include "c/UINT8_C.h"
#include "c/UINT16_C.h"
#include "c/UINT32_C.h"
#if has_64_bit_integer_types
#  include "c/UINT64_C.h"
#endif

//------------------------------------------------------------------------------------------------//
// * Macros for greatest-width integer constant expressions

#include "c/INTMAX_C.h"
#include "c/UINTMAX_C.h"

//------------------------------------------------------------------------------------------------//

#endif
