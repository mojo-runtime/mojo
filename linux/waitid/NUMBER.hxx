#pragma once

#include "linux/__Number.hxx"

namespace linux::waitid {

static
const __Number
NUMBER =
#if defined(__x86_64__)
 247
#else
#  error
#endif
 ;

}
