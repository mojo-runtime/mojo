#pragma once

#include "linux/__Number.hxx"

namespace linux::gettid {

static
const __Number
number =
#if defined(__x86_64__)
 186
#else
#  error
#endif
 ;

}
