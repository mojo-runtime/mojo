#pragma once

#include "linux/__Number.hxx"

namespace linux::inotify_init1 {

static
const __Number
NUMBER =
#if defined(__x86_64__)
 294
#else
#  error
#endif
 ;

}
