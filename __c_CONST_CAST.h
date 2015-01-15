#ifndef __c_CONST_CAST
#  ifdef __cplusplus
#    define __c_CONST_CAST(x, y) const_cast<x>(y)
#  else
#    define __c_CONST_CAST(x, y) ((x)(y))
#  endif
#endif
