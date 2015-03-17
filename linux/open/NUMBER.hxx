#pragma once

#include "linux/__Number.hxx"

namespace linux::open {

static
const __Number
NUMBER =
#if defined(__x86_64__)
 2
#else
#  error
#endif
 ;

}
