#pragma once

#include "config/__has_attribute_mode.h"

#if __has_attribute_mode
typedef unsigned int __Byte __attribute__((__mode__(__byte__)));
#else
#  error
#endif
