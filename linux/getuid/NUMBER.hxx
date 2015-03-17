#pragma once

#include "linux/__Number.hxx"

namespace linux::getuid {

static
const __Number
NUMBER =
#if defined(__x86_64__)
 102
#else
#  error
#endif
 ;

}
