#pragma once

#include "linux/__Number.hxx"

namespace linux::fstatat {

static
const __Number
NUMBER =
#if defined(__x86_64__)
 262
#else
#  error
#endif
 ;

}
