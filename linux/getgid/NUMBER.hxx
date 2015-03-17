#pragma once

#include "linux/__Number.hxx"

namespace linux::getgid {

static
const __Number
NUMBER =
#if defined(__x86_64__)
 104
#else
#  error
#endif
 ;

}
