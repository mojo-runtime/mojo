#ifndef __unused__

#include "__has_attribute.h"

#if !__has_attribute(unused)
#  error
#endif

#endif
