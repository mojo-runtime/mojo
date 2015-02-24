#ifndef _stdint_h_
#define _stdint_h_

// Structure and comments follow:
// http://pubs.opengroup.org/onlinepubs/009695399/basedefs/stdint.h.html

//------------------------------------------------------------------------------------------------//
// Integer Types
// * Exact-width integer types

#include "int8_t.h"
#include "int16_t.h"
#include "int32_t.h"

#include "uint8_t.h"
#include "uint16_t.h"
#include "uint32_t.h"

// "If an implementation provides integer types with width 64 that meet these requirements,
// then the following types are required:"

// Temporarily define whether this is the case.

#ifdef __INTMAX_WIDTH__
#  define __stdint_64 (__INTMAX_WIDTH__ >= 64)
#else
#  error todo
#endif

#if __stdint_64
#  include "int64_t.h"
#  include "uint64_t.h"
#endif

//------------------------------------------------------------------------------------------------//
// * Minimum-width integer types

#include "int_least8_t.h"
#include "int_least16_t.h"
#include "int_least32_t.h"
#if __stdint_64
#  include "int_least64_t.h"
#endif

#include "uint_least8_t.h"
#include "uint_least16_t.h"
#include "uint_least32_t.h"
#if __stdint_64
#  include "uint_least64_t.h"
#endif

//------------------------------------------------------------------------------------------------//
// * Fastest minimum-width integer types

#include "int_fast8_t.h"
#include "int_fast16_t.h"
#include "int_fast32_t.h"
#if __stdint_64
#  include "int_fast64_t.h"
#endif

#include "uint_fast8_t.h"
#include "uint_fast16_t.h"
#include "uint_fast32_t.h"
#if __stdint_64
#  include "uint_fast64_t.h"
#endif

//------------------------------------------------------------------------------------------------//
// * Integer types capable of holding object pointers

#include "intptr_t.h"
#include "uintptr_t.h"

//------------------------------------------------------------------------------------------------//
// * Greatest-width integer types

#include "intmax_t.h"
#include "uintmax_t.h"

//------------------------------------------------------------------------------------------------//
// Limits of Specified-Width Integer Types

// XXX: NOT respecting this, as these are constants:
//
// "The following macros specify the minimum and maximum limits of the types declared in
// the <stdint.h> header.  Each macro names corresponds to a similar type name in Integer Types.
//
// Each instance of any defined macro shall be replaced by a constant expression
// suitable for use in `#if` preprocessing directories..."

// * Limits of exact-width integer types
//  - Minimum values of exact-width signed integer types:

#include "INT8_MAX.h"
#include "INT16_MAX.h"
#include "INT32_MAX.h"
#if __stdint_64
#  include "INT64_MAX.h"
#endif

//------------------------------------------------------------------------------------------------//
//  - Maximum values of exact-width signed integer types:

#include "INT8_MIN.h"
#include "INT16_MIN.h"
#include "INT32_MIN.h"
#if __stdint_64
#  include "INT64_MIN.h"
#endif

//------------------------------------------------------------------------------------------------//
//  - Maximum values of exact-width unsigned integer types:

#include "UINT8_MAX.h"
#include "UINT16_MAX.h"
#include "UINT32_MAX.h"
#if __stdint_64
#  include "UINT64_MAX.h"
#endif

//------------------------------------------------------------------------------------------------//
// * Limits of minimum-width integer types
//  - Minimum values of minimum-width signed integer types:

#include "INT_LEAST8_MIN.h"
#include "INT_LEAST16_MIN.h"
#include "INT_LEAST32_MIN.h"
#if __stdint_64
#  include "INT_LEAST64_MIN.h"
#endif

//------------------------------------------------------------------------------------------------//
//  - Maximum values of minimum-width signed integer types:

#include "INT_LEAST8_MAX.h"
#include "INT_LEAST16_MAX.h"
#include "INT_LEAST32_MAX.h"
#if __stdint_64
#  include "INT_LEAST64_MAX.h"
#endif

