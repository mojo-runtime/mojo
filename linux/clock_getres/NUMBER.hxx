#pragma once

#include "linux/__Number.hxx"

namespace linux::clock_getres {

static
const __Number
NUMBER =
#if defined(__x86_64__)
 229
#else
#  error
#endif
 ;

}
