#pragma once

#include "linux/__Number.hxx"

namespace linux::munmap {

static
const __Number
NUMBER =
#if defined(__x86_64__)
 25
#else
#  error
#endif
 ;

}
