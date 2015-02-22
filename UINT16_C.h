#ifndef UINT16_C
#  ifdef __UINT16_C
#    define UINT16_C(x) __UINT16_C(x)
#  elif defined(__UINT16_C_SUFFIX__)
#    define UINT16_C(x) x ## __UINT16_C_SUFFIX__
#  else
#    error
#  endif
#endif
