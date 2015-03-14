#pragma once

// Structure and comments follow:
// http://pubs.opengroup.org/onlinepubs/009695399/basedefs/stdint.h.html

//------------------------------------------------------------------------------------------------//
// Integer Types
// * Exact-width integer types

#include "std/int8_t.h"
#include "std/int16_t.h"
#include "std/int32_t.h"
#include "std/int64_t.h"

#include "std/uint8_t.h"
#include "std/uint16_t.h"
#include "std/uint32_t.h"
#include "std/uint64_t.h"

//------------------------------------------------------------------------------------------------//
// * Minimum-width integer types

#include "std/int_least8_t.h"
#include "std/int_least16_t.h"
#include "std/int_least32_t.h"
#include "std/int_least64_t.h"

#include "std/uint_least8_t.h"
#include "std/uint_least16_t.h"
#include "std/uint_least32_t.h"
#include "std/uint_least64_t.h"

//------------------------------------------------------------------------------------------------//
// * Fastest minimum-width integer types

#include "std/int_fast8_t.h"
#include "std/int_fast16_t.h"
#include "std/int_fast32_t.h"
#include "std/int_fast64_t.h"

#include "std/uint_fast8_t.h"
#include "std/uint_fast16_t.h"
#include "std/uint_fast32_t.h"
#include "std/uint_fast64_t.h"

//------------------------------------------------------------------------------------------------//
// * Integer types capable of holding object pointers

#include "std/intptr_t.h"
#include "std/uintptr_t.h"

//------------------------------------------------------------------------------------------------//
// * Greatest-width integer types

#include "std/intmax_t.h"
#include "std/uintmax_t.h"

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

#include "std/INT8_MAX.h"
#include "std/INT16_MAX.h"
#include "std/INT32_MAX.h"
#include "std/INT64_MAX.h"

//------------------------------------------------------------------------------------------------//
//  - Maximum values of exact-width signed integer types:

#include "std/INT8_MIN.h"
#include "std/INT16_MIN.h"
#include "std/INT32_MIN.h"
#include "std/INT64_MIN.h"

//------------------------------------------------------------------------------------------------//
//  - Maximum values of exact-width unsigned integer types:

#include "std/UINT8_MAX.h"
#include "std/UINT16_MAX.h"
#include "std/UINT32_MAX.h"
#include "std/UINT64_MAX.h"

//------------------------------------------------------------------------------------------------//
// * Limits of minimum-width integer types
//  - Minimum values of minimum-width signed integer types:

#include "std/INT_LEAST8_MIN.h"
#include "std/INT_LEAST16_MIN.h"
#include "std/INT_LEAST32_MIN.h"
#include "std/INT_LEAST64_MIN.h"

//------------------------------------------------------------------------------------------------//
//  - Maximum values of minimum-width signed integer types:

#include "std/INT_LEAST8_MAX.h"
#include "std/INT_LEAST16_MAX.h"
#include "std/INT_LEAST32_MAX.h"
#include "std/INT_LEAST64_MAX.h"

//------------------------------------------------------------------------------------------------//
//  - Maximum values of minimum-width unsigned integer types:

#include "std/UINT_LEAST8_MAX.h"
#include "std/UINT_LEAST16_MAX.h"
#include "std/UINT_LEAST32_MAX.h"
#include "std/UINT_LEAST64_MAX.h"

//------------------------------------------------------------------------------------------------//
// * Limits of fastest minimum-width integer types
//  - Minimum values of fastest minimum-width signed integer types:

#include "std/INT_FAST8_MIN.h"
#include "std/INT_FAST16_MIN.h"
#include "std/INT_FAST32_MIN.h"
#include "std/INT_FAST64_MIN.h"

//------------------------------------------------------------------------------------------------//
//  - Maximum values of fastest minimum-width signed integer types:

#include "std/INT_FAST8_MAX.h"
#include "std/INT_FAST16_MAX.h"
#include "std/INT_FAST32_MAX.h"
#include "std/INT_FAST64_MAX.h"

//------------------------------------------------------------------------------------------------//
//  - Maximum values of fastest minimum-width unsigned integer types:

#include "std/UINT_FAST8_MAX.h"
#include "std/UINT_FAST16_MAX.h"
#include "std/UINT_FAST32_MAX.h"
#include "std/UINT_FAST64_MAX.h"

//------------------------------------------------------------------------------------------------//
// * Limits of integer types capable of holding object pointers
//  - Minimum value of pointer-holding signed integer type:

#include "std/INTPTR_MIN.h"

//------------------------------------------------------------------------------------------------//
//  - Maximum value of pointer-holding signed integer type:

#include "std/INTPTR_MAX.h"

//------------------------------------------------------------------------------------------------//
//  - Maximum value of pointer-holding unsigned integer type:

#include "std/UINTPTR_MAX.h"

//------------------------------------------------------------------------------------------------//
// * Limits of greatest-width integer types
//  - Minimum value of greatest-width signed integer type:

#include "std/INTMAX_MIN.h"

//------------------------------------------------------------------------------------------------//
//  - Maximum value of greatest-width signed integer type:

#include "std/INTMAX_MAX.h"

//------------------------------------------------------------------------------------------------//
//  - Maximum value of greatest-width unsigned integer type:

#include "std/UINTMAX_MAX.h"

//------------------------------------------------------------------------------------------------//
// Limits of Other Integer Types
// * Limits of ptrdiff_t:

#include "std/PTRDIFF_MIN.h"
#include "std/PTRDIFF_MAX.h"

//------------------------------------------------------------------------------------------------//
// * Limits of sig_atomic_t:

#include "std/SIG_ATOMIC_MIN.h"
#include "std/SIG_ATOMIC_MAX.h"

//------------------------------------------------------------------------------------------------//
// * Limit of size_t:

#include "std/SIZE_MAX.h"

//------------------------------------------------------------------------------------------------//
// * Limits of wchar_t:

#include "std/WCHAR_MIN.h"
#include "std/WCHAR_MAX.h"

//------------------------------------------------------------------------------------------------//
// * Limits of wint_t:

#include "std/WINT_MIN.h"
#include "std/WINT_MAX.h"

//------------------------------------------------------------------------------------------------//
// Macros for Integer Constant Expressions
// * Macros for minimum-width integer constant expressions

#include "std/INT8_C.h"
#include "std/INT16_C.h"
#include "std/INT32_C.h"
#include "std/INT64_C.h"

#include "std/UINT8_C.h"
#include "std/UINT16_C.h"
#include "std/UINT32_C.h"
#include "std/UINT64_C.h"

//------------------------------------------------------------------------------------------------//
// * Macros for greatest-width integer constant expressions

#include "std/INTMAX_C.h"
#include "std/UINTMAX_C.h"
