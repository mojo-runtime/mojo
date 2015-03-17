#pragma once

#include "linux/__Number.hxx"

namespace linux::exit {

static
const __Number
NUMBER =
#if defined(__x86_64__)
 60
#else
#  error
#endif
 ;

}
