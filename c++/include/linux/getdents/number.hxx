#pragma once

#include "linux/__Number.hxx"

namespace linux::getdents {

static
const __Number
number =
#if defined(__x86_64__)
 78
#else
#  error
#endif
 ;

}
