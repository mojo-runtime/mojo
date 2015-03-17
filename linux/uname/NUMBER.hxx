#pragma once

#include "linux/__Number.hxx"

namespace linux::uname {

static
const __Number
NUMBER =
#if defined(__x86_64__)
 63
#else
#  error
#endif
 ;

}
