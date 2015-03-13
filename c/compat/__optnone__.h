#ifndef __optnone__

#include "__has_attribute.h"

#if !__has_attribute(optnone)
#  if __has_attribute(optimize)
#    define __optnone__ __optimize__(0)
#  else
#    error
#  endif
#endif

#endif
