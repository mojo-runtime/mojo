#pragma once

#include "linux/__Number.hxx"

namespace linux::ioctl {

static
const __Number
number =
#if defined(__x86_64__)
 16
#else
#  error
#endif
 ;

}
