#ifndef CONST_CAST
#  ifdef __cplusplus
#    define CONST_CAST(x, y) const_cast<x>(y)
#  else
#    define CONST_CAST(x, y) ((x)(y))
#  endif
#endif
