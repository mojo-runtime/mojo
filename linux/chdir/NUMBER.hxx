#pragma once

#include "linux/__Number.hxx"

namespace linux::chdir {

static
const __Number
NUMBER =
#if defined(__x86_64__)
 80
#else
#  error
#endif
 ;

}
