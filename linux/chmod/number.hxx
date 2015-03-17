#pragma once

#include "linux/__Number.hxx"

namespace linux::chmod {

static
const __Number
number =
#if defined(__x86_64__)
 90
#else
#  error
#endif
 ;

}