//------------------------------------------------------------------------------------------------//
//  - Maximum values of minimum-width unsigned integer types:

#include "UINT_LEAST8_MAX.h"
#include "UINT_LEAST16_MAX.h"
#include "UINT_LEAST32_MAX.h"
#if __stdint_64
#  include "UINT_LEAST64_MAX.h"
#endif

//------------------------------------------------------------------------------------------------//
// * Limits of fastest minimum-width integer types
//  - Minimum values of fastest minimum-width signed integer types:

#include "INT_FAST8_MIN.h"
#include "INT_FAST16_MIN.h"
#include "INT_FAST32_MIN.h"
#if __stdint_64
#  include "INT_FAST64_MIN.h"
#endif

//------------------------------------------------------------------------------------------------//
//  - Maximum values of fastest minimum-width signed integer types:

#include "INT_FAST8_MAX.h"
#include "INT_FAST16_MAX.h"
#include "INT_FAST32_MAX.h"
#if __stdint_64
#  include "INT_FAST64_MAX.h"
#endif

//------------------------------------------------------------------------------------------------//
//  - Maximum values of fastest minimum-width unsigned integer types:

#include "UINT_FAST8_MAX.h"
#include "UINT_FAST16_MAX.h"
#include "UINT_FAST32_MAX.h"
#if __stdint_64
#  include "UINT_FAST64_MAX.h"
#endif

//------------------------------------------------------------------------------------------------//
// * Limits of integer types capable of holding object pointers
//  - Minimum value of pointer-holding signed integer type:

#include "INTPTR_MIN.h"

//------------------------------------------------------------------------------------------------//
//  - Maximum value of pointer-holding signed integer type:

#include "INTPTR_MAX.h"

//------------------------------------------------------------------------------------------------//
//  - Maximum value of pointer-holding unsigned integer type:

#include "UINTPTR_MAX.h"

//------------------------------------------------------------------------------------------------//
// * Limits of greatest-width integer types
//  - Minimum value of greatest-width signed integer type:

#include "INTMAX_MIN.h"

//------------------------------------------------------------------------------------------------//
//  - Maximum value of greatest-width signed integer type:

#include "INTMAX_MAX.h"

//------------------------------------------------------------------------------------------------//
//  - Maximum value of greatest-width unsigned integer type:

#include "UINTMAX_MAX.h"

//------------------------------------------------------------------------------------------------//
// Limits of Other Integer Types
// * Limits of ptrdiff_t:

#include "PTRDIFF_MIN.h"
#include "PTRDIFF_MAX.h"

//------------------------------------------------------------------------------------------------//
// * Limits of sig_atomic_t:

#include "SIG_ATOMIC_MIN.h"
#include "SIG_ATOMIC_MAX.h"

//------------------------------------------------------------------------------------------------//
// * Limit of size_t:

#include "SIZE_MAX.h"

//------------------------------------------------------------------------------------------------//
// * Limits of wchar_t:

#include "WCHAR_MIN.h"
#include "WCHAR_MAX.h"

//------------------------------------------------------------------------------------------------//
// * Limits of wint_t:

#include "WINT_MIN.h"
#include "WINT_MAX.h"

//------------------------------------------------------------------------------------------------//
// Macros for Integer Constant Expressions
// * Macros for minimum-width integer constant expressions

#include "INT8_C.h"
#include "INT16_C.h"
#include "INT32_C.h"
#if __stdint_64
#  include "INT64_C.h"
#endif

#include "UINT8_C.h"
#include "UINT16_C.h"
#include "UINT32_C.h"
#if __stdint_64
#  include "UINT64_C.h"
#endif

//------------------------------------------------------------------------------------------------//
// * Macros for greatest-width integer constant expressions

#include "INTMAX_C.h"
#include "UINTMAX_C.h"

//------------------------------------------------------------------------------------------------//

#undef __stdint_64

#endif
