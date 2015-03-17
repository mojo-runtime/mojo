#pragma once

#include "linux/__Number.hxx"

namespace linux::dup3 {

static
const __Number
NUMBER =
#if defined(__x86_64__)
 292
#else
#  error
#endif
 ;

}
