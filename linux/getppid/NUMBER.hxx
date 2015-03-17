#pragma once

#include "linux/__Number.hxx"

namespace linux::getppid {

static
const __Number
NUMBER =
#if defined(__x86_64__)
 110
#else
#  error
#endif
 ;

}
