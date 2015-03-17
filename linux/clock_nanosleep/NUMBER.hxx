#pragma once

#include "linux/__Number.hxx"

namespace linux::clock_nanosleep {

static
const __Number
NUMBER =
#if defined(__x86_64__)
 230
#else
#  error
#endif
 ;

}
