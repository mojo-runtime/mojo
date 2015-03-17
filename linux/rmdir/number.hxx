#pragma once

#include "linux/__Number.hxx"

namespace linux::rmdir {

static
const __Number
number =
#if defined(__x86_64__)
 84
#else
#  error
#endif
 ;

}
