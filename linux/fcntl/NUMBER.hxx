#pragma once

#include "linux/__Number.hxx"

namespace linux::fcntl {

static
const __Number
NUMBER =
#if defined(__x86_64__)
 72
#else
#  error
#endif
 ;

}
