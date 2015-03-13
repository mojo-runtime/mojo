#ifndef UINTMAX_C
#  ifdef __UINTMAX_C
#    define UINTMAX_C(x) __UINTMAX_C(x)
#  elif defined(__UINTMAX_C_SUFFIX__)
#    define UINTMAX_C(x) x ## __UINTMAX_C_SUFFIX__
#  else
#    error
#  endif
#endif
