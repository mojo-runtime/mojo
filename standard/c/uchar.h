#pragma once

#include "c/char16_t.h"
#include "c/char32_t.h"

//--------------------------------------------------------------------------------------------------
// Macros

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__STDC_UTF_16__)
#  define __STDC_UTF_16__ 1
#endif
#if !defined(__STDC_UTF_32__)
#  define __STDC_UTF_32__ 1
#endif

#pragma clang diagnostic pop

//--------------------------------------------------------------------------------------------------
// Functions

// mbrtoc16
// c16rtomb
// mbrtoc32
// c32rtomb
