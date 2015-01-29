#ifndef _ALIGNED
#  if defined(__cplusplus)
#    define _ALIGNED(x) alignas(x)
#  elif defined(__GNUC__)
#    define _ALIGNED(x) __attribute__((aligned(x)))
#  else
#    error todo
#  endif
#endif
