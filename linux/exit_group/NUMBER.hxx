#pragma once

#include "linux/__Number.hxx"

namespace linux::exit_group {

static
const __Number
NUMBER =
#if defined(__x86_64__)
 231
#else
#  error
#endif
 ;

}
