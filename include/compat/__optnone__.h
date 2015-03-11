#ifndef __optnone__

#include "has_attribute_optnone.h"

#if !has_attribute_optnone
#  if has_attribute_optimize
#    define __optnone__ __optimize__(0)
#  else
#    error
#  endif
#endif

#endif
