#pragma once

#include "linux/__Number.hxx"

namespace linux::chown {

static
const __Number
number =
#if defined(__x86_64__)
 92
#else
#  error
#endif
 ;

}
