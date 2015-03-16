#pragma once

#include "config/__has_attribute_mode.h"

#if __has_attribute_mode
typedef unsigned int __Word __attribute__((__mode__(__word__)));
#else
#  error
#endif
