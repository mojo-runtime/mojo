#ifndef __c_ALIGNED
#  if defined(__cplusplus)
#    define __c_ALIGNED(x) alignas(x)
#  elif defined(__GNUC__)
#    define __c_ALIGNED(x) __attribute__((aligned(x)))
#  else
#    error todo
#  endif
#endif
