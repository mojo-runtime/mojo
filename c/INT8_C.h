#ifndef INT8_C
#  ifdef __INT8_C
#    define INT8_C(x) __INT8_C(x)
#  elif defined(__INT8_C_SUFFIX__)
#    define INT8_C(x) x ## __INT8_C_SUFFIX__
#  else
#    error
#  endif
#endif
