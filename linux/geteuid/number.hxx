#pragma once

#include "linux/__Number.hxx"

namespace linux::geteuid {

static
const __Number
number =
#if defined(__x86_64__)
 107
#else
#  error
#endif
 ;

}
