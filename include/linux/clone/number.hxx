#pragma once

#include "linux/__Number.hxx"

namespace linux::clone {

static
const __Number
number =
#if defined(__x86_64__)
 56
#else
#  error
#endif
 ;

}
