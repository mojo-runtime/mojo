#pragma once

#include "linux/__Number.hxx"

namespace linux::fchdir {

static
const __Number
NUMBER =
#if defined(__x86_64__)
 81
#else
#  error
#endif
 ;

}
