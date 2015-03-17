#pragma once

#include "linux/__Number.hxx"

namespace linux::kill {

static
const __Number
number =
#if defined(__x86_64__)
 62
#else
#  error
#endif
 ;

}
