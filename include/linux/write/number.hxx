#pragma once

#include "linux/__Number.hxx"

namespace linux::write {

static
const __Number
number =
#if defined(__x86_64__)
 1
#else
#  error
#endif
 ;

}
