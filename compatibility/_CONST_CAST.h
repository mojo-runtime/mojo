#ifndef _CONST_CAST
#  ifdef __cplusplus
#    define _CONST_CAST(x, y) const_cast<x>(y)
#  else
#    define _CONST_CAST(x, y) ((x)(y))
#  endif
#endif
