#pragma once

#include "__has_attribute.h"

#if __has_attribute(mode)
typedef unsigned int __Byte __attribute__((__mode__(__byte__)));
#else
#  error
#endif
