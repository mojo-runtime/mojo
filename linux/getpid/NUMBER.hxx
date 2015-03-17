#pragma once

#include "linux/__Number.hxx"

namespace linux::getpid {

static
const __Number
NUMBER =
#if defined(__x86_64__)
 39
#else
#  error
#endif
 ;

}
