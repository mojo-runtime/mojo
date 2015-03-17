#pragma once

#include "linux/__Number.hxx"

namespace linux::read {

static
const __Number
number =
#if defined(__x86_64__)
 0
#else
#  error
#endif
 ;

}
