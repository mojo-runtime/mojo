#pragma once

#include "linux/__Number.hxx"

namespace linux::clock_settime {

static
const __Number
NUMBER =
#if defined(__x86_64__)
 227
#else
#  error
#endif
 ;

}
