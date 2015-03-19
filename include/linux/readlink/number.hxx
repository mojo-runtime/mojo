#pragma once

#include "linux/__Number.hxx"

namespace linux::readlink {

static
const __Number
number =
#if defined(__x86_64__)
 89
#else
#  error
#endif
 ;

}
