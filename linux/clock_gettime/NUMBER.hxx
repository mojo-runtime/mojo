#pragma once

#include "linux/__Number.hxx"

namespace linux::clock_gettime {

static
const __Number
NUMBER =
#if defined(__x86_64__)
 228
#else
#  error
#endif
 ;

}
