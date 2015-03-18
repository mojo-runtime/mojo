#pragma once

#include "__has_attribute.h"

#if __has_attribute(mode)
typedef unsigned int __Word __attribute__((__mode__(__word__)));
#else
#  error
#endif
