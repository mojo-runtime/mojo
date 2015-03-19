#pragma once

#include "linux/__Number.hxx"

namespace linux::symlink {

static
const __Number
number =
#if defined(__x86_64__)
 88
#else
#  error
#endif
 ;

}
