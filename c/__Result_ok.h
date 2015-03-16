#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__linux__)
#  include "compat/__static_cast.h"
#  define __Result_ok(Ok, word) __static_cast(Ok, word)
#else
#  error
#endif

#pragma clang diagnostic pop
