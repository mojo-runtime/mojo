#pragma once

#include "c/char16_t.h"
#include "c/char32_t.h"

//--------------------------------------------------------------------------------------------------
// Macros

#if !defined(__STDC_UTF_16__)
#  define __STDC_UTF_16__ 1
#endif
#if !defined(__STDC_UTF_32__)
#  define __STDC_UTF_32__ 1
#endif

//--------------------------------------------------------------------------------------------------
// Functions

// mbrtoc16
// c16rtomb
// mbrtoc32
// c32rtomb
