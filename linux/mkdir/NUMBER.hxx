#pragma once

#include "linux/__Number.hxx"

namespace linux::mkdir {

static
const __Number
NUMBER =
#if defined(__x86_64__)
 83
#else
#  error
#endif
 ;

}
