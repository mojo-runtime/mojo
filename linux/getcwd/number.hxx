#pragma once

#include "linux/__Number.hxx"

namespace linux::getcwd {

static
const __Number
number =
#if defined(__x86_64__)
 79
#else
#  error
#endif
 ;

}
