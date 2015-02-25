#ifndef WINT_MIN
#  ifdef __WINT_MIN__
#    define WINT_MIN __WINT_MIN__
#  elif defined(__WINT_UNSIGNED__)
#    define WINT_MIN (0u)
#  else
#    define WINT_MIN 0
#  endif
#endif
