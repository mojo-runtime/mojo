#pragma once

#include "linux/__Number.hxx"

namespace linux::inotify_add_watch {

static
const __Number
number =
#if defined(__x86_64__)
 254
#else
#  error
#endif
 ;

}
