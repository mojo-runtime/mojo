#pragma once

#include "linux/__Number.hxx"

namespace linux::tgkill {

static
const __Number
NUMBER =
#if defined(__x86_64__)
 234
#else
#  error
#endif
 ;

}
