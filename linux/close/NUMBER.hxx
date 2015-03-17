#pragma once

#include "linux/__Number.hxx"

namespace linux::close {

static
const __Number
NUMBER =
#if defined(__x86_64__)
 3
#else
#  error
#endif
 ;

}
