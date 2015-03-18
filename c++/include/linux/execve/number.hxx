#pragma once

#include "linux/__Number.hxx"

namespace linux::execve {

static
const __Number
number =
#if defined(__x86_64__)
 49
#else
#  error
#endif
 ;

}
