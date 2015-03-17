#pragma once

#include "linux/__Number.hxx"

namespace linux::pipe2 {

static
const __Number
number =
#if defined(__x86_64__)
 293
#else
#  error
#endif
 ;

}
