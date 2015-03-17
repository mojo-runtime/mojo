#pragma once

#include "linux/__Number.hxx"

namespace linux::getpgid {

static
const __Number
NUMBER =
#if defined(__x86_64__)
 121
#else
#  error
#endif
 ;

}
