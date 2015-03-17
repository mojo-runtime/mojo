#pragma once

#include "linux/__Number.hxx"

namespace linux::mmap {

static
const __Number
NUMBER =
#if defined(__x86_64__)
 9
#else
#  error
#endif
 ;

}
