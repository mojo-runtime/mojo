#pragma once

#include "linux/__Number.hxx"

namespace linux::fstat {

static
const __Number
NUMBER =
#if defined(__x86_64__)
 5
#else
#  error
#endif
 ;

}
