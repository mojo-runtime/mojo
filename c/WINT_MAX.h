#ifndef WINT_MAX
#  ifdef __WINT_MAX__
#    define WINT_MAX __WINT_MAX__
#  elif defined(__WINT_UNSIGNED__) && defined(__WINT_WIDTH__)
#    if __WINT_UNSIGNED__ && __WINT_WIDTH__ == 32
#      define WINT_MAX (4294967295u)
#    else
#      error
#    endif
#  endif
#endif
