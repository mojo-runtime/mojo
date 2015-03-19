#pragma once

// Structure and comments follow:
// http://pubs.opengroup.org/onlinepubs/009695399/basedefs/stdint.h.html

//------------------------------------------------------------------------------------------------//
// Integer Types
// * Exact-width integer types

#include <int8_t>
#include <int16_t>
#include <int32_t>
#include <int64_t>

#include <uint8_t>
#include <uint16_t>
#include <uint32_t>
#include <uint64_t>

//------------------------------------------------------------------------------------------------//
// * Minimum-width integer types

#include <int_least8_t>
#include <int_least16_t>
#include <int_least32_t>
#include <int_least64_t>

#include <uint_least8_t>
#include <uint_least16_t>
#include <uint_least32_t>
#include <uint_least64_t>

//------------------------------------------------------------------------------------------------//
// * Fastest minimum-width integer types

#include <int_fast8_t>
#include <int_fast16_t>
#include <int_fast32_t>
#include <int_fast64_t>

#include <uint_fast8_t>
#include <uint_fast16_t>
#include <uint_fast32_t>
#include <uint_fast64_t>

//------------------------------------------------------------------------------------------------//
// * Integer types capable of holding object pointers

#include <intptr_t>
#include <uintptr_t>

//------------------------------------------------------------------------------------------------//
// * Greatest-width integer types

#include <intmax_t>
#include <uintmax_t>

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

#include <INT8_MAX>
#include <INT16_MAX>
#include <INT32_MAX>
#include <INT64_MAX>

//------------------------------------------------------------------------------------------------//
//  - Maximum values of exact-width signed integer types:

#include <INT8_MIN>
#include <INT16_MIN>
#include <INT32_MIN>
#include <INT64_MIN>

//------------------------------------------------------------------------------------------------//
//  - Maximum values of exact-width unsigned integer types:

#include <UINT8_MAX>
#include <UINT16_MAX>
#include <UINT32_MAX>
#include <UINT64_MAX>

//------------------------------------------------------------------------------------------------//
// * Limits of minimum-width integer types
//  - Minimum values of minimum-width signed integer types:

#include <INT_LEAST8_MIN>
#include <INT_LEAST16_MIN>
#include <INT_LEAST32_MIN>
#include <INT_LEAST64_MIN>

//------------------------------------------------------------------------------------------------//
//  - Maximum values of minimum-width signed integer types:

#include <INT_LEAST8_MAX>
#include <INT_LEAST16_MAX>
#include <INT_LEAST32_MAX>
#include <INT_LEAST64_MAX>

//------------------------------------------------------------------------------------------------//
//  - Maximum values of minimum-width unsigned integer types:

#include <UINT_LEAST8_MAX>
#include <UINT_LEAST16_MAX>
#include <UINT_LEAST32_MAX>
#include <UINT_LEAST64_MAX>

//------------------------------------------------------------------------------------------------//
// * Limits of fastest minimum-width integer types
//  - Minimum values of fastest minimum-width signed integer types:

#include <INT_FAST8_MIN>
#include <INT_FAST16_MIN>
#include <INT_FAST32_MIN>
#include <INT_FAST64_MIN>

//------------------------------------------------------------------------------------------------//
//  - Maximum values of fastest minimum-width signed integer types:

#include <INT_FAST8_MAX>
#include <INT_FAST16_MAX>
#include <INT_FAST32_MAX>
#include <INT_FAST64_MAX>

//------------------------------------------------------------------------------------------------//
//  - Maximum values of fastest minimum-width unsigned integer types:

#include <UINT_FAST8_MAX>
#include <UINT_FAST16_MAX>
#include <UINT_FAST32_MAX>
#include <UINT_FAST64_MAX>

//------------------------------------------------------------------------------------------------//
// * Limits of integer types capable of holding object pointers
//  - Minimum value of pointer-holding signed integer type:

#include <INTPTR_MIN>

//------------------------------------------------------------------------------------------------//
//  - Maximum value of pointer-holding signed integer type:

#include <INTPTR_MAX>

//------------------------------------------------------------------------------------------------//
//  - Maximum value of pointer-holding unsigned integer type:

#include <UINTPTR_MAX>

//------------------------------------------------------------------------------------------------//
// * Limits of greatest-width integer types
//  - Minimum value of greatest-width signed integer type:

#include <INTMAX_MIN>

//------------------------------------------------------------------------------------------------//
//  - Maximum value of greatest-width signed integer type:

#include <INTMAX_MAX>

//------------------------------------------------------------------------------------------------//
//  - Maximum value of greatest-width unsigned integer type:

#include <UINTMAX_MAX>

//------------------------------------------------------------------------------------------------//
// Limits of Other Integer Types
// * Limits of ptrdiff_t:

#include <PTRDIFF_MIN>
#include <PTRDIFF_MAX>

//------------------------------------------------------------------------------------------------//
// * Limits of sig_atomic_t:

#include <SIG_ATOMIC_MIN>
#include <SIG_ATOMIC_MAX>

//------------------------------------------------------------------------------------------------//
// * Limit of size_t:

#include <SIZE_MAX>

//------------------------------------------------------------------------------------------------//
// * Limits of wchar_t:

#include <WCHAR_MIN>
#include <WCHAR_MAX>

//------------------------------------------------------------------------------------------------//
// * Limits of wint_t:

#include <WINT_MIN>
#include <WINT_MAX>

//------------------------------------------------------------------------------------------------//
// Macros for Integer Constant Expressions
// * Macros for minimum-width integer constant expressions

#include <INT8_C>
#include <INT16_C>
#include <INT32_C>
#include <INT64_C>

#include <UINT8_C>
#include <UINT16_C>
#include <UINT32_C>
#include <UINT64_C>

//------------------------------------------------------------------------------------------------//
// * Macros for greatest-width integer constant expressions

#include <INTMAX_C>
#include <UINTMAX_C>
